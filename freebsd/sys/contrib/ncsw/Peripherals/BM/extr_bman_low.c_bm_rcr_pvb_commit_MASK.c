
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bm_rcr_entry {int __dont_write_directly__verb; } ;
struct bm_rcr {int busy; scalar_t__ pmode; int vbit; int available; struct bm_rcr_entry* cursor; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bm_rcr*) ;
 int FUNC_2 (struct bm_rcr_entry*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 () ;

void FUNC_4(struct bm_portal *VAR_1, uint8_t VAR_2)
{
    register struct bm_rcr *VAR_3 = &VAR_1->rcr;
    struct bm_rcr_entry *VAR_4;
    FUNC_0(VAR_3->busy);
    FUNC_0(VAR_3->pmode == VAR_0);
    FUNC_3();
    VAR_4 = VAR_3->cursor;
    VAR_4->__dont_write_directly__verb = (uint8_t)(VAR_2 | VAR_3->vbit);
    FUNC_2(VAR_4);
    FUNC_1(VAR_3);
    VAR_3->available--;



}
