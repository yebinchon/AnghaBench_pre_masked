
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tegra_abpmisc_softc {int * strap_opt_res; int * abp_misc_res; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,int,int *) ;
 struct tegra_abpmisc_softc* FUNC_2 (int ) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_1)
{
 struct tegra_abpmisc_softc *VAR_2;

 VAR_2 = FUNC_2(VAR_1);
 if (VAR_2->abp_misc_res != ((void*)0))
  FUNC_1(VAR_1, VAR_0, 0, VAR_2->abp_misc_res);
 if (VAR_2->strap_opt_res != ((void*)0))
  FUNC_1(VAR_1, VAR_0, 1, VAR_2->strap_opt_res);
 return (FUNC_0(VAR_1));
}
