
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct smb {int tx_mcast_bytes; int tx_frames; int rx_pkts_filtered; int rx_frames; } ;
struct ale_softc {int dummy; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct ale_softc*,scalar_t__) ;

__attribute__((used)) static void
FUNC_1(struct ale_softc *VAR_2)
{
 struct smb VAR_3;
 uint32_t *VAR_4;
 int VAR_5;

 for (VAR_4 = &VAR_3.rx_frames, VAR_5 = 0; VAR_4 <= &VAR_3.rx_pkts_filtered; VAR_4++) {
  FUNC_0(VAR_2, VAR_0 + VAR_5);
  VAR_5 += sizeof(uint32_t);
 }

 for (VAR_4 = &VAR_3.tx_frames, VAR_5 = 0; VAR_4 <= &VAR_3.tx_mcast_bytes; VAR_4++) {
  FUNC_0(VAR_2, VAR_1 + VAR_5);
  VAR_5 += sizeof(uint32_t);
 }
}
