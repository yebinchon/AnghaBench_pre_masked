
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_mcs {int parentsense; int dummy; int ** children; int * childnotready; int * parent; int * havechild; int tid; } ;


 int FUNC_0 (int *,int ) ;

void
FUNC_1(struct ck_barrier_mcs *VAR_0, unsigned int VAR_1)
{
 unsigned int VAR_2, VAR_3;

 FUNC_0(&VAR_0->tid, 0);

 for (VAR_2 = 0; VAR_2 < VAR_1; ++VAR_2) {
  for (VAR_3 = 0; VAR_3 < 4; ++VAR_3) {




   VAR_0[VAR_2].havechild[VAR_3] = ((VAR_2 << 2) + VAR_3 < VAR_1 - 1) ? ~0 : 0;





   VAR_0[VAR_2].childnotready[VAR_3] = VAR_0[VAR_2].havechild[VAR_3];
  }


  VAR_0[VAR_2].parent = (VAR_2 == 0) ?
      &VAR_0[VAR_2].dummy :
      &VAR_0[(VAR_2 - 1) >> 2].childnotready[(VAR_2 - 1) & 3];


  VAR_0[VAR_2].children[0] = ((VAR_2 << 1) + 1 >= VAR_1) ?
      &VAR_0[VAR_2].dummy :
      &VAR_0[(VAR_2 << 1) + 1].parentsense;

  VAR_0[VAR_2].children[1] = ((VAR_2 << 1) + 2 >= VAR_1) ?
      &VAR_0[VAR_2].dummy :
      &VAR_0[(VAR_2 << 1) + 2].parentsense;

  VAR_0[VAR_2].parentsense = 0;
 }

 return;
}
