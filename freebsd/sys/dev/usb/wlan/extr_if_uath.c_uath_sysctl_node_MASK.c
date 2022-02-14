
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct uath_stat {int st_tx_pending; int st_tx_inactive; int st_tx_active; int st_rx_inactive; int st_rx_active; int st_cmd_waiting; int st_cmd_pending; int st_cmd_inactive; int st_cmd_active; int st_err; int st_keyerr; int st_decomperr; int st_decrypt_micerr; int st_decrypt_crcerr; int st_phyerr; int st_crcerr; int st_stopinprogress; int st_toobigrxpkt; int st_multichunk; int st_invalidlen; int st_badchunkseqnum; } ;
struct uath_softc {int sc_dev; struct uath_stat sc_stat; } ;
struct sysctl_oid_list {int dummy; } ;
struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 struct sysctl_oid* FUNC_0 (struct sysctl_ctx_list*,struct sysctl_oid_list*,int ,char*,int ,int *,char*) ;
 struct sysctl_oid_list* FUNC_1 (struct sysctl_oid*) ;
 int FUNC_2 (struct sysctl_ctx_list*,struct sysctl_oid_list*,char*,int *,char*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

__attribute__((used)) static void
FUNC_5(struct uath_softc *VAR_2)
{
 struct sysctl_ctx_list *VAR_3;
 struct sysctl_oid_list *VAR_4;
 struct sysctl_oid *VAR_5;
 struct uath_stat *VAR_6;

 VAR_6 = &VAR_2->sc_stat;
 VAR_3 = FUNC_3(VAR_2->sc_dev);
 VAR_4 = FUNC_1(FUNC_4(VAR_2->sc_dev));

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_1, "stats", VAR_0,
     ((void*)0), "UATH statistics");
 VAR_4 = FUNC_1(VAR_5);
 FUNC_2(VAR_3, VAR_4, "badchunkseqnum",
     &VAR_6->st_badchunkseqnum, "Bad chunk sequence numbers");
 FUNC_2(VAR_3, VAR_4, "invalidlen", &VAR_6->st_invalidlen,
     "Invalid length");
 FUNC_2(VAR_3, VAR_4, "multichunk", &VAR_6->st_multichunk,
     "Multi chunks");
 FUNC_2(VAR_3, VAR_4, "toobigrxpkt",
     &VAR_6->st_toobigrxpkt, "Too big rx packets");
 FUNC_2(VAR_3, VAR_4, "stopinprogress",
     &VAR_6->st_stopinprogress, "Stop in progress");
 FUNC_2(VAR_3, VAR_4, "crcerrs", &VAR_6->st_crcerr,
     "CRC errors");
 FUNC_2(VAR_3, VAR_4, "phyerr", &VAR_6->st_phyerr,
     "PHY errors");
 FUNC_2(VAR_3, VAR_4, "decrypt_crcerr",
     &VAR_6->st_decrypt_crcerr, "Decryption CRC errors");
 FUNC_2(VAR_3, VAR_4, "decrypt_micerr",
     &VAR_6->st_decrypt_micerr, "Decryption Misc errors");
 FUNC_2(VAR_3, VAR_4, "decomperr", &VAR_6->st_decomperr,
     "Decomp errors");
 FUNC_2(VAR_3, VAR_4, "keyerr", &VAR_6->st_keyerr,
     "Key errors");
 FUNC_2(VAR_3, VAR_4, "err", &VAR_6->st_err,
     "Unknown errors");

 FUNC_2(VAR_3, VAR_4, "cmd_active",
     &VAR_6->st_cmd_active, "Active numbers in Command queue");
 FUNC_2(VAR_3, VAR_4, "cmd_inactive",
     &VAR_6->st_cmd_inactive, "Inactive numbers in Command queue");
 FUNC_2(VAR_3, VAR_4, "cmd_pending",
     &VAR_6->st_cmd_pending, "Pending numbers in Command queue");
 FUNC_2(VAR_3, VAR_4, "cmd_waiting",
     &VAR_6->st_cmd_waiting, "Waiting numbers in Command queue");
 FUNC_2(VAR_3, VAR_4, "rx_active",
     &VAR_6->st_rx_active, "Active numbers in RX queue");
 FUNC_2(VAR_3, VAR_4, "rx_inactive",
     &VAR_6->st_rx_inactive, "Inactive numbers in RX queue");
 FUNC_2(VAR_3, VAR_4, "tx_active",
     &VAR_6->st_tx_active, "Active numbers in TX queue");
 FUNC_2(VAR_3, VAR_4, "tx_inactive",
     &VAR_6->st_tx_inactive, "Inactive numbers in TX queue");
 FUNC_2(VAR_3, VAR_4, "tx_pending",
     &VAR_6->st_tx_pending, "Pending numbers in TX queue");
}
