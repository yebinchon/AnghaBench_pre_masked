
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct recog_data {int dummy; } ;
typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (int) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (int ) ;
 struct recog_data VAR_1 ;
 scalar_t__ FUNC_7 (int ) ;

__attribute__((used)) static int
FUNC_8 (rtx VAR_2, int VAR_3, enum machine_mode VAR_4)
{
  rtx VAR_5, VAR_6;
  int VAR_7 = 0;
  struct recog_data VAR_8;






  if (FUNC_1 (VAR_2))
    return 1;





  if (FUNC_0 (VAR_2))
    return 1;



  VAR_5 = FUNC_4 (VAR_4, VAR_3);
  VAR_6 = FUNC_6 (FUNC_5 (VAR_0, VAR_5, VAR_2));
  VAR_8 = VAR_1;
  if (FUNC_7 (VAR_6) >= 0)
    {
      FUNC_3 (VAR_6);
      VAR_7 = FUNC_2 (1);
    }
  VAR_1 = VAR_8;
  return VAR_7;
}
