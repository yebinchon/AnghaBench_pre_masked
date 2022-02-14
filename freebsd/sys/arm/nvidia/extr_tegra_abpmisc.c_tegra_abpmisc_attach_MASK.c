
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_abpmisc_softc {int * strap_opt_res; int * abp_misc_res; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 void* FUNC_0 (int ,int ,int*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ,int ,int,int *) ;
 struct tegra_abpmisc_softc* VAR_4 ;
 struct tegra_abpmisc_softc* FUNC_3 (int ) ;
 int FUNC_4 (int ,char*) ;
 int FUNC_5 (struct tegra_abpmisc_softc*) ;

__attribute__((used)) static int
FUNC_6(device_t VAR_5)
{
 int VAR_6;
 struct tegra_abpmisc_softc *VAR_7;

 VAR_7 = FUNC_3(VAR_5);
 VAR_7->dev = VAR_5;

 VAR_6 = 0;
 VAR_7->abp_misc_res = FUNC_0(VAR_5, VAR_3, &VAR_6,
     VAR_1 | VAR_2);
 if (VAR_7->abp_misc_res == ((void*)0)) {
  FUNC_4(VAR_5, "Cannot map ABP misc registers.\n");
  goto fail;
 }

 VAR_6 = 1;
 VAR_7->strap_opt_res = FUNC_0(VAR_5, VAR_3, &VAR_6,
     VAR_1);
 if (VAR_7->strap_opt_res == ((void*)0)) {
  FUNC_4(VAR_5, "Cannot map strapping options registers.\n");
  goto fail;
 }

 FUNC_5(VAR_7);


 if (VAR_7->abp_misc_res != ((void*)0)) {
  FUNC_2(VAR_5, VAR_3, 0, VAR_7->abp_misc_res);
  VAR_7->abp_misc_res = ((void*)0);
 }

 VAR_4 = VAR_7;
 return (FUNC_1(VAR_5));

fail:
 if (VAR_7->abp_misc_res != ((void*)0))
  FUNC_2(VAR_5, VAR_3, 0, VAR_7->abp_misc_res);
 if (VAR_7->strap_opt_res != ((void*)0))
  FUNC_2(VAR_5, VAR_3, 1, VAR_7->strap_opt_res);

 return (VAR_0);
}
