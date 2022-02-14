
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static boolean_t
FUNC_0(uint64_t ** VAR_2,
    unsigned VAR_3, uint64_t VAR_4)
{
 unsigned VAR_5 = 0;
 unsigned VAR_6 = VAR_3 - 1;
 unsigned VAR_7;

 if (!VAR_2 || !VAR_3)
  return VAR_0;

 while (VAR_5 <= VAR_6) {
     if (VAR_4 < VAR_2[VAR_5][0] || VAR_4 > VAR_2[VAR_6][1])
  return VAR_0;
     else if (VAR_4 <= VAR_2[VAR_5][1] || VAR_4 >= VAR_2[VAR_6][0])
  return VAR_1;

     VAR_7 = VAR_5 + (VAR_6 - VAR_5 + 1)/2;

     if (VAR_4 < VAR_2[VAR_7][0])
  VAR_6 = VAR_7;
     else if (VAR_4 > VAR_2[VAR_7][1])
  VAR_5 = VAR_7;
     else
  return VAR_1;

     VAR_5++;
     VAR_6--;
 }

 return VAR_0;
}
