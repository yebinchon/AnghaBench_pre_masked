
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_mc {scalar_t__ state; } ;
struct bm_portal {struct bm_mc mc; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ,int ,char*) ;
 int FUNC_2 (struct bm_mc*) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;

void FUNC_3(struct bm_portal *VAR_3)
{
    register struct bm_mc *VAR_4 = &VAR_3->mc;
    FUNC_0(VAR_4->state == VAR_2);




    FUNC_2(VAR_4);

}
