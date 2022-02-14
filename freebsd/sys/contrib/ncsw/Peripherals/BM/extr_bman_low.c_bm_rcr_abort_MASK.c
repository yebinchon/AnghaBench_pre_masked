
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_rcr {scalar_t__ busy; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct bm_rcr*) ;

void FUNC_2(struct bm_portal *VAR_0)
{
    register struct bm_rcr *VAR_1 = &VAR_0->rcr;
    FUNC_0(VAR_1->busy);



    FUNC_1(VAR_1);

}
