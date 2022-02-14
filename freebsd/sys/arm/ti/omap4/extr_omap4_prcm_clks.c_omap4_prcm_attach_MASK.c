
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct omap4_prcm_softc {int sc_instance; int * sc_res; int sc_rid; } ;
struct ofw_compat_data {scalar_t__ ocd_data; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_0 (int ,int ,int *,int ) ;
 int VAR_3 ;
 struct omap4_prcm_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;
 struct ofw_compat_data* FUNC_3 (int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;

__attribute__((used)) static int
FUNC_4(device_t VAR_6)
{
 struct omap4_prcm_softc *VAR_7;
 const struct ofw_compat_data *VAR_8;

 VAR_7 = FUNC_1(VAR_6);
 VAR_8 = FUNC_3(VAR_6, VAR_3);
 VAR_7->sc_instance = (int)VAR_8->ocd_data;

 VAR_7->sc_res = FUNC_0(VAR_6, VAR_2, &VAR_7->sc_rid,
     VAR_1);
 if (VAR_7->sc_res == ((void*)0)) {
  FUNC_2(VAR_6, "could not allocate resources\n");
  return (VAR_0);
 }

 VAR_5 = VAR_4;

 return (0);
}
