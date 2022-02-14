
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* exit ) (struct bwn_mac*) ;int (* rf_onoff ) (struct bwn_mac*,int ) ;} ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*,int ) ;
 int FUNC_1 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_2(struct bwn_mac *VAR_0)
{

 VAR_0->mac_phy.rf_onoff(VAR_0, 0);
 if (VAR_0->mac_phy.exit != ((void*)0))
  VAR_0->mac_phy.exit(VAR_0);
}
