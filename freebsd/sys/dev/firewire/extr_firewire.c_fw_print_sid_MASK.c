
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {int phy_id; int link_active; int gap_count; int phy_speed; int contender; int power_class; int port0; int port1; int port2; int initiated_reset; int more_packets; scalar_t__ sequel; } ;
struct TYPE_5__ {scalar_t__ sequence_num; int phy_id; int port3; int port4; int port5; int port6; int port7; int port8; int port9; int port10; } ;
struct TYPE_4__ {scalar_t__ sequence_num; int phy_id; int port11; int port12; int port13; int port14; int port15; } ;
union fw_self_id {TYPE_3__ p0; TYPE_2__ p1; TYPE_1__ p2; } ;
typedef int uint32_t ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (char*,int,int,...) ;

__attribute__((used)) static void
FUNC_1(uint32_t VAR_2)
{
 union fw_self_id *VAR_3;
 VAR_3 = (union fw_self_id *) &VAR_2;
 if (VAR_3->p0.sequel) {
  if (VAR_3->p1.sequence_num == VAR_0) {
   FUNC_0("node:%d p3:%d p4:%d p5:%d p6:%d p7:%d"
       "p8:%d p9:%d p10:%d\n",
       VAR_3->p1.phy_id, VAR_3->p1.port3, VAR_3->p1.port4,
       VAR_3->p1.port5, VAR_3->p1.port6, VAR_3->p1.port7,
       VAR_3->p1.port8, VAR_3->p1.port9, VAR_3->p1.port10);
  } else if (VAR_3->p2.sequence_num == VAR_1) {
   FUNC_0("node:%d p11:%d p12:%d p13:%d p14:%d p15:%d\n",
       VAR_3->p2.phy_id, VAR_3->p2.port11, VAR_3->p2.port12,
       VAR_3->p2.port13, VAR_3->p2.port14, VAR_3->p2.port15);
  } else {
   FUNC_0("node:%d Unknown Self ID Page number %d\n",
       VAR_3->p1.phy_id, VAR_3->p1.sequence_num);
  }
 } else {
  FUNC_0("node:%d link:%d gap:%d spd:%d con:%d pwr:%d"
      " p0:%d p1:%d p2:%d i:%d m:%d\n",
      VAR_3->p0.phy_id, VAR_3->p0.link_active, VAR_3->p0.gap_count,
      VAR_3->p0.phy_speed, VAR_3->p0.contender,
      VAR_3->p0.power_class, VAR_3->p0.port0, VAR_3->p0.port1,
      VAR_3->p0.port2, VAR_3->p0.initiated_reset, VAR_3->p0.more_packets);
 }
}
