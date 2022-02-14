
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint64_t ;
struct bge_mac_stats {scalar_t__ etherStatsCollisions; scalar_t__ InputErrors; scalar_t__ InputDiscards; scalar_t__ NoMoreRxBDs; } ;
struct bge_softc {struct bge_mac_stats bge_mac_stats; } ;
typedef int ift_counter ;
typedef int if_t ;


 int FUNC_0 (struct bge_softc*) ;


 scalar_t__ FUNC_1 (int ,int) ;
 struct bge_softc* FUNC_2 (int ) ;

__attribute__((used)) static uint64_t
FUNC_3(if_t VAR_0, ift_counter VAR_1)
{
 struct bge_softc *VAR_2;
 struct bge_mac_stats *VAR_3;

 VAR_2 = FUNC_2(VAR_0);
 if (!FUNC_0(VAR_2))
  return (FUNC_1(VAR_0, VAR_1));
 VAR_3 = &VAR_2->bge_mac_stats;

 switch (VAR_1) {
 case 128:
  return (VAR_3->NoMoreRxBDs + VAR_3->InputDiscards +
      VAR_3->InputErrors);
 case 129:
  return (VAR_3->etherStatsCollisions);
 default:
  return (FUNC_1(VAR_0, VAR_1));
 }
}
