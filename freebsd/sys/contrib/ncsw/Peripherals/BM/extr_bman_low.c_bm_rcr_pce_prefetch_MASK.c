
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct bm_rcr {scalar_t__ pmode; } ;
struct bm_portal {int rcr; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ VAR_1 ;

void FUNC_3(struct bm_portal *VAR_2)
{
    FUNC_0(((struct bm_rcr *)&VAR_2->rcr)->pmode == VAR_1);
    FUNC_1(VAR_0);
    FUNC_2(VAR_0);
}
