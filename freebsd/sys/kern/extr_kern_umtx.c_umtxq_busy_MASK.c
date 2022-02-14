
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_chain {int uc_busy; int uc_waiters; int uc_lock; } ;
struct umtx_key {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int FUNC_1 (struct umtxq_chain*,int *,int ,char*,int ) ;
 int FUNC_2 (int *,int ) ;
 int VAR_2 ;
 struct umtxq_chain* FUNC_3 (struct umtx_key*) ;
 int FUNC_4 (struct umtx_key*) ;
 int FUNC_5 (struct umtx_key*) ;

__attribute__((used)) static inline void
FUNC_6(struct umtx_key *VAR_3)
{
 struct umtxq_chain *VAR_4;

 VAR_4 = FUNC_3(VAR_3);
 FUNC_2(&VAR_4->uc_lock, VAR_1);
 if (VAR_4->uc_busy) {
  while (VAR_4->uc_busy) {
   VAR_4->uc_waiters++;
   FUNC_1(VAR_4, &VAR_4->uc_lock, 0, "umtxqb", 0);
   VAR_4->uc_waiters--;
  }
 }
 VAR_4->uc_busy = 1;
}
