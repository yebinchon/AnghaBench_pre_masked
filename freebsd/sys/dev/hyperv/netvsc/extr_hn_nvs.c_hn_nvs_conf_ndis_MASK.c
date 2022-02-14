
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {scalar_t__ hn_nvs_ver; int hn_caps; int hn_ifp; } ;
struct hn_nvs_ndis_conf {int nvs_caps; scalar_t__ nvs_mtu; int nvs_type; } ;
typedef int conf ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_0 (struct hn_softc*,struct hn_nvs_ndis_conf*,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct hn_nvs_ndis_conf*,int ,int) ;

__attribute__((used)) static int
FUNC_3(struct hn_softc *VAR_8, int VAR_9)
{
 struct hn_nvs_ndis_conf VAR_10;
 int VAR_11;

 FUNC_2(&VAR_10, 0, sizeof(VAR_10));
 VAR_10.nvs_type = VAR_5;
 VAR_10.nvs_mtu = VAR_9 + VAR_0;
 VAR_10.nvs_caps = VAR_4;
 if (VAR_8->hn_nvs_ver >= VAR_6)
  VAR_10.nvs_caps |= VAR_3;


 VAR_11 = FUNC_0(VAR_8, &VAR_10, sizeof(VAR_10));
 if (VAR_11) {
  FUNC_1(VAR_8->hn_ifp, "send nvs ndis conf failed: %d\n", VAR_11);
  return (VAR_11);
 }

 if (VAR_7)
  FUNC_1(VAR_8->hn_ifp, "nvs ndis conf done\n");
 VAR_8->hn_caps |= VAR_1 | VAR_2;
 return (0);
}
