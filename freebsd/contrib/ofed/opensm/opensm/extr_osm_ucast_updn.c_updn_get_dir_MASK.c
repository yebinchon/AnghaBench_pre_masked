
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int updn_switch_dir_t ;
typedef scalar_t__ uint64_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static updn_switch_dir_t FUNC_0(unsigned VAR_2, unsigned VAR_3,
          uint64_t VAR_4, uint64_t VAR_5)
{




 if (!VAR_2 && !VAR_3)
  return VAR_1;

 if (VAR_2 < VAR_3)
  return VAR_0;
 else if (VAR_2 > VAR_3)
  return VAR_1;
 else {

  if (VAR_4 > VAR_5)
   return VAR_1;
  else
   return VAR_0;
 }
}
