
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (int,int ) ;

__attribute__((used)) static int
FUNC_4 (enum machine_mode VAR_0, rtx VAR_1, rtx *VAR_2)
{
  int VAR_3;
  rtx VAR_4 = *VAR_2;
  rtx VAR_5 = FUNC_1 (FUNC_0 (VAR_4), FUNC_2 ());

  *VAR_2 = VAR_5;
  VAR_3 = FUNC_3 (VAR_0, VAR_1);
  *VAR_2 = VAR_4;

  return VAR_3;
}
