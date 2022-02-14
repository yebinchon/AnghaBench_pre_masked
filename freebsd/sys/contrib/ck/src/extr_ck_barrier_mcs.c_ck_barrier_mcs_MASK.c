
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_mcs_state {size_t vpid; int sense; } ;
struct ck_barrier_mcs {int * children; int parentsense; int parent; int childnotready; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (struct ck_barrier_mcs*) ;
 int FUNC_2 () ;
 int FUNC_3 (int *) ;
 int FUNC_4 () ;
 int FUNC_5 (int ,int ) ;

void
FUNC_6(struct ck_barrier_mcs *VAR_0,
    struct ck_barrier_mcs_state *VAR_1)
{





 while (FUNC_0(VAR_0[VAR_1->vpid].childnotready) == 0)
  FUNC_4();


 FUNC_1(&VAR_0[VAR_1->vpid]);


 FUNC_5(VAR_0[VAR_1->vpid].parent, 0);


 if (VAR_1->vpid != 0) {
  while (FUNC_3(&VAR_0[VAR_1->vpid].parentsense) != VAR_1->sense)
   FUNC_4();
 }


 FUNC_5(VAR_0[VAR_1->vpid].children[0], VAR_1->sense);
 FUNC_5(VAR_0[VAR_1->vpid].children[1], VAR_1->sense);
 VAR_1->sense = ~VAR_1->sense;
 FUNC_2();
 return;
}
