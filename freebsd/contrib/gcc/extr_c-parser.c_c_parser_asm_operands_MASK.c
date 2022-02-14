
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ tree ;
struct c_expr {scalar_t__ value; } ;
typedef int c_parser ;
struct TYPE_2__ {scalar_t__ value; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__) ;
 int VAR_7 ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *,char*) ;
 struct c_expr FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (int *,int ) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,int ,char*) ;
 scalar_t__ FUNC_12 (scalar_t__,scalar_t__) ;
 struct c_expr FUNC_13 (struct c_expr) ;

__attribute__((used)) static tree
FUNC_14 (c_parser *VAR_8, bool VAR_9)
{
  tree VAR_10 = VAR_6;
  while (1)
    {
      tree VAR_11, VAR_12;
      struct c_expr VAR_13;
      if (FUNC_8 (VAR_8, VAR_5))
 {
   FUNC_5 (VAR_8);
   if (FUNC_8 (VAR_8, VAR_3))
     {
       tree VAR_14 = FUNC_9 (VAR_8)->value;
       FUNC_5 (VAR_8);
       VAR_11 = FUNC_2 (FUNC_0 (VAR_14),
       FUNC_1 (VAR_14));
     }
   else
     {
       FUNC_6 (VAR_8, "expected identifier");
       FUNC_11 (VAR_8, VAR_1, ((void*)0));
       return VAR_6;
     }
   FUNC_11 (VAR_8, VAR_1,
         "expected %<]%>");
 }
      else
 VAR_11 = VAR_6;
      VAR_12 = FUNC_4 (VAR_8);
      if (VAR_12 == VAR_6)
 return VAR_6;
      VAR_7 = 1;
      if (!FUNC_10 (VAR_8, VAR_4, "expected %<(%>"))
 {
   VAR_7 = 0;
   return VAR_6;
 }
      VAR_13 = FUNC_7 (VAR_8);
      if (VAR_9)
 VAR_13 = FUNC_13 (VAR_13);
      VAR_7 = 0;
      if (!FUNC_10 (VAR_8, VAR_0, "expected %<)%>"))
 {
   FUNC_11 (VAR_8, VAR_0, ((void*)0));
   return VAR_6;
 }
      VAR_10 = FUNC_12 (VAR_10, FUNC_3 (FUNC_3 (VAR_11, VAR_12),
          VAR_13.value));
      if (FUNC_8 (VAR_8, VAR_2))
 FUNC_5 (VAR_8);
      else
 break;
    }
  return VAR_10;
}
