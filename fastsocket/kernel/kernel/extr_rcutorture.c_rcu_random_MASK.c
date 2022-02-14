
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct rcu_random_state {scalar_t__ rrs_count; unsigned long rrs_state; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 () ;
 unsigned long FUNC_2 (int) ;

__attribute__((used)) static unsigned long
FUNC_3(struct rcu_random_state *VAR_3)
{
 if (--VAR_3->rrs_count < 0) {
  VAR_3->rrs_state +=
   (unsigned long)FUNC_0(FUNC_1());
  VAR_3->rrs_count = VAR_2;
 }
 VAR_3->rrs_state = VAR_3->rrs_state * VAR_1 + VAR_0;
 return FUNC_2(VAR_3->rrs_state);
}
