
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 int FUNC_0 (unsigned int,int,int,int) ;
 unsigned int* VAR_1 ;

__attribute__((used)) static inline bool
FUNC_1 (unsigned VAR_2, enum machine_mode VAR_3,
       enum rtx_code VAR_4, enum rtx_code VAR_5)
{
  if (VAR_2 >= VAR_0 && VAR_1[VAR_2] >= 0)
    VAR_2 = VAR_1[VAR_2];

  return FUNC_0 (VAR_2, VAR_3, VAR_4, VAR_5);
}
