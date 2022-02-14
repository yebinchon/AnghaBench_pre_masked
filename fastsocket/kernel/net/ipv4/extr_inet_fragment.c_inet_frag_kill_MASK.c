
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct inet_frags {int dummy; } ;
struct inet_frag_queue {int last_in; int refcnt; int timer; } ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct inet_frag_queue*,struct inet_frags*) ;

void FUNC_3(struct inet_frag_queue *VAR_1, struct inet_frags *VAR_2)
{
 if (FUNC_1(&VAR_1->timer))
  FUNC_0(&VAR_1->refcnt);

 if (!(VAR_1->last_in & VAR_0)) {
  FUNC_2(VAR_1, VAR_2);
  FUNC_0(&VAR_1->refcnt);
  VAR_1->last_in |= VAR_0;
 }
}
