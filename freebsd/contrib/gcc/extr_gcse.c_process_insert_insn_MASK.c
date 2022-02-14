
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct expr {int expr; int reaching_reg; } ;
typedef int rtx ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 (int ,int ,int ) ;
 scalar_t__ FUNC_7 (int ,int ) ;
 int FUNC_8 () ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 () ;

__attribute__((used)) static rtx
FUNC_11 (struct expr *VAR_1)
{
  rtx VAR_2 = VAR_1->reaching_reg;
  rtx VAR_3 = FUNC_1 (VAR_1->expr);
  rtx VAR_4;

  FUNC_10 ();



  if (FUNC_7 (VAR_3, FUNC_0 (VAR_2)))
    FUNC_3 (VAR_2, VAR_3);




  else
    {
      rtx VAR_5 = FUNC_2 (FUNC_6 (VAR_0, VAR_2, VAR_3));

      if (FUNC_9 (VAR_5))
 FUNC_5 ();
    }


  VAR_4 = FUNC_8 ();
  FUNC_4 ();

  return VAR_4;
}
