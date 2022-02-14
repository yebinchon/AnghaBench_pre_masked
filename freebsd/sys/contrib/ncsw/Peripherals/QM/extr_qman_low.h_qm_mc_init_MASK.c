
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int t_Error ;
struct TYPE_3__ {int addr_ce; } ;
struct qm_mc {int state; void* rridx; void* vbit; TYPE_2__* cr; void* rr; } ;
struct qm_portal {TYPE_1__ addr; struct qm_mc mc; } ;
struct TYPE_4__ {int __dont_write_directly__verb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (struct qm_portal*,int ) ;
 int VAR_6 ;
 void* FUNC_2 (int ,int ) ;

__attribute__((used)) static __inline__ t_Error FUNC_3(struct qm_portal *VAR_7)
{
    register struct qm_mc *VAR_8 = &VAR_7->mc;
    if (FUNC_1(VAR_7, VAR_4))
        return FUNC_0(VAR_2);
    VAR_8->cr = FUNC_2(VAR_7->addr.addr_ce, VAR_0);
    VAR_8->rr = FUNC_2(VAR_7->addr.addr_ce, VAR_1);
    VAR_8->rridx = (uint8_t)((VAR_8->cr->__dont_write_directly__verb & VAR_5) ?
            0 : 1);
    VAR_8->vbit = (uint8_t)(VAR_8->rridx ? VAR_5 : 0);



    return VAR_3;
}
