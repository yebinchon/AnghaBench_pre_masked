
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int (* detach ) (struct bwn_mac*) ;} ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*) ;

__attribute__((used)) static void
FUNC_1(struct bwn_mac *VAR_0)
{

 if (VAR_0->mac_phy.detach != ((void*)0))
  VAR_0->mac_phy.detach(VAR_0);
}
