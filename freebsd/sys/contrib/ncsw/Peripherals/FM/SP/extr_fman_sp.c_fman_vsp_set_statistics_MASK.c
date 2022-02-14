
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uint16_t ;
struct fm_pcd_storage_profile_regs {int fm_sp_acnt; } ;


 int FUNC_0 (int ,int *) ;

void FUNC_1(struct fm_pcd_storage_profile_regs *VAR_0,
            uint16_t VAR_1, uint32_t VAR_2)
{
    struct fm_pcd_storage_profile_regs *VAR_3;
    VAR_3 = &VAR_0[VAR_1];
    FUNC_0(VAR_2, &VAR_3->fm_sp_acnt);
}
