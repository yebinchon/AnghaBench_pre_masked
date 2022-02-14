
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_4__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct gimplify_omp_ctx {int default_kind; struct gimplify_omp_ctx* outer_context; int location; int is_parallel; int variables; } ;
typedef TYPE_2__* splay_tree_node ;
typedef int splay_tree_key ;
typedef enum omp_clause_default_kind { ____Placeholder_omp_clause_default_kind } omp_clause_default_kind ;
struct TYPE_5__ {int (* omp_predetermined_sharing ) (scalar_t__) ;int (* omp_disregard_value_expr ) (scalar_t__,int) ;} ;
struct TYPE_7__ {TYPE_1__ decls; } ;
struct TYPE_6__ {unsigned int value; } ;


 scalar_t__ FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int FUNC_4 (scalar_t__) ;
 unsigned int VAR_0 ;
 unsigned int VAR_1 ;
 unsigned int VAR_2 ;
 int * FUNC_5 (int ) ;



 int VAR_3 ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 int FUNC_7 (char*,int *) ;
 scalar_t__ VAR_4 ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 scalar_t__ FUNC_10 (scalar_t__) ;
 TYPE_4__ VAR_5 ;
 int FUNC_11 (struct gimplify_omp_ctx*,scalar_t__,unsigned int) ;
 TYPE_2__* FUNC_12 (int ,int ) ;
 int FUNC_13 (scalar_t__) ;
 int FUNC_14 (scalar_t__,int) ;
 int FUNC_15 (scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_16 (struct gimplify_omp_ctx *VAR_6, tree VAR_7, bool VAR_8)
{
  splay_tree_node VAR_9;
  unsigned VAR_10 = VAR_8 ? VAR_1 : 0;
  bool VAR_11 = 0, VAR_12;

  if (VAR_7 == VAR_4 || FUNC_6 (VAR_7) == VAR_4)
    return 0;


  if (FUNC_10 (VAR_7))
    {
      if (FUNC_3 (VAR_7))
 return 0;

      if (FUNC_0 (VAR_7))
 {
   tree VAR_13 = FUNC_9 (FUNC_4 (VAR_7));

   if (VAR_13 && FUNC_2 (VAR_13) && FUNC_3 (VAR_13))
     return 0;
 }
    }

  VAR_9 = FUNC_12 (VAR_6->variables, (splay_tree_key)VAR_7);
  if (VAR_9 == ((void*)0))
    {
      enum omp_clause_default_kind VAR_14, VAR_15;

      if (!VAR_6->is_parallel)
 goto do_outer;




      VAR_14 = VAR_6->default_kind;
      VAR_15 = VAR_5.decls.omp_predetermined_sharing (VAR_7);
      if (VAR_15 != VAR_3)
 VAR_14 = VAR_15;

      switch (VAR_14)
 {
 case 130:
   FUNC_7 ("%qs not specified in enclosing parallel",
   FUNC_5 (FUNC_1 (VAR_7)));
   FUNC_7 ("%Henclosing parallel", &VAR_6->location);

 case 128:
   VAR_10 |= VAR_2;
   break;
 case 129:
   VAR_10 |= VAR_0;
   break;
 default:
   FUNC_8 ();
 }

      FUNC_11 (VAR_6, VAR_7, VAR_10);

      VAR_12 = (VAR_10 & VAR_2) != 0;
      VAR_11 = VAR_5.decls.omp_disregard_value_expr (VAR_7, VAR_12);
      goto do_outer;
    }

  VAR_12 = ((VAR_10 | VAR_9->value) & VAR_2) != 0;
  VAR_11 = VAR_5.decls.omp_disregard_value_expr (VAR_7, VAR_12);


  if ((VAR_9->value & VAR_10) == VAR_10)
    return VAR_11;
  VAR_10 |= VAR_9->value;
  VAR_9->value = VAR_10;

 do_outer:


  if (VAR_10 & VAR_0)
    return VAR_11;
  if (VAR_6->outer_context
      && FUNC_16 (VAR_6->outer_context, VAR_7, VAR_8))
    return 1;
  return VAR_11;
}
