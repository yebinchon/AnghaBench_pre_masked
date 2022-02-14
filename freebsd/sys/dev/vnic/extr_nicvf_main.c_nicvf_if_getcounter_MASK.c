
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct nicvf_hw_stats {int rx_mcast_frames; int tx_bytes_ok; int rx_bytes; } ;
struct nicvf_drv_stats {int tx_drops; int rx_drops; int tx_frames_ok; int rx_frames_ok; } ;
struct nicvf {struct nicvf_drv_stats drv_stats; struct nicvf_hw_stats hw_stats; } ;
struct ifnet {int dummy; } ;
typedef int ift_counter ;
 int FUNC_0 (struct ifnet*,int) ;
 struct nicvf* FUNC_1 (struct ifnet*) ;

__attribute__((used)) static uint64_t
FUNC_2(struct ifnet *VAR_0, ift_counter VAR_1)
{
 struct nicvf *VAR_2;
 struct nicvf_hw_stats *VAR_3;
 struct nicvf_drv_stats *VAR_4;

 VAR_2 = FUNC_1(VAR_0);
 VAR_3 = &VAR_2->hw_stats;
 VAR_4 = &VAR_2->drv_stats;

 switch (VAR_1) {
 case 132:
  return (VAR_4->rx_frames_ok);
 case 129:
  return (VAR_4->tx_frames_ok);
 case 134:
  return (VAR_3->rx_bytes);
 case 130:
  return (VAR_3->tx_bytes_ok);
 case 133:
  return (VAR_3->rx_mcast_frames);
 case 135:
  return (0);
 case 131:
  return (VAR_4->rx_drops);
 case 128:
  return (VAR_4->tx_drops);
 default:
  return (FUNC_0(VAR_0, VAR_1));
 }

}
