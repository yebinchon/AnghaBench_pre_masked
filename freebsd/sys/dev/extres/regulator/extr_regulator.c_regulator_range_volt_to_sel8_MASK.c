
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct regulator_range {int min_uvolt; int max_sel; int min_sel; int step_uvolt; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int FUNC_1 (char*) ;
 int FUNC_2 (struct regulator_range*,int,int,int*) ;

int
FUNC_3(struct regulator_range *VAR_1, int VAR_2,
    int VAR_3, int VAR_4, uint8_t *VAR_5)
{
 struct regulator_range *VAR_6;
 uint8_t VAR_7;
 int VAR_8;
 int VAR_9, VAR_10;

 if (VAR_2 == 0)
  FUNC_1("Voltage regulator have zero ranges\n");

 for (VAR_10 = 0; VAR_10 < VAR_2; VAR_10++) {
  VAR_6 = VAR_1 + VAR_10;
  VAR_8 = VAR_6->min_uvolt +
      (VAR_6->max_sel - VAR_6->min_sel) * VAR_6->step_uvolt;

  if ((VAR_3 > VAR_8) ||
      (VAR_4 < VAR_6->min_uvolt))
   continue;

  if (VAR_3 <= VAR_6->min_uvolt)
   VAR_3 = VAR_6->min_uvolt;


  if (VAR_6->step_uvolt == 0)
   VAR_7 = 0;
  else
   VAR_7 = FUNC_0(VAR_3 - VAR_6->min_uvolt,
      VAR_6->step_uvolt);


  VAR_7 += VAR_6->min_sel;

  break;
 }

 if (VAR_10 >= VAR_2)
  return (VAR_0);


 VAR_9 = FUNC_2(VAR_1, VAR_2, VAR_7, &VAR_8);
 if (VAR_9 != 0)
  return (VAR_9);
 if ((VAR_8 < VAR_3) || (VAR_8 > VAR_4))
  return (VAR_0);

 *VAR_5 = VAR_7;
 return (0);
}
