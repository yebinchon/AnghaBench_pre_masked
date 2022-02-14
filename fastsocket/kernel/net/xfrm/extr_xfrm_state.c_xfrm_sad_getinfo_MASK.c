
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct xfrmk_sadinfo {int sadhmcnt; int sadhcnt; int sadcnt; } ;
struct TYPE_3__ {int state_hmask; int state_num; } ;
struct TYPE_4__ {TYPE_1__ xfrm; } ;


 TYPE_2__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_1 ;
 int VAR_2 ;

void FUNC_2(struct xfrmk_sadinfo *VAR_3)
{
 FUNC_0(&VAR_2);
 VAR_3->sadcnt = VAR_0.xfrm.state_num;
 VAR_3->sadhcnt = VAR_0.xfrm.state_hmask;
 VAR_3->sadhmcnt = VAR_1;
 FUNC_1(&VAR_2);
}
