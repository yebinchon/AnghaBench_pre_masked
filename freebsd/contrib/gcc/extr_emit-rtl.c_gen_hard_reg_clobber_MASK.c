
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ,int ) ;
 int FUNC_1 (int,unsigned int) ;
 scalar_t__** VAR_1 ;

rtx
FUNC_2 (enum machine_mode VAR_2, unsigned int VAR_3)
{
  if (VAR_1[VAR_2][VAR_3])
    return VAR_1[VAR_2][VAR_3];
  else
    return (VAR_1[VAR_2][VAR_3] =
     FUNC_0 (VAR_0, FUNC_1 (VAR_2, VAR_3)));
}
