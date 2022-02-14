
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int tree ;
struct c_expr {int original_code; int value; } ;
struct TYPE_8__ {scalar_t__ error; } ;
typedef TYPE_1__ c_parser ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 scalar_t__ FUNC_2 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ,char*) ;
 int VAR_4 ;
 int FUNC_5 (scalar_t__) ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (char*) ;
 struct c_expr FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;

__attribute__((used)) static struct c_expr
FUNC_10 (c_parser *VAR_6, tree VAR_7, bool VAR_8)
{
  FUNC_5 (FUNC_2 (VAR_6, VAR_2));
  FUNC_0 (VAR_6);
  if (VAR_8)
    FUNC_8 (0);
  else
    FUNC_9 (VAR_7);
  if (FUNC_2 (VAR_6, VAR_0))
    {
      if (VAR_5)
 FUNC_6 ("ISO C forbids empty initializer braces");
    }
  else
    {


      while (1)
 {
   FUNC_1 (VAR_6);
   if (VAR_6->error)
     break;
   if (FUNC_2 (VAR_6, VAR_1))
     FUNC_0 (VAR_6);
   else
     break;
   if (FUNC_2 (VAR_6, VAR_0))
     break;
 }
    }
  if (FUNC_3 (VAR_6, VAR_0))
    {
      struct c_expr VAR_9;
      VAR_9.value = VAR_4;
      VAR_9.original_code = VAR_3;
      FUNC_4 (VAR_6, VAR_0, "expected %<}%>");
      return VAR_9;
    }
  FUNC_0 (VAR_6);
  return FUNC_7 (0);
}
