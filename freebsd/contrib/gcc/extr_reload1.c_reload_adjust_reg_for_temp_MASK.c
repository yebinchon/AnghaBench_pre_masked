
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rtx ;
typedef enum reg_class { ____Placeholder_reg_class } reg_class ;
typedef enum machine_mode { ____Placeholder_machine_mode } machine_mode ;


 size_t FUNC_0 (scalar_t__) ;
 int FUNC_1 (unsigned int,int) ;
 unsigned int FUNC_2 (scalar_t__) ;
 int FUNC_3 (int ,unsigned int) ;
 scalar_t__** VAR_0 ;
 int * VAR_1 ;
 scalar_t__ FUNC_4 (scalar_t__,int) ;

__attribute__((used)) static bool
FUNC_5 (rtx *VAR_2, rtx VAR_3,
       enum reg_class VAR_4,
       enum machine_mode VAR_5)

{
  rtx VAR_6;

  for (VAR_6 = *VAR_2; VAR_6; VAR_6 = VAR_3, VAR_3 = 0)
    {
      unsigned VAR_7 = FUNC_2 (VAR_6);

      if (!FUNC_3 (VAR_1[(int) VAR_4], VAR_7))
 continue;
      if (FUNC_0 (VAR_6) != VAR_5)
 {
   if (!FUNC_1 (VAR_7, VAR_5))
     continue;
   if (VAR_0[VAR_7][VAR_5]
       > VAR_0[VAR_7][FUNC_0 (VAR_6)])
     continue;
   VAR_6 = FUNC_4 (VAR_6, VAR_5);
 }
      *VAR_2 = VAR_6;
      return 1;
    }
  return 0;
}
