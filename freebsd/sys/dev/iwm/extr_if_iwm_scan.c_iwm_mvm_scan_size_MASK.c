
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int n_scan_channels; } ;
struct TYPE_4__ {TYPE_1__ ucode_capa; } ;
struct iwm_softc {TYPE_2__ sc_fw; } ;
struct iwm_scan_req_umac_tail {int dummy; } ;
struct iwm_scan_req_lmac {int dummy; } ;
struct iwm_scan_probe_req {int dummy; } ;
struct iwm_scan_channel_cfg_umac {int dummy; } ;
struct iwm_scan_channel_cfg_lmac {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (struct iwm_softc*,int ) ;
 scalar_t__ FUNC_1 (struct iwm_softc*,int ) ;

__attribute__((used)) static int
FUNC_2(struct iwm_softc *VAR_4)
{
 int VAR_5;

 if (FUNC_1(VAR_4, VAR_3)) {
  if (FUNC_0(VAR_4, VAR_2))
   VAR_5 = VAR_1;
  else
   VAR_5 = VAR_0;

  return VAR_5 +
      sizeof(struct iwm_scan_channel_cfg_umac) *
      VAR_4->sc_fw.ucode_capa.n_scan_channels +
      sizeof(struct iwm_scan_req_umac_tail);
 } else {
  return sizeof(struct iwm_scan_req_lmac) +
      sizeof(struct iwm_scan_channel_cfg_lmac) *
      VAR_4->sc_fw.ucode_capa.n_scan_channels +
      sizeof(struct iwm_scan_probe_req);
 }
}
