
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rtx ;
typedef enum rtx_code { ____Placeholder_rtx_code } rtx_code ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 unsigned int VAR_0 ;
 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int,int,int,int) ;

__attribute__((used)) static inline bool
FUNC_2 (rtx VAR_1, enum machine_mode VAR_2,
    enum rtx_code VAR_3, enum rtx_code VAR_4)
{
  unsigned VAR_5 = FUNC_0 (VAR_1);
  if (VAR_5 >= VAR_0)
    return 1;

  return FUNC_1 (VAR_5, VAR_2, VAR_3, VAR_4);
}
