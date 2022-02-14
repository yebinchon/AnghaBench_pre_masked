
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_ifp; int hn_ndis_ver; } ;
struct hn_nvs_ndis_init {int nvs_ndis_minor; int nvs_ndis_major; int nvs_type; } ;
typedef int ndis ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_0 ;
 int FUNC_2 (struct hn_softc*,struct hn_nvs_ndis_init*,int) ;
 int FUNC_3 (int ,char*,int) ;
 int FUNC_4 (struct hn_nvs_ndis_init*,int ,int) ;

__attribute__((used)) static int
FUNC_5(struct hn_softc *VAR_1)
{
 struct hn_nvs_ndis_init VAR_2;
 int VAR_3;

 FUNC_4(&VAR_2, 0, sizeof(VAR_2));
 VAR_2.nvs_type = VAR_0;
 VAR_2.nvs_ndis_major = FUNC_0(VAR_1->hn_ndis_ver);
 VAR_2.nvs_ndis_minor = FUNC_1(VAR_1->hn_ndis_ver);


 VAR_3 = FUNC_2(VAR_1, &VAR_2, sizeof(VAR_2));
 if (VAR_3)
  FUNC_3(VAR_1->hn_ifp, "send nvs ndis init failed: %d\n", VAR_3);
 return (VAR_3);
}
