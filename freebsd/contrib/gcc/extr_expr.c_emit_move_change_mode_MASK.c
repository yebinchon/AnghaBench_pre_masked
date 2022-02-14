
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_0 ;
 int FUNC_4 (int,int ,int,int ) ;
 int FUNC_5 (int,int ,int,int ) ;

__attribute__((used)) static rtx
FUNC_6 (enum machine_mode VAR_1,
         enum machine_mode VAR_2, rtx VAR_3, bool VAR_4)
{
  rtx VAR_5;

  if (FUNC_0 (VAR_3))
    {


      if (VAR_0)
 {


   VAR_5 = FUNC_2 (VAR_3, VAR_1, 0);
   FUNC_3 (VAR_3, VAR_5);
 }
      else
 VAR_5 = FUNC_1 (VAR_3, VAR_1, 0);
    }
  else
    {






      if (VAR_4)
 VAR_5 = FUNC_4 (VAR_1, VAR_3, VAR_2, 0);
      else
 VAR_5 = FUNC_5 (VAR_1, VAR_3, VAR_2, 0);
    }

  return VAR_5;
}
