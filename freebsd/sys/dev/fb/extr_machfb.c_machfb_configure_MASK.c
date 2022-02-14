
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint32_t ;
struct TYPE_5__ {int va_flags; } ;
struct machfb_softc {int sc_flags; int sc_node; scalar_t__ sc_chip_rev; TYPE_2__ sc_va; int sc_regh; int sc_memh; int * sc_regt; int * sc_memt; scalar_t__ sc_chip_id; } ;
typedef int stdout ;
typedef int phandle_t ;
typedef scalar_t__ ihandle_t ;
typedef int id ;
typedef int bus_addr_t ;
struct TYPE_4__ {scalar_t__ chip_id; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int ,int*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,scalar_t__*,int) ;
 int FUNC_3 (scalar_t__) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int *,int ,int ,int ,int *) ;
 int * VAR_7 ;
 TYPE_1__* VAR_8 ;
 scalar_t__ FUNC_5 (int ,TYPE_2__*,int ) ;
 struct machfb_softc VAR_9 ;
 int FUNC_6 (TYPE_1__*) ;
 int FUNC_7 (int,int ,int *) ;
 scalar_t__ FUNC_8 (int ,int) ;

__attribute__((used)) static int
FUNC_9(int VAR_10)
{
 struct machfb_softc *VAR_11;
 phandle_t VAR_12, VAR_13;
 ihandle_t VAR_14;
 bus_addr_t VAR_15;
 uint32_t VAR_16;
 int VAR_17, VAR_18;





 if (!(VAR_10 & VAR_5)) {
  for (VAR_17 = 0; FUNC_8(VAR_4, VAR_17) >= 0; VAR_17++)
   ;
  return (VAR_17);
 }



 VAR_11 = &VAR_9;
 if (VAR_11->sc_va.va_flags & VAR_6)
  goto found;

 if ((VAR_12 = FUNC_1("/chosen")) == -1)
  return (0);
 if (FUNC_2(VAR_12, "stdout", &VAR_14, sizeof(VAR_14)) == -1)
  return (0);
 if ((VAR_13 = FUNC_3(VAR_14)) == -1)
  return (0);
 if ((FUNC_2(VAR_13, "vendor-id", &VAR_16, sizeof(VAR_16)) == -1) ||
     VAR_16 != VAR_0)
  return (0);
 if (FUNC_2(VAR_13, "device-id", &VAR_16, sizeof(VAR_16)) == -1)
  return (0);
 for (VAR_17 = 0; VAR_17 < FUNC_6(VAR_8); VAR_17++) {
  if (VAR_16 == VAR_8[VAR_17].chip_id) {
   VAR_11->sc_flags = VAR_3;
   VAR_11->sc_node = VAR_13;
   VAR_11->sc_chip_id = VAR_16;
   break;
  }
 }
 if (!(VAR_11->sc_flags & VAR_3))
  return (0);

 if (FUNC_2(VAR_13, "revision-id", &VAR_11->sc_chip_rev,
     sizeof(VAR_11->sc_chip_rev)) == -1)
  return (0);
 if (FUNC_0(VAR_13, 0, &VAR_18, &VAR_15) != 0)
  return (0);
 VAR_11->sc_memt = &VAR_7[0];
 VAR_11->sc_memh = FUNC_7(VAR_18, VAR_15, VAR_11->sc_memt);
 VAR_11->sc_regt = VAR_11->sc_memt;
 FUNC_4(VAR_11->sc_regt, VAR_11->sc_memh, VAR_1,
     VAR_2, &VAR_11->sc_regh);

 if (FUNC_5(0, &VAR_11->sc_va, 0) < 0)
   return (0);

 found:

 return (1);
}
