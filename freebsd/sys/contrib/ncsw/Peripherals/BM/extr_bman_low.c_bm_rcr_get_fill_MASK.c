
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
struct bm_rcr {int available; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int VAR_0 ;

uint8_t FUNC_0(struct bm_portal *VAR_1)
{
    register struct bm_rcr *VAR_2 = &VAR_1->rcr;
    return (uint8_t)(VAR_0 - 1 - VAR_2->available);
}
