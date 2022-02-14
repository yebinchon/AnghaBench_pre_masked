
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_tournament_state {size_t vpid; int sense; } ;
struct ck_barrier_tournament_round {int role; int opponent; int flag; } ;
struct ck_barrier_tournament {int size; int rounds; } ;







 int FUNC_0 () ;
 struct ck_barrier_tournament_round** FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (int ,int ) ;

void
FUNC_5(struct ck_barrier_tournament *VAR_0,
    struct ck_barrier_tournament_state *VAR_1)
{
 struct ck_barrier_tournament_round **VAR_2 = FUNC_1(&VAR_0->rounds);
 int VAR_3 = 1;

 if (VAR_0->size == 1)
  return;

 for (;; ++VAR_3) {
  switch (VAR_2[VAR_1->vpid][VAR_3].role) {
  case 132:
   break;
  case 131:




   while (FUNC_2(&VAR_2[VAR_1->vpid][VAR_3].flag) != VAR_1->sense)
    FUNC_3();

   FUNC_4(VAR_2[VAR_1->vpid][VAR_3].opponent, VAR_1->sense);
   goto wakeup;
  case 130:

   break;
  case 129:




   FUNC_4(VAR_2[VAR_1->vpid][VAR_3].opponent, VAR_1->sense);
   while (FUNC_2(&VAR_2[VAR_1->vpid][VAR_3].flag) != VAR_1->sense)
    FUNC_3();

   goto wakeup;
  case 128:




   while (FUNC_2(&VAR_2[VAR_1->vpid][VAR_3].flag) != VAR_1->sense)
    FUNC_3();
   break;
  }
 }

wakeup:
 for (VAR_3 -= 1 ;; --VAR_3) {
  switch (VAR_2[VAR_1->vpid][VAR_3].role) {
  case 132:
   break;
  case 131:

   break;
  case 130:
   goto leave;
   break;
  case 129:

   break;
  case 128:




   FUNC_4(VAR_2[VAR_1->vpid][VAR_3].opponent, VAR_1->sense);
   break;
  }
 }

leave:
 FUNC_0();
 VAR_1->sense = ~VAR_1->sense;
 return;
}
