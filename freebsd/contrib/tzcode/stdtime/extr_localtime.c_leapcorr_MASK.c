
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
struct state {int leapcnt; struct lsinfo* lsis; } ;
struct lsinfo {scalar_t__ ls_trans; long ls_corr; } ;


 struct state* VAR_0 ;

__attribute__((used)) static long
FUNC_0(time_t *VAR_1)
{
 struct state * VAR_2;
 struct lsinfo * VAR_3;
 int VAR_4;

 VAR_2 = VAR_0;
 VAR_4 = VAR_2->leapcnt;
 while (--VAR_4 >= 0) {
  VAR_3 = &VAR_2->lsis[VAR_4];
  if (*VAR_1 >= VAR_3->ls_trans)
   return VAR_3->ls_corr;
 }
 return 0;
}
