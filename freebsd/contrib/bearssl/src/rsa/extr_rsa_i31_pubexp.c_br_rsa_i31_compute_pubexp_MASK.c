
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int dqlen; int dq; int qlen; int q; int dplen; int dp; int plen; int p; } ;
typedef TYPE_1__ br_rsa_private_key ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,int ,int ,int ) ;

uint32_t
FUNC_2(const br_rsa_private_key *VAR_0)
{




 uint32_t VAR_1, VAR_2;

 VAR_1 = FUNC_1(VAR_0->p, VAR_0->plen, VAR_0->dp, VAR_0->dplen);
 VAR_2 = FUNC_1(VAR_0->q, VAR_0->qlen, VAR_0->dq, VAR_0->dqlen);
 return VAR_1 & -FUNC_0(VAR_1, VAR_2);
}
