
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct smb {int tx_mcast_bytes; int tx_frames; int rx_pkts_filtered; int rx_frames; scalar_t__ updated; } ;
struct TYPE_4__ {int alc_smb_map; int alc_smb_tag; } ;
struct TYPE_3__ {struct smb* alc_smb; } ;
struct alc_softc {int alc_flags; TYPE_2__ alc_cdata; TYPE_1__ alc_rdata; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct alc_softc*,scalar_t__) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void
FUNC_2(struct alc_softc *VAR_7)
{
 struct smb VAR_8, *VAR_9;
 uint32_t *VAR_10;
 int VAR_11;

 if ((VAR_7->alc_flags & VAR_0) == 0) {
  FUNC_1(VAR_7->alc_cdata.alc_smb_tag,
      VAR_7->alc_cdata.alc_smb_map,
      VAR_3 | VAR_4);
  VAR_9 = VAR_7->alc_rdata.alc_smb;

  VAR_9->updated = 0;
  FUNC_1(VAR_7->alc_cdata.alc_smb_tag,
      VAR_7->alc_cdata.alc_smb_map,
      VAR_5 | VAR_6);
 } else {
  for (VAR_10 = &VAR_8.rx_frames, VAR_11 = 0; VAR_10 <= &VAR_8.rx_pkts_filtered;
      VAR_10++) {
   FUNC_0(VAR_7, VAR_1 + VAR_11);
   VAR_11 += sizeof(uint32_t);
  }

  for (VAR_10 = &VAR_8.tx_frames, VAR_11 = 0; VAR_10 <= &VAR_8.tx_mcast_bytes;
      VAR_10++) {
   FUNC_0(VAR_7, VAR_2 + VAR_11);
   VAR_11 += sizeof(uint32_t);
  }
 }
}
