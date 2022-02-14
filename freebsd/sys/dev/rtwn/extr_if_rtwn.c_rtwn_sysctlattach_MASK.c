
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysctl_oid {int dummy; } ;
struct sysctl_ctx_list {int dummy; } ;
struct rtwn_softc {scalar_t__ sc_ht40; scalar_t__ sc_hwcrypto; scalar_t__ sc_ratectl_sysctl; scalar_t__ sc_ratectl; int sc_debug; int sc_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ VAR_9 ;
 int FUNC_0 (struct sysctl_ctx_list*,int ,int ,char*,int ,scalar_t__*,scalar_t__,char*) ;
 int FUNC_1 (struct sysctl_ctx_list*,int ,int ,char*,int ,int *,int ,char*) ;
 int FUNC_2 (struct sysctl_oid*) ;
 struct sysctl_ctx_list* FUNC_3 (int ) ;
 struct sysctl_oid* FUNC_4 (int ) ;

void
FUNC_5(struct rtwn_softc *VAR_10)
{
 struct sysctl_ctx_list *VAR_11 = FUNC_3(VAR_10->sc_dev);
 struct sysctl_oid *VAR_12 = FUNC_4(VAR_10->sc_dev);


 VAR_10->sc_ht40 = 0;
 FUNC_0(VAR_11, FUNC_2(VAR_12), VAR_3,
     "ht40", VAR_1, &VAR_10->sc_ht40,
     VAR_10->sc_ht40, "Enable 40 MHz mode support");
 VAR_10->sc_hwcrypto = VAR_6;
 FUNC_0(VAR_11, FUNC_2(VAR_12), VAR_3,
     "hwcrypto", VAR_1, &VAR_10->sc_hwcrypto,
     VAR_10->sc_hwcrypto, "Enable h/w crypto: "
     "0 - disable, 1 - pairwise keys, 2 - all keys");
 if (VAR_10->sc_hwcrypto >= VAR_5)
  VAR_10->sc_hwcrypto = VAR_4;

 VAR_10->sc_ratectl_sysctl = VAR_9;
 FUNC_0(VAR_11, FUNC_2(VAR_12), VAR_3,
     "ratectl", VAR_1, &VAR_10->sc_ratectl_sysctl,
     VAR_10->sc_ratectl_sysctl, "Select rate control mechanism: "
     "0 - disabled, 1 - via net80211, 2 - via firmware");
 if (VAR_10->sc_ratectl_sysctl >= VAR_8)
  VAR_10->sc_ratectl_sysctl = VAR_7;

 VAR_10->sc_ratectl = VAR_10->sc_ratectl_sysctl;
 FUNC_0(VAR_11, FUNC_2(VAR_12), VAR_3,
     "ratectl_selected", VAR_0, &VAR_10->sc_ratectl,
     VAR_10->sc_ratectl,
     "Currently selected rate control mechanism (by the driver)");
}
