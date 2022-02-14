
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ tree ;
typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 size_t BUILT_IN_STRCPY ;
 int EXPAND_NORMAL ;
 scalar_t__ INTEGER_CST ;
 scalar_t__ NULL_TREE ;
 int POINTER_TYPE_P (int ) ;
 scalar_t__ TREE_CHAIN (scalar_t__) ;
 scalar_t__ TREE_CODE (scalar_t__) ;
 int TREE_TYPE (scalar_t__) ;
 scalar_t__ TREE_VALUE (scalar_t__) ;
 int VOIDmode ;
 scalar_t__ build_function_call_expr (scalar_t__,scalar_t__) ;
 scalar_t__ build_int_cst (scalar_t__,int ) ;
 scalar_t__ build_tree_list (scalar_t__,scalar_t__) ;
 char* c_getstr (scalar_t__) ;
 scalar_t__ c_strlen (scalar_t__,int) ;
 scalar_t__ const0_rtx ;
 scalar_t__ expand_expr (scalar_t__,scalar_t__,int,int ) ;
 scalar_t__* implicit_built_in_decls ;
 int init_target_chars () ;
 scalar_t__ strchr (char const*,int ) ;
 scalar_t__ strcmp (char const*,int ) ;
 int strlen (char const*) ;
 int target_percent ;
 int target_percent_s ;
 scalar_t__ tree_cons (scalar_t__,scalar_t__,scalar_t__) ;

__attribute__((used)) static rtx
expand_builtin_sprintf (tree arglist, rtx target, enum machine_mode mode)
{
  tree orig_arglist, dest, fmt;
  const char *fmt_str;

  orig_arglist = arglist;


  if (! arglist)
    return 0;
  dest = TREE_VALUE (arglist);
  if (! POINTER_TYPE_P (TREE_TYPE (dest)))
    return 0;
  arglist = TREE_CHAIN (arglist);
  if (! arglist)
    return 0;
  fmt = TREE_VALUE (arglist);
  if (! POINTER_TYPE_P (TREE_TYPE (fmt)))
    return 0;
  arglist = TREE_CHAIN (arglist);


  fmt_str = c_getstr (fmt);
  if (fmt_str == ((void*)0))
    return 0;

  if (!init_target_chars())
    return 0;


  if (strchr (fmt_str, target_percent) == 0)
    {
      tree fn = implicit_built_in_decls[BUILT_IN_STRCPY];
      tree exp;

      if (arglist || ! fn)
 return 0;
      expand_expr (build_function_call_expr (fn, orig_arglist),
     const0_rtx, VOIDmode, EXPAND_NORMAL);
      if (target == const0_rtx)
 return const0_rtx;
      exp = build_int_cst (NULL_TREE, strlen (fmt_str));
      return expand_expr (exp, target, mode, EXPAND_NORMAL);
    }

  else if (strcmp (fmt_str, target_percent_s) == 0)
    {
      tree fn, arg, len;
      fn = implicit_built_in_decls[BUILT_IN_STRCPY];

      if (! fn)
 return 0;

      if (! arglist || TREE_CHAIN (arglist))
 return 0;
      arg = TREE_VALUE (arglist);
      if (! POINTER_TYPE_P (TREE_TYPE (arg)))
 return 0;

      if (target != const0_rtx)
 {
   len = c_strlen (arg, 1);
   if (! len || TREE_CODE (len) != INTEGER_CST)
     return 0;
 }
      else
 len = NULL_TREE;

      arglist = build_tree_list (NULL_TREE, arg);
      arglist = tree_cons (NULL_TREE, dest, arglist);
      expand_expr (build_function_call_expr (fn, arglist),
     const0_rtx, VOIDmode, EXPAND_NORMAL);

      if (target == const0_rtx)
 return const0_rtx;
      return expand_expr (len, target, mode, EXPAND_NORMAL);
    }

  return 0;
}
