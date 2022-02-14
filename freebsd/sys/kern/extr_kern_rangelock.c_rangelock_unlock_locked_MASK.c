
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct rl_q_entry {int dummy; } ;
struct rangelock {int rl_waiters; struct rl_q_entry* rl_currdep; } ;
struct mtx {int dummy; } ;
struct TYPE_2__ {struct rl_q_entry* td_rlqe; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int) ;
 int * FUNC_2 (struct rl_q_entry*,int ) ;
 int FUNC_3 (int *,struct rl_q_entry*,int ) ;
 TYPE_1__* VAR_1 ;
 int FUNC_4 (struct mtx*,int ) ;
 int FUNC_5 (struct mtx*) ;
 int FUNC_6 (struct rangelock*) ;
 int VAR_2 ;
 int FUNC_7 (struct rl_q_entry*) ;

__attribute__((used)) static void
FUNC_8(struct rangelock *VAR_3, struct rl_q_entry *VAR_4,
    struct mtx *VAR_5, bool VAR_6)
{

 FUNC_1(VAR_3 != ((void*)0) && VAR_4 != ((void*)0) && VAR_5 != ((void*)0));
 FUNC_4(VAR_5, VAR_0);

 if (!VAR_6) {
  if (VAR_3->rl_currdep == VAR_4) {
   FUNC_0(FUNC_2(VAR_3->rl_currdep, VAR_2) == ((void*)0),
       ("rangelock_enqueue: next entry not NULL"));
   VAR_3->rl_currdep = ((void*)0);
  }
 } else
  FUNC_0(VAR_4 != VAR_3->rl_currdep, ("stuck currdep"));

 FUNC_3(&VAR_3->rl_waiters, VAR_4, VAR_2);
 if (VAR_6)
  FUNC_6(VAR_3);
 FUNC_5(VAR_5);
 if (VAR_1->td_rlqe == ((void*)0))
  VAR_1->td_rlqe = VAR_4;
 else
  FUNC_7(VAR_4);
}
