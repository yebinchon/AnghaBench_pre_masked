
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (scalar_t__,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int) ;
 scalar_t__ FUNC_6 (scalar_t__,int ,int ) ;
 scalar_t__ FUNC_7 () ;
 scalar_t__ FUNC_8 (scalar_t__,int,int,int ) ;
 int VAR_2 ;

void
FUNC_9 (int VAR_3, rtx VAR_4, int VAR_5)
{
  int VAR_6;

  if (VAR_5 == 0)
    return;
  for (VAR_6 = 0; VAR_6 < VAR_5; VAR_6++)
    {
      rtx VAR_7 = FUNC_8 (VAR_4, VAR_6, 1, VAR_0);

      FUNC_4 (VAR_7);

      FUNC_3 (VAR_7, FUNC_5 (VAR_2, VAR_3 + VAR_6));
    }
}
