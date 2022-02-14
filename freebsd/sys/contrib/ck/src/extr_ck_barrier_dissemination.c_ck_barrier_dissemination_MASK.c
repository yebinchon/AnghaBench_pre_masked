
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct ck_barrier_dissemination_state {size_t tid; size_t parity; int sense; } ;
struct ck_barrier_dissemination {unsigned int size; TYPE_1__** flags; } ;
struct TYPE_2__ {unsigned int* pflag; unsigned int tflag; } ;


 int FUNC_0 () ;
 int FUNC_1 (unsigned int*) ;
 int FUNC_2 () ;
 int FUNC_3 (unsigned int*,int ) ;

void
FUNC_4(struct ck_barrier_dissemination *VAR_0,
    struct ck_barrier_dissemination_state *VAR_1)
{
 unsigned int VAR_2;
 unsigned int VAR_3 = VAR_0->size;

 for (VAR_2 = 0; VAR_2 < VAR_3; ++VAR_2) {
  unsigned int *VAR_4, *VAR_5;

  VAR_4 = VAR_0[VAR_1->tid].flags[VAR_1->parity][VAR_2].pflag;
  VAR_5 = &VAR_0[VAR_1->tid].flags[VAR_1->parity][VAR_2].tflag;


  FUNC_3(VAR_4, VAR_1->sense);


  while (FUNC_1(VAR_5) != VAR_1->sense)
   FUNC_2();
 }







 if (VAR_1->parity == 1)
  VAR_1->sense = ~VAR_1->sense;

 VAR_1->parity = 1 - VAR_1->parity;

 FUNC_0();
 return;
}
