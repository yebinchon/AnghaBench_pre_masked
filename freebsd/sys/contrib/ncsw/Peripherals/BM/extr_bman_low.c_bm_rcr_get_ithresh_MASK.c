
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bm_rcr {int ithresh; } ;
struct bm_portal {struct bm_rcr rcr; } ;



uint8_t FUNC_0(struct bm_portal *VAR_0)
{
    register struct bm_rcr *VAR_1 = &VAR_0->rcr;
    return VAR_1->ithresh;
}
