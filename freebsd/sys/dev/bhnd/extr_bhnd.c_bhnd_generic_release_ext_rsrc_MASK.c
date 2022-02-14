
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
typedef int u_int ;
struct bhnd_softc {int dummy; } ;
struct bhnd_core_clkctl {int dummy; } ;
typedef scalar_t__ device_t ;


 int FUNC_0 (struct bhnd_core_clkctl*) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct bhnd_core_clkctl*) ;
 int FUNC_3 (struct bhnd_core_clkctl*,int,int ) ;
 int FUNC_4 (struct bhnd_core_clkctl*) ;
 int VAR_2 ;
 struct bhnd_core_clkctl* FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (scalar_t__) ;
 struct bhnd_softc* FUNC_7 (scalar_t__) ;
 int FUNC_8 (char*) ;

int
FUNC_9(device_t VAR_3, device_t VAR_4, u_int VAR_5)
{
 struct bhnd_softc *VAR_6;
 struct bhnd_core_clkctl *VAR_7;
 uint32_t VAR_8;

 VAR_6 = FUNC_7(VAR_3);

 if (FUNC_6(VAR_4) != VAR_3)
  return (VAR_2);

 if ((VAR_7 = FUNC_5(VAR_4)) == ((void*)0))
  FUNC_8("no active PMU allocation");


 FUNC_0(VAR_7);

 VAR_6 = FUNC_7(VAR_3);

 if (VAR_5 > VAR_0)
  return (VAR_2);

 VAR_8 = FUNC_1((1<<VAR_5), VAR_1);


 FUNC_2(VAR_7);
 FUNC_3(VAR_7, 0x0, VAR_8);
 FUNC_4(VAR_7);

 return (0);
}
