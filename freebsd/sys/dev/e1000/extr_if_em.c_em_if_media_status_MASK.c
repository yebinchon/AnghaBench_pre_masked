
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int u_char ;
struct ifmediareq {int ifm_active; int ifm_status; } ;
struct TYPE_5__ {scalar_t__ type; } ;
struct TYPE_4__ {scalar_t__ media_type; } ;
struct TYPE_6__ {TYPE_2__ mac; TYPE_1__ phy; } ;
struct adapter {int link_speed; scalar_t__ link_duplex; TYPE_3__ hw; int link_active; } ;
typedef int if_ctx_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_0 (char*) ;
 scalar_t__ VAR_11 ;
 scalar_t__ VAR_12 ;
 scalar_t__ VAR_13 ;
 int FUNC_1 (int ) ;
 struct adapter* FUNC_2 (int ) ;

__attribute__((used)) static void
FUNC_3(if_ctx_t VAR_14, struct ifmediareq *VAR_15)
{
 struct adapter *VAR_16 = FUNC_2(VAR_14);
 u_char VAR_17 = VAR_2;

 FUNC_0("em_if_media_status: begin");

 FUNC_1(VAR_14);

 VAR_15->ifm_status = VAR_7;
 VAR_15->ifm_active = VAR_8;

 if (!VAR_16->link_active) {
  return;
 }

 VAR_15->ifm_status |= VAR_6;

 if ((VAR_16->hw.phy.media_type == VAR_12) ||
     (VAR_16->hw.phy.media_type == VAR_13)) {
  if (VAR_16->hw.mac.type == VAR_11)
   VAR_17 = VAR_1;
  VAR_15->ifm_active |= VAR_17 | VAR_9;
 } else {
  switch (VAR_16->link_speed) {
  case 10:
   VAR_15->ifm_active |= VAR_5;
   break;
  case 100:
   VAR_15->ifm_active |= VAR_4;
   break;
  case 1000:
   VAR_15->ifm_active |= VAR_3;
   break;
  }
  if (VAR_16->link_duplex == VAR_0)
   VAR_15->ifm_active |= VAR_9;
  else
   VAR_15->ifm_active |= VAR_10;
 }
}
