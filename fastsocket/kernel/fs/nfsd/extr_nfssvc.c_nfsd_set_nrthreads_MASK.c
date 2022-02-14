
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int sv_nrpools; int * sv_pools; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 TYPE_1__* VAR_2 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (TYPE_1__*) ;
 int FUNC_4 (TYPE_1__*,int *,int) ;

int FUNC_5(int VAR_3, int *VAR_4)
{
 int VAR_5 = 0;
 int VAR_6 = 0;
 int VAR_7 = 0;

 FUNC_0(!FUNC_1(&VAR_1));

 if (VAR_2 == ((void*)0) || VAR_3 <= 0)
  return 0;

 if (VAR_3 > VAR_2->sv_nrpools)
  VAR_3 = VAR_2->sv_nrpools;


 VAR_6 = 0;
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  if (VAR_4[VAR_5] > VAR_0)
   VAR_4[VAR_5] = VAR_0;
  VAR_6 += VAR_4[VAR_5];
 }
 if (VAR_6 > VAR_0) {

  for (VAR_5 = 0; VAR_5 < VAR_3 && VAR_6 > 0; VAR_5++) {
       int VAR_8 = VAR_4[VAR_5] * VAR_0 / VAR_6;
   VAR_6 -= (VAR_4[VAR_5] - VAR_8);
   VAR_4[VAR_5] = VAR_8;
  }
  for (VAR_5 = 0; VAR_5 < VAR_3 && VAR_6 > 0; VAR_5++) {
   VAR_4[VAR_5]--;
   VAR_6--;
  }
 }





 if (VAR_4[0] == 0)
  VAR_4[0] = 1;


 FUNC_3(VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_3; VAR_5++) {
  VAR_7 = FUNC_4(VAR_2, &VAR_2->sv_pools[VAR_5],
           VAR_4[VAR_5]);
  if (VAR_7)
   break;
 }
 FUNC_2(VAR_2);

 return VAR_7;
}
