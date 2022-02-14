
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_chain {scalar_t__ uc_busy; scalar_t__ uc_waiters; int uc_lock; } ;
struct umtx_key {int dummy; } ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;
 int FUNC_1 (int *,int ) ;
 struct umtxq_chain* FUNC_2 (struct umtx_key*) ;
 int FUNC_3 (struct umtxq_chain*) ;

__attribute__((used)) static inline void
FUNC_4(struct umtx_key *VAR_1)
{
 struct umtxq_chain *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 FUNC_1(&VAR_2->uc_lock, VAR_0);
 FUNC_0(VAR_2->uc_busy != 0, ("not busy"));
 VAR_2->uc_busy = 0;
 if (VAR_2->uc_waiters)
  FUNC_3(VAR_2);
}
