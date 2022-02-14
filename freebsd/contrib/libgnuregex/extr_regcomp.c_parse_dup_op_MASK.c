
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_21__ TYPE_5__ ;
typedef struct TYPE_20__ TYPE_4__ ;
typedef struct TYPE_19__ TYPE_3__ ;
typedef struct TYPE_18__ TYPE_2__ ;
typedef struct TYPE_17__ TYPE_1__ ;


typedef int reg_syntax_t ;
typedef int reg_errcode_t ;
struct TYPE_17__ {char c; } ;
struct TYPE_20__ {scalar_t__ type; TYPE_1__ opr; } ;
typedef TYPE_4__ re_token_t ;
typedef int re_string_t ;
typedef int re_dfa_t ;
struct TYPE_18__ {scalar_t__ idx; } ;
struct TYPE_19__ {scalar_t__ type; TYPE_2__ opr; } ;
struct TYPE_21__ {TYPE_3__ token; } ;
typedef TYPE_5__ bin_tree_t ;


 scalar_t__ FUNC_0 (int,int) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 TYPE_5__* FUNC_1 (int *,TYPE_5__*,TYPE_5__*,int ) ;
 TYPE_5__* FUNC_2 (TYPE_5__*,int *) ;
 int FUNC_3 (int *,TYPE_4__*,int) ;
 int FUNC_4 (TYPE_4__*,int *,int) ;
 int VAR_14 ;
 int VAR_15 ;
 int FUNC_5 (TYPE_5__*,int ,void*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *,int) ;

__attribute__((used)) static bin_tree_t *
FUNC_8 (bin_tree_t *VAR_16, re_string_t *VAR_17, re_dfa_t *VAR_18,
       re_token_t *VAR_19, reg_syntax_t VAR_20, reg_errcode_t *VAR_21)
{
  bin_tree_t *VAR_22 = ((void*)0), *VAR_23 = ((void*)0);
  int VAR_24, VAR_25, VAR_26, VAR_27 = FUNC_6 (VAR_17);
  re_token_t VAR_28 = *VAR_19;

  if (VAR_19->type == VAR_8)
    {
      VAR_26 = 0;
      VAR_25 = FUNC_3 (VAR_17, VAR_19, VAR_20);
      if (VAR_25 == -1)
 {
   if (VAR_19->type == VAR_0 && VAR_19->opr.c == ',')
     VAR_25 = 0;
   else
     {
       *VAR_21 = VAR_9;
       return ((void*)0);
     }
 }
      if (FUNC_0 (VAR_25 != -2, 1))
 {

   VAR_26 = ((VAR_19->type == VAR_4) ? VAR_25
   : ((VAR_19->type == VAR_0 && VAR_19->opr.c == ',')
      ? FUNC_3 (VAR_17, VAR_19, VAR_20) : -2));
 }
      if (FUNC_0 (VAR_25 == -2 || VAR_26 == -2, 0))
 {

   if (FUNC_0 (!(VAR_20 & VAR_12), 0))
     {
       if (VAR_19->type == VAR_2)
  *VAR_21 = VAR_10;
       else
  *VAR_21 = VAR_9;

       return ((void*)0);
     }


   FUNC_7 (VAR_17, VAR_27);
   *VAR_19 = VAR_28;
   VAR_19->type = VAR_0;


   return VAR_16;
 }

      if (FUNC_0 ((VAR_26 != -1 && VAR_25 > VAR_26) || VAR_19->type != VAR_4, 0))
 {

   *VAR_21 = VAR_9;
   return ((void*)0);
 }
    }
  else
    {
      VAR_25 = (VAR_19->type == VAR_6) ? 1 : 0;
      VAR_26 = (VAR_19->type == VAR_7) ? 1 : -1;
    }

  FUNC_4 (VAR_19, VAR_17, VAR_20);

  if (FUNC_0 (VAR_16 == ((void*)0), 0))
    return ((void*)0);
  if (FUNC_0 (VAR_25 == 0 && VAR_26 == 0, 0))
    {
      FUNC_5 (VAR_16, VAR_14, ((void*)0));
      return ((void*)0);
    }


  if (FUNC_0 (VAR_25 > 0, 0))
    {
      VAR_22 = VAR_16;
      for (VAR_24 = 2; VAR_24 <= VAR_25; ++VAR_24)
 {
   VAR_16 = FUNC_2 (VAR_16, VAR_18);
   VAR_22 = FUNC_1 (VAR_18, VAR_22, VAR_16, VAR_1);
   if (FUNC_0 (VAR_16 == ((void*)0) || VAR_22 == ((void*)0), 0))
     goto parse_dup_op_espace;
 }

      if (VAR_25 == VAR_26)
 return VAR_22;


      VAR_16 = FUNC_2 (VAR_16, VAR_18);
      VAR_23 = VAR_22;
    }
  else
    VAR_23 = ((void*)0);

  if (VAR_16->token.type == VAR_13)
    FUNC_5 (VAR_16, VAR_15, (void *) (long) VAR_16->token.opr.idx);

  VAR_22 = FUNC_1 (VAR_18, VAR_16, ((void*)0), (VAR_26 == -1 ? VAR_5 : VAR_3));
  if (FUNC_0 (VAR_22 == ((void*)0), 0))
    goto parse_dup_op_espace;




  for (VAR_24 = VAR_25 + 2; VAR_24 <= VAR_26; ++VAR_24)
    {
      VAR_16 = FUNC_2 (VAR_16, VAR_18);
      VAR_22 = FUNC_1 (VAR_18, VAR_22, VAR_16, VAR_1);
      if (FUNC_0 (VAR_16 == ((void*)0) || VAR_22 == ((void*)0), 0))
 goto parse_dup_op_espace;

      VAR_22 = FUNC_1 (VAR_18, VAR_22, ((void*)0), VAR_3);
      if (FUNC_0 (VAR_22 == ((void*)0), 0))
 goto parse_dup_op_espace;
    }

  if (VAR_23)
    VAR_22 = FUNC_1 (VAR_18, VAR_23, VAR_22, VAR_1);

  return VAR_22;

 parse_dup_op_espace:
  *VAR_21 = VAR_11;
  return ((void*)0);
}
