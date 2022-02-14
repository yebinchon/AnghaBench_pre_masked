
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int ** times; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 float FUNC_0 (int *,int *) ;
 TYPE_1__* VAR_3 ;
 int FUNC_1 (char*,...) ;
 int VAR_4 ;
 char** VAR_5 ;
 int ** VAR_6 ;
 int FUNC_2 (int *) ;

__attribute__((used)) static void FUNC_3(void)
{
 int VAR_7, VAR_8;
 float VAR_9, VAR_10[VAR_1], VAR_11[VAR_1];

 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  VAR_10[VAR_8] = 0;
  VAR_11[VAR_8] = 999999999.;
  for (VAR_7 = 0; VAR_7 < VAR_2; VAR_7++) {
   if (!FUNC_2(&VAR_3[VAR_7].times[VAR_8][0]) &&
       !FUNC_2(&VAR_3[VAR_7].times[VAR_8][1])) {
    VAR_9 = FUNC_0(&VAR_3[VAR_7].times[VAR_8][1], &VAR_3[VAR_7].times[VAR_8][0]);
    if (VAR_9 > VAR_10[VAR_8])
     VAR_10[VAR_8] = VAR_9;
    if (VAR_9 < VAR_11[VAR_8])
     VAR_11[VAR_8] = VAR_9;
   }
  }
 }

 FUNC_1("step              total ms     max ms     min us  us / conn\n");
 for (VAR_8 = 0; VAR_8 < VAR_1; VAR_8++) {
  if (VAR_8 == VAR_0 && !VAR_4)
   continue;

  VAR_9 = FUNC_0(&VAR_6[VAR_8][1], &VAR_6[VAR_8][0]);
  FUNC_1("%-13s: %11.2f%11.2f%11.2f%11.2f\n", VAR_5[VAR_8], VAR_9 / 1000.,
   VAR_10[VAR_8] / 1000., VAR_11[VAR_8], VAR_9 / VAR_2);
 }
}
