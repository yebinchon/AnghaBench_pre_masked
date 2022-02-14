
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint64_t ;
struct ti_stats {scalar_t__ dot3StatsLateCollisions; scalar_t__ dot3StatsExcessiveCollisions; scalar_t__ dot3StatsMultipleCollisionFrames; scalar_t__ dot3StatsSingleCollisionFrames; } ;
struct TYPE_5__ {int ti_gib_map; int ti_gib_tag; } ;
struct TYPE_4__ {TYPE_3__* ti_info; } ;
struct ti_softc {TYPE_2__ ti_cdata; TYPE_1__ ti_rdata; } ;
struct ifnet {int dummy; } ;
typedef int ift_counter ;
struct TYPE_6__ {struct ti_stats ti_stats; } ;


 int VAR_0 ;
 int VAR_1 ;

 int FUNC_0 (struct ti_softc*) ;
 int FUNC_1 (struct ti_softc*) ;
 int FUNC_2 (int ,int ,int ) ;
 scalar_t__ FUNC_3 (struct ifnet*,int) ;
 struct ti_softc* FUNC_4 (struct ifnet*) ;

__attribute__((used)) static uint64_t
FUNC_5(struct ifnet *VAR_2, ift_counter VAR_3)
{

 switch (VAR_3) {
 case 128:
     {
  struct ti_softc *VAR_4;
  struct ti_stats *VAR_5;
  uint64_t VAR_6;

  VAR_4 = FUNC_4(VAR_2);
  VAR_5 = &VAR_4->ti_rdata.ti_info->ti_stats;

  FUNC_0(VAR_4);
  FUNC_2(VAR_4->ti_cdata.ti_gib_tag,
      VAR_4->ti_cdata.ti_gib_map, VAR_0);
  VAR_6 = VAR_5->dot3StatsSingleCollisionFrames +
      VAR_5->dot3StatsMultipleCollisionFrames +
      VAR_5->dot3StatsExcessiveCollisions +
      VAR_5->dot3StatsLateCollisions;
  FUNC_2(VAR_4->ti_cdata.ti_gib_tag,
      VAR_4->ti_cdata.ti_gib_map, VAR_1);
  FUNC_1(VAR_4);
  return (VAR_6);
     }
 default:
  return (FUNC_3(VAR_2, VAR_3));
 }
}
