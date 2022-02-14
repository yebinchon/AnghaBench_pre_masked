
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ vm_offset_t ;
typedef int u_int32_t ;
struct powermac_nvram_softc {TYPE_1__* sc_cdev; scalar_t__ sc_data; scalar_t__ sc_bank; scalar_t__ sc_bank1; scalar_t__ sc_bank0; int sc_type; int sc_node; int sc_dev; } ;
typedef int reg ;
typedef int phandle_t ;
typedef int device_t ;
struct TYPE_2__ {struct powermac_nvram_softc* si_drv1; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int *,int) ;
 int FUNC_1 (void*,void*,int) ;
 struct powermac_nvram_softc* FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 TYPE_1__* FUNC_4 (int *,int ,int ,int ,int,char*) ;
 char* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 scalar_t__ FUNC_7 (int ,int) ;
 int FUNC_8 (scalar_t__,int) ;
 int VAR_4 ;
 int FUNC_9 (void*) ;
 scalar_t__ FUNC_10 (char const*,char*) ;

__attribute__((used)) static int
FUNC_11(device_t VAR_5)
{
 struct powermac_nvram_softc *VAR_6;
 const char *VAR_7;
 phandle_t VAR_8;
 u_int32_t VAR_9[3];
 int VAR_10, VAR_11, VAR_12;

 VAR_8 = FUNC_6(VAR_5);
 VAR_6 = FUNC_2(VAR_5);

 if ((VAR_12 = FUNC_0(VAR_8, "reg", VAR_9, sizeof(VAR_9))) < 8)
  return VAR_0;

 VAR_6->sc_dev = VAR_5;
 VAR_6->sc_node = VAR_8;

 VAR_7 = FUNC_5(VAR_5);
 if (FUNC_10(VAR_7, "amd-0137") == 0)
  VAR_6->sc_type = VAR_1;
 else
  VAR_6->sc_type = VAR_2;





 VAR_12 = (VAR_12/4) - 2;

 VAR_6->sc_bank0 = (vm_offset_t)FUNC_7(VAR_9[VAR_12], VAR_3 * 2);
 VAR_6->sc_bank1 = VAR_6->sc_bank0 + VAR_3;

 VAR_10 = FUNC_9((void *)VAR_6->sc_bank0);
 VAR_11 = FUNC_9((void *)VAR_6->sc_bank1);

 if (VAR_10 == -1 && VAR_11 == -1) {
  if ((void *)VAR_6->sc_bank0 != ((void*)0))
   FUNC_8(VAR_6->sc_bank0, VAR_3 * 2);
  FUNC_3(VAR_5, "both banks appear to be corrupt\n");
  return VAR_0;
 }
 FUNC_3(VAR_5, "bank0 generation %d, bank1 generation %d\n",
     VAR_10, VAR_11);

 VAR_6->sc_bank = (VAR_10 > VAR_11) ? VAR_6->sc_bank0 : VAR_6->sc_bank1;
 FUNC_1((void *)VAR_6->sc_bank, (void *)VAR_6->sc_data, VAR_3);

 VAR_6->sc_cdev = FUNC_4(&VAR_4, 0, 0, 0, 0600,
     "powermac_nvram");
 VAR_6->sc_cdev->si_drv1 = VAR_6;

 return 0;
}
