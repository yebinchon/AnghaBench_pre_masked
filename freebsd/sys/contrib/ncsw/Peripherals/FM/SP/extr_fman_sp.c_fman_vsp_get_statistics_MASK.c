
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef size_t uint16_t ;
struct fm_pcd_storage_profile_regs {int fm_sp_acnt; } ;


 int FUNC_0 (int *) ;

uint32_t FUNC_1(struct fm_pcd_storage_profile_regs *VAR_0,
                    uint16_t VAR_1)
{
    struct fm_pcd_storage_profile_regs *VAR_2;
    VAR_2 = &VAR_0[VAR_1];
    return FUNC_0(&VAR_2->fm_sp_acnt);
}
