
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct bm_mc {scalar_t__ state; int vbit; scalar_t__ rridx; scalar_t__ rr; TYPE_1__* cr; } ;
struct bm_portal {struct bm_mc mc; } ;
struct TYPE_2__ {int __dont_write_directly__verb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (scalar_t__) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_3 () ;

void FUNC_4(struct bm_portal *VAR_2, uint8_t VAR_3)
{
    register struct bm_mc *VAR_4 = &VAR_2->mc;
    FUNC_0(VAR_4->state == VAR_1);
    FUNC_3();
    VAR_4->cr->__dont_write_directly__verb = (uint8_t)(VAR_3 | VAR_4->vbit);
    FUNC_1(VAR_4->cr);
    FUNC_2(VAR_4->rr + VAR_4->rridx);



}
