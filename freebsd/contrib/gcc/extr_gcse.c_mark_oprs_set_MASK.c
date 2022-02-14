
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ,int ) ;

__attribute__((used)) static void
FUNC_7 (rtx VAR_4)
{
  rtx VAR_5 = FUNC_1 (VAR_4);
  int VAR_6;

  if (FUNC_0 (VAR_5) == VAR_3)
    FUNC_6 (VAR_5, VAR_4);
  else if (FUNC_0 (VAR_5) == VAR_2)
    for (VAR_6 = 0; VAR_6 < FUNC_3 (VAR_5, 0); VAR_6++)
      {
 rtx VAR_7 = FUNC_2 (VAR_5, 0, VAR_6);

 if (FUNC_0 (VAR_7) == VAR_3)
   FUNC_6 (VAR_7, VAR_4);
 else if (FUNC_0 (VAR_7) == VAR_1)
   FUNC_5 (VAR_7, VAR_4);
 else if (FUNC_0 (VAR_7) == VAR_0)
   FUNC_4 (VAR_4);
      }

  else if (FUNC_0 (VAR_5) == VAR_1)
    FUNC_5 (VAR_5, VAR_4);
  else if (FUNC_0 (VAR_5) == VAR_0)
    FUNC_4 (VAR_4);
}
