
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct hn_softc {int hn_caps; int hn_nvs_ver; int hn_ifp; int hn_ndis_ver; int hn_dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct hn_softc*,int ) ;
 int * VAR_7 ;
 int FUNC_4 (int ,char*,...) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static int
FUNC_6(struct hn_softc *VAR_8)
{
 int VAR_9, VAR_10;

 if (FUNC_2(VAR_8->hn_dev)) {



  if (VAR_6) {
   FUNC_4(VAR_8->hn_ifp, "reinit NVS version 0x%x, "
       "NDIS version %u.%u\n", VAR_8->hn_nvs_ver,
       FUNC_0(VAR_8->hn_ndis_ver),
       FUNC_1(VAR_8->hn_ndis_ver));
  }

  VAR_10 = FUNC_3(VAR_8, VAR_8->hn_nvs_ver);
  if (VAR_10) {
   FUNC_4(VAR_8->hn_ifp, "reinit NVS version 0x%x "
       "failed: %d\n", VAR_8->hn_nvs_ver, VAR_10);
   return (VAR_10);
  }
  goto done;
 }




 for (VAR_9 = 0; VAR_9 < FUNC_5(VAR_7); ++VAR_9) {
  VAR_10 = FUNC_3(VAR_8, VAR_7[VAR_9]);
  if (!VAR_10) {
   VAR_8->hn_nvs_ver = VAR_7[VAR_9];


   VAR_8->hn_ndis_ver = VAR_3;
   if (VAR_8->hn_nvs_ver <= VAR_4)
    VAR_8->hn_ndis_ver = VAR_2;

   if (VAR_6) {
    FUNC_4(VAR_8->hn_ifp, "NVS version 0x%x, "
        "NDIS version %u.%u\n", VAR_8->hn_nvs_ver,
        FUNC_0(VAR_8->hn_ndis_ver),
        FUNC_1(VAR_8->hn_ndis_ver));
   }
   goto done;
  }
 }
 FUNC_4(VAR_8->hn_ifp, "no NVS available\n");
 return (VAR_0);

done:
 if (VAR_8->hn_nvs_ver >= VAR_5)
  VAR_8->hn_caps |= VAR_1;
 return (0);
}
