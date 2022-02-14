
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* uint8_t ;
typedef int t_Error ;
struct TYPE_4__ {int addr_ce; } ;
struct bm_mc {int state; void* rridx; void* vbit; TYPE_1__* cr; void* rr; } ;
struct bm_portal {TYPE_2__ addr; struct bm_mc mc; } ;
struct TYPE_3__ {int __dont_write_directly__verb; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ) ;

t_Error FUNC_1(struct bm_portal *VAR_4)
{
    register struct bm_mc *VAR_5 = &VAR_4->mc;
    VAR_5->cr = FUNC_0(VAR_4->addr.addr_ce, VAR_1);
    VAR_5->rr = FUNC_0(VAR_4->addr.addr_ce, VAR_2);
    VAR_5->rridx = (uint8_t)((VAR_5->cr->__dont_write_directly__verb & VAR_0) ?
            0 : 1);
    VAR_5->vbit = (uint8_t)(VAR_5->rridx ? VAR_0 : 0);



    return 0;
}
