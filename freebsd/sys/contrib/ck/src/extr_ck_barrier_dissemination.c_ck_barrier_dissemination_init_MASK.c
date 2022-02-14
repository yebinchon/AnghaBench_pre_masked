
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_dissemination_flag {scalar_t__ tflag; scalar_t__* pflag; } ;
struct ck_barrier_dissemination {unsigned int nthr; unsigned int size; struct ck_barrier_dissemination_flag** flags; int tid; } ;


 unsigned int FUNC_0 (int ) ;
 int FUNC_1 (unsigned int) ;
 int FUNC_2 (int *,int ) ;

void
FUNC_3(struct ck_barrier_dissemination *VAR_0,
    struct ck_barrier_dissemination_flag **VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4, VAR_5, VAR_6, VAR_7;
 bool VAR_8 = VAR_2 & (VAR_2 - 1);

 VAR_0->nthr = VAR_2;
 VAR_0->size = VAR_6 = FUNC_0(FUNC_1(VAR_2));
 FUNC_2(&VAR_0->tid, 0);

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  VAR_0[VAR_3].flags[0] = VAR_1[VAR_3];
  VAR_0[VAR_3].flags[1] = VAR_1[VAR_3] + VAR_6;
 }

 for (VAR_3 = 0; VAR_3 < VAR_2; ++VAR_3) {
  for (VAR_5 = 0, VAR_7 = 1; VAR_5 < VAR_6; ++VAR_5, VAR_7 <<= 1) {







   if (VAR_8 == 0)
    VAR_4 = (VAR_3 + VAR_7) & (VAR_2 - 1);
   else
    VAR_4 = (VAR_3 + VAR_7) % VAR_2;


   VAR_0[VAR_3].flags[0][VAR_5].pflag = &VAR_0[VAR_4].flags[0][VAR_5].tflag;
   VAR_0[VAR_3].flags[1][VAR_5].pflag = &VAR_0[VAR_4].flags[1][VAR_5].tflag;


   VAR_0[VAR_3].flags[0][VAR_5].tflag = VAR_0[VAR_3].flags[1][VAR_5].tflag = 0;
  }
 }

 return;
}
