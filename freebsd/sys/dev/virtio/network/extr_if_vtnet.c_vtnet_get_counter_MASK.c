
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtnet_txq_stats {int vtxs_omcasts; int vtxs_obytes; int vtxs_opackets; } ;
struct vtnet_softc {int dummy; } ;
struct vtnet_rxq_stats {int vrxs_ierrors; int vrxs_iqdrops; int vrxs_ipackets; } ;
typedef int ift_counter ;
typedef int if_t ;
 int FUNC_0 (int ,int) ;
 struct vtnet_softc* FUNC_1 (int ) ;
 int FUNC_2 (struct vtnet_softc*,struct vtnet_rxq_stats*,struct vtnet_txq_stats*) ;

__attribute__((used)) static uint64_t
FUNC_3(if_t VAR_0, ift_counter VAR_1)
{
 struct vtnet_softc *VAR_2;
 struct vtnet_rxq_stats VAR_3;
 struct vtnet_txq_stats VAR_4;

 VAR_2 = FUNC_1(VAR_0);
 FUNC_2(VAR_2, &VAR_3, &VAR_4);

 switch (VAR_1) {
 case 132:
  return (VAR_3.vrxs_ipackets);
 case 131:
  return (VAR_3.vrxs_iqdrops);
 case 133:
  return (VAR_3.vrxs_ierrors);
 case 128:
  return (VAR_4.vtxs_opackets);

 case 130:
  return (VAR_4.vtxs_obytes);
 case 129:
  return (VAR_4.vtxs_omcasts);

 default:
  return (FUNC_0(VAR_0, VAR_1));
 }
}
