
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_chain {int uc_lock; } ;
struct umtx_key {int dummy; } ;


 int FUNC_0 (int *) ;
 struct umtxq_chain* FUNC_1 (struct umtx_key*) ;

__attribute__((used)) static inline void
FUNC_2(struct umtx_key *VAR_0)
{
 struct umtxq_chain *VAR_1;

 VAR_1 = FUNC_1(VAR_0);
 FUNC_0(&VAR_1->uc_lock);
}
