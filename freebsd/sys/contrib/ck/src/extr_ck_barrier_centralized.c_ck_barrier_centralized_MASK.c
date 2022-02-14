
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ck_barrier_centralized_state {unsigned int sense; } ;
struct ck_barrier_centralized {int sense; int value; } ;


 unsigned int FUNC_0 (int *,int) ;
 int FUNC_1 () ;
 int FUNC_2 () ;
 int FUNC_3 () ;
 unsigned int FUNC_4 (int *) ;
 int FUNC_5 () ;
 int FUNC_6 (int *,unsigned int) ;

void
FUNC_7(struct ck_barrier_centralized *VAR_0,
    struct ck_barrier_centralized_state *VAR_1,
    unsigned int VAR_2)
{
 unsigned int VAR_3, VAR_4;







 VAR_3 = VAR_1->sense = ~VAR_1->sense;
 VAR_4 = FUNC_0(&VAR_0->value, 1);
 if (VAR_4 == VAR_2 - 1) {
  FUNC_6(&VAR_0->value, 0);
  FUNC_3();
  FUNC_6(&VAR_0->sense, VAR_3);
  return;
 }

 FUNC_2();
 while (VAR_3 != FUNC_4(&VAR_0->sense))
  FUNC_5();

 FUNC_1();
 return;
}
