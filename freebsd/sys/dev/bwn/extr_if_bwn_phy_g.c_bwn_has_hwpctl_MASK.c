
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_2__ {scalar_t__ hwpctl; int (* use_hwpctl ) (struct bwn_mac*) ;} ;
struct bwn_mac {TYPE_1__ mac_phy; } ;


 int FUNC_0 (struct bwn_mac*) ;

__attribute__((used)) static uint8_t
FUNC_1(struct bwn_mac *VAR_0)
{

 if (VAR_0->mac_phy.hwpctl == 0 || VAR_0->mac_phy.use_hwpctl == ((void*)0))
  return (0);
 return (VAR_0->mac_phy.use_hwpctl(VAR_0));
}
