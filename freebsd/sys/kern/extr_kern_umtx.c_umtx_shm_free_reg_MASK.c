
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct umtx_shm_reg {int ushm_obj; TYPE_1__* ushm_cred; } ;
struct TYPE_2__ {int cr_ruidinfo; } ;


 int FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,struct umtx_shm_reg*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_4(struct umtx_shm_reg *VAR_1)
{

 FUNC_0(VAR_1->ushm_cred->cr_ruidinfo, -1, 0);
 FUNC_1(VAR_1->ushm_cred);
 FUNC_2(VAR_1->ushm_obj);
 FUNC_3(VAR_0, VAR_1);
}
