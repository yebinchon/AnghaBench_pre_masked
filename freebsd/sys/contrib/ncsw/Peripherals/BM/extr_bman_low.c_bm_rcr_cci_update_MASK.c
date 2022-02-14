
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
struct bm_rcr {scalar_t__ cmode; int available; scalar_t__ ci; } ;
struct bm_portal {struct bm_rcr rcr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int,scalar_t__,scalar_t__) ;
 scalar_t__ VAR_2 ;

uint8_t FUNC_3(struct bm_portal *VAR_3)
{
    register struct bm_rcr *VAR_4 = &VAR_3->rcr;
    uint8_t VAR_5, VAR_6 = VAR_4->ci;
    FUNC_0(VAR_4->cmode == VAR_2);
    VAR_4->ci = (uint8_t)(FUNC_1(VAR_1) & (VAR_0 - 1));
    VAR_5 = FUNC_2(VAR_0, VAR_6, VAR_4->ci);
    VAR_4->available += VAR_5;
    return VAR_5;
}
