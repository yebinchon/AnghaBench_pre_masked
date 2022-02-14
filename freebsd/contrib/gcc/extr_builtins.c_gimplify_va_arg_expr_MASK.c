
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ tree ;
typedef enum gimplify_status { ____Placeholder_gimplify_status } gimplify_status ;
struct TYPE_4__ {scalar_t__ (* type_promotes_to ) (scalar_t__) ;} ;
struct TYPE_6__ {TYPE_1__ types; } ;
struct TYPE_5__ {scalar_t__ (* gimplify_va_arg_expr ) (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;} ;


 scalar_t__ VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__,int ) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 int FUNC_5 (scalar_t__,scalar_t__*) ;
 scalar_t__ FUNC_6 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_7 (int ,int *) ;
 scalar_t__ FUNC_8 (scalar_t__) ;
 scalar_t__ FUNC_9 (scalar_t__) ;
 int FUNC_10 (char*) ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_11 (scalar_t__*,scalar_t__*,scalar_t__*,int ,int ) ;
 int * VAR_8 ;
 int FUNC_12 (char*) ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_3__ VAR_11 ;
 scalar_t__ FUNC_13 (scalar_t__) ;
 scalar_t__ FUNC_14 (scalar_t__,scalar_t__,scalar_t__*,scalar_t__*) ;
 TYPE_2__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_15 (int ,char*,scalar_t__,scalar_t__) ;

enum gimplify_status
FUNC_16 (tree *VAR_14, tree *VAR_15, tree *VAR_16)
{
  tree VAR_17, VAR_18, VAR_19;
  tree VAR_20 = FUNC_2 (*VAR_14, 0);
  tree VAR_21 = FUNC_3 (*VAR_14);
  tree VAR_22;


  VAR_18 = VAR_13;
  VAR_19 = FUNC_3 (VAR_20);

  if (VAR_19 == VAR_5)
    return VAR_3;

  if (FUNC_1 (VAR_18) == VAR_0)
    {




      if (FUNC_1 (VAR_19) == VAR_0
   || FUNC_0 (VAR_19))
 {
   VAR_18 = FUNC_3 (VAR_18);
   VAR_19 = FUNC_3 (VAR_19);
 }
    }

  if (FUNC_4 (VAR_18) != FUNC_4 (VAR_19))
    {
      FUNC_10 ("first argument to %<va_arg%> not of type %<va_list%>");
      return VAR_3;
    }



  else if ((VAR_17 = VAR_11.types.type_promotes_to (VAR_21))
    != VAR_21)
    {
      static bool VAR_23;




      FUNC_15 (0, "%qT is promoted to %qT when passed through %<...%>",
        VAR_21, VAR_17);
      if (! VAR_23)
 {
   VAR_23 = 1;
   FUNC_15 (0, "(so you should pass %qT not %qT to %<va_arg%>)",
     VAR_17, VAR_21);
 }



      FUNC_12 ("if this code is reached, the program will abort");
      VAR_22 = FUNC_7 (VAR_8[VAR_1],
        ((void*)0));
      FUNC_5 (VAR_22, VAR_15);



      *VAR_14 = FUNC_9 (VAR_21);
      return VAR_2;
    }
  else
    {


      if (FUNC_1 (VAR_13) == VAR_0)
 {




   if (FUNC_1 (FUNC_3 (VAR_20)) == VAR_0)
     {
       tree VAR_24 = FUNC_8 (FUNC_3 (VAR_13));
       VAR_20 = FUNC_6 (VAR_20, VAR_24);
     }
   FUNC_11 (&VAR_20, VAR_15, VAR_16, VAR_10, VAR_7);
 }
      else
 FUNC_11 (&VAR_20, VAR_15, VAR_16, VAR_9, VAR_6);

      if (!VAR_12.gimplify_va_arg_expr)


 return VAR_2;

      *VAR_14 = VAR_12.gimplify_va_arg_expr (VAR_20, VAR_21, VAR_15, VAR_16);
      return VAR_4;
    }
}
