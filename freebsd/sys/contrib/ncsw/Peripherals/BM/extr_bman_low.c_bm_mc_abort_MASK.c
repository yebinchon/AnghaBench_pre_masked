
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_mc {scalar_t__ state; } ;
struct bm_portal {struct bm_mc mc; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bm_mc*) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;

void FUNC_2(struct bm_portal *VAR_2)
{
    register struct bm_mc *VAR_3 = &VAR_2->mc;
    FUNC_0(VAR_3->state == VAR_1);



    FUNC_1(VAR_3);

}
