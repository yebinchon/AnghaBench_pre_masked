
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int tree ;
typedef int c_parser ;
struct TYPE_4__ {scalar_t__ type; } ;
struct TYPE_3__ {int value; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,char*) ;
 scalar_t__ FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *,int ) ;
 scalar_t__ FUNC_5 (int *,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 TYPE_2__* FUNC_8 (int *) ;
 TYPE_1__* FUNC_9 (int *) ;
 int FUNC_10 (int *,int ,char*) ;
 int FUNC_11 (int *,scalar_t__,char*) ;
 int FUNC_12 (int ,int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ,int ) ;
 int FUNC_15 () ;
 int VAR_7 ;
 int FUNC_16 (int ,int ,int ) ;

__attribute__((used)) static void

FUNC_17 (c_parser *VAR_8, tree VAR_9)
{
  FUNC_13 (FUNC_4 (VAR_8, VAR_6));
  FUNC_1 (VAR_8);
  if (FUNC_5 (VAR_8, VAR_2))
    {
      FUNC_2 (VAR_8, "expected identifier");
      return;
    }
  if (FUNC_8 (VAR_8)->type == VAR_0
      || FUNC_8 (VAR_8)->type == VAR_3)
    {
      tree VAR_10 = VAR_4;


      while (1)
 {
   tree VAR_11;
   if (FUNC_5 (VAR_8, VAR_2))
     {
       FUNC_2 (VAR_8, "expected identifier");
       break;
     }
   VAR_11 = FUNC_9 (VAR_8)->value;
   VAR_10 = FUNC_12 (VAR_10, FUNC_0 (VAR_4, VAR_11));
   FUNC_1 (VAR_8);
   if (FUNC_3 (VAR_8, VAR_0))
     FUNC_1 (VAR_8);
   else
     break;
 }
      FUNC_11 (VAR_8, VAR_3, "expected %<;%>");

      FUNC_14 (VAR_10, VAR_9);
    }
  else
    {
      tree VAR_12 = FUNC_9 (VAR_8)->value;
      tree VAR_13 = VAR_4;
      FUNC_1 (VAR_8);
      if (FUNC_3 (VAR_8, VAR_1))
 VAR_13 = FUNC_7 (VAR_8);
      VAR_7 = 1;

      FUNC_16 (VAR_12, VAR_13, VAR_9);

      FUNC_6 (VAR_8);
      FUNC_10 (VAR_8, VAR_5, "expected %<@end%>");
      VAR_7 = 0;
      FUNC_15 ();
    }
}
