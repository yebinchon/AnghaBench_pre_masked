
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (int,int ) ;
 int FUNC_3 (int,unsigned int) ;

__attribute__((used)) static rtx
FUNC_4 (enum machine_mode VAR_3, enum machine_mode VAR_4,
       unsigned int VAR_5)
{
  rtx VAR_6;

  if (VAR_4 != VAR_0)
    VAR_6 = FUNC_3 (VAR_4, VAR_5);
  else
    {
      VAR_6 = FUNC_3 (VAR_3, VAR_5);
      VAR_6 = FUNC_1 (VAR_1, VAR_6, VAR_2);
      VAR_6 = FUNC_2 (VAR_4, FUNC_0 (1, VAR_6));
    }

  return VAR_6;
}
