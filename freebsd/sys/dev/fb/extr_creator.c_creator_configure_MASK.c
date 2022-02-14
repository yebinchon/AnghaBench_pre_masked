
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int va_flags; } ;
struct creator_softc {int sc_node; TYPE_1__ sc_va; int ** sc_bt; int * sc_bh; int sc_flags; } ;
typedef int stdout ;
typedef int phandle_t ;
typedef char ihandle_t ;
typedef int bus_addr_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (int,int,int*,int *) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,char*,int) ;
 int FUNC_3 (char) ;
 int VAR_5 ;
 int VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_4 (int ,TYPE_1__*,int ) ;
 struct creator_softc VAR_8 ;
 int FUNC_5 (int,int ,int *) ;
 scalar_t__ FUNC_6 (char*,char*) ;
 scalar_t__ FUNC_7 (int ,int) ;

__attribute__((used)) static int
FUNC_8(int VAR_9)
{
 struct creator_softc *VAR_10;
 phandle_t VAR_11;
 phandle_t VAR_12;
 ihandle_t VAR_13;
 bus_addr_t VAR_14;
 char VAR_15[sizeof("SUNW,ffb")];
 int VAR_16;
 int VAR_17;





 if (!(VAR_9 & VAR_5)) {
  for (VAR_16 = 0; FUNC_7(VAR_2, VAR_16) >= 0; VAR_16++)
   ;
  return (VAR_16);
 }



 VAR_10 = &VAR_8;
 if (VAR_10->sc_va.va_flags & VAR_6)
  goto found;

 if ((VAR_11 = FUNC_1("/chosen")) == -1)
  return (0);
 if (FUNC_2(VAR_11, "stdout", &VAR_13, sizeof(VAR_13)) == -1)
  return (0);
 if ((VAR_12 = FUNC_3(VAR_13)) == -1)
  return (0);
 if (FUNC_2(VAR_12, "name", VAR_15, sizeof(VAR_15)) == -1)
  return (0);
 if (FUNC_6(VAR_15, "SUNW,ffb") == 0 || FUNC_6(VAR_15, "SUNW,afb") == 0) {
  VAR_10->sc_flags = VAR_1;
  if (FUNC_6(VAR_15, "SUNW,afb") == 0)
   VAR_10->sc_flags |= VAR_0;
  VAR_10->sc_node = VAR_12;
 } else
  return (0);

 for (VAR_16 = VAR_3; VAR_16 <= VAR_4; VAR_16++) {
  if (FUNC_0(VAR_12, VAR_16, &VAR_17, &VAR_14) != 0)
   return (0);
  VAR_10->sc_bt[VAR_16] = &VAR_7[VAR_16 - VAR_3];
  VAR_10->sc_bh[VAR_16] = FUNC_5(VAR_17, VAR_14, VAR_10->sc_bt[VAR_16]);
 }

 if (FUNC_4(0, &VAR_10->sc_va, 0) < 0)
  return (0);

 found:

 return (1);
}
