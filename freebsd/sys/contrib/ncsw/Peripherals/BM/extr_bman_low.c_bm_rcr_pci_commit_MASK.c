
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct bm_rcr {int busy; scalar_t__ pmode; int vbit; TYPE_1__* cursor; int available; } ;
struct bm_portal {struct bm_rcr rcr; } ;
struct TYPE_2__ {int __dont_write_directly__verb; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bm_rcr*) ;
 int VAR_0 ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 () ;

void FUNC_5(struct bm_portal *VAR_2, uint8_t VAR_3)
{
    register struct bm_rcr *VAR_4 = &VAR_2->rcr;
    FUNC_0(VAR_4->busy);
    FUNC_0(VAR_4->pmode == VAR_1);
    VAR_4->cursor->__dont_write_directly__verb = (uint8_t)(VAR_3 | VAR_4->vbit);
    FUNC_1(VAR_4);
    VAR_4->available--;
    FUNC_4();
    FUNC_3(VAR_0, FUNC_2(VAR_4->cursor));



}
