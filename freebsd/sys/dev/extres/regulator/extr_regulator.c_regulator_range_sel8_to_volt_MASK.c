
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regulator_range {int min_sel; int max_sel; int min_uvolt; int step_uvolt; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;

int
FUNC_1(struct regulator_range *VAR_1, int VAR_2,
   uint8_t VAR_3, int *VAR_4)
{
 struct regulator_range *VAR_5;
 int VAR_6;

 if (VAR_2 == 0)
  FUNC_0("Voltage regulator have zero ranges\n");

 for (VAR_6 = 0; VAR_6 < VAR_2 ; VAR_6++) {
  VAR_5 = VAR_1 + VAR_6;

  if (!(VAR_3 >= VAR_5->min_sel &&
        VAR_3 <= VAR_5->max_sel))
   continue;

  VAR_3 -= VAR_5->min_sel;

  *VAR_4 = VAR_5->min_uvolt + VAR_3 * VAR_5->step_uvolt;
  return (0);
 }

 return (VAR_0);
}
