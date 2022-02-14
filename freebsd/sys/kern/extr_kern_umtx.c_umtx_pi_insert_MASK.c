
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct umtxq_chain {int uc_pi_list; } ;
struct umtx_pi {int pi_key; } ;


 int FUNC_0 (int *,struct umtx_pi*,int ) ;
 int FUNC_1 (struct umtxq_chain*) ;
 int VAR_0 ;
 struct umtxq_chain* FUNC_2 (int *) ;

__attribute__((used)) static inline void
FUNC_3(struct umtx_pi *VAR_1)
{
 struct umtxq_chain *VAR_2;

 VAR_2 = FUNC_2(&VAR_1->pi_key);
 FUNC_1(VAR_2);
 FUNC_0(&VAR_2->uc_pi_list, VAR_1, VAR_0);
}
