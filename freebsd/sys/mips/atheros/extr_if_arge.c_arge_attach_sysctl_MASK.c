
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct TYPE_4__ {int arge_tx_cnt; int arge_tx_cons; int arge_tx_prod; } ;
struct TYPE_3__ {int intr_ok; int intr_stray2; int intr_stray; int tx_pkts_nosegs; int tx_pkts_unaligned_len; int tx_pkts_unaligned_start; int tx_pkts_unaligned; int tx_pkts_aligned; } ;
struct arge_softc {TYPE_2__ arge_cdata; TYPE_1__ stats; int arge_debug; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 int FUNC_3 (int ,int ) ;
 struct arge_softc* FUNC_4 (int ) ;
 struct sysctl_ctx_list* FUNC_5 (int ) ;
 struct sysctl_oid* FUNC_6 (int ) ;

__attribute__((used)) static void
FUNC_7(device_t VAR_2)
{
 struct arge_softc *VAR_3 = FUNC_4(VAR_2);
 struct sysctl_ctx_list *VAR_4 = FUNC_5(VAR_2);
 struct sysctl_oid *VAR_5 = FUNC_6(VAR_2);
 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_1,
  "tx_pkts_aligned", VAR_0, &VAR_3->stats.tx_pkts_aligned, 0,
  "number of TX aligned packets");

 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_1,
  "tx_pkts_unaligned", VAR_0, &VAR_3->stats.tx_pkts_unaligned,
  0, "number of TX unaligned packets");

 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_1,
  "tx_pkts_unaligned_start", VAR_0, &VAR_3->stats.tx_pkts_unaligned_start,
  0, "number of TX unaligned packets (start)");

 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_1,
  "tx_pkts_unaligned_len", VAR_0, &VAR_3->stats.tx_pkts_unaligned_len,
  0, "number of TX unaligned packets (len)");

 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_1,
  "tx_pkts_nosegs", VAR_0, &VAR_3->stats.tx_pkts_nosegs,
  0, "number of TX packets fail with no ring slots avail");

 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_1,
  "intr_stray_filter", VAR_0, &VAR_3->stats.intr_stray,
  0, "number of stray interrupts (filter)");

 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_1,
  "intr_stray_intr", VAR_0, &VAR_3->stats.intr_stray2,
  0, "number of stray interrupts (intr)");

 FUNC_1(VAR_4, FUNC_2(VAR_5), VAR_1,
  "intr_ok", VAR_0, &VAR_3->stats.intr_ok,
  0, "number of OK interrupts");
}
