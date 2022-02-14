
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef int HOST_WIDE_INT ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_6 (int,int,int ,int,int) ;

__attribute__((used)) static void
FUNC_7 (int VAR_7)
{
  HOST_WIDE_INT VAR_8;
  rtx VAR_9;

  VAR_8 = VAR_4 - VAR_3;

  if (VAR_8 < -4096 || VAR_8 + VAR_6 * 4 > 4095)
    {






      VAR_9 = FUNC_4 (VAR_0, 1);
      FUNC_2 (VAR_9, FUNC_0 (VAR_8));
      FUNC_1 (FUNC_5 (VAR_2,
         VAR_9,
         FUNC_3 (VAR_0, VAR_5, VAR_9)));
      VAR_8 = 0;
    }
  else
    VAR_9 = VAR_5;

  VAR_8 = FUNC_6 (0, 8, VAR_9, VAR_8, VAR_7);
  FUNC_6 (32, VAR_1 ? 96 : 64, VAR_9, VAR_8, VAR_7);
}
