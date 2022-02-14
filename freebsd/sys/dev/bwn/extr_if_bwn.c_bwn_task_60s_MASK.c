
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* task_60s ) (struct bwn_mac*) ;} ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int VAR_0 ;
 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_1)
{

 if (VAR_1->mac_phy.task_60s)
  VAR_1->mac_phy.task_60s(VAR_1);
 FUNC_0(VAR_1, VAR_0);
}
