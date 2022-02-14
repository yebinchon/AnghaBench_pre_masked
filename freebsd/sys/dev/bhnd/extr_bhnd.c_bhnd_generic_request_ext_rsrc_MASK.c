
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
 int VAR_2 ;
 int FUNC_1 (int,int ) ;
 int FUNC_2 (struct bhnd_core_clkctl*) ;
 int FUNC_3 (struct bhnd_core_clkctl*,int ,int ) ;
 int FUNC_4 (struct bhnd_core_clkctl*) ;
 int VAR_3 ;
 int FUNC_5 (struct bhnd_core_clkctl*,int ,int ) ;
 struct bhnd_core_clkctl* FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 (scalar_t__) ;
 struct bhnd_softc* FUNC_8 (scalar_t__) ;
 int FUNC_9 (char*) ;

int
FUNC_10(device_t VAR_4, device_t VAR_5, u_int VAR_6)
{
 struct bhnd_softc *VAR_7;
 struct bhnd_core_clkctl *VAR_8;
 uint32_t VAR_9;
 uint32_t VAR_10;
 int VAR_11;

 VAR_7 = FUNC_8(VAR_4);

 if (FUNC_7(VAR_5) != VAR_4)
  return (VAR_3);

 if ((VAR_8 = FUNC_6(VAR_5)) == ((void*)0))
  FUNC_9("no active PMU allocation");

 FUNC_0(VAR_8);

 VAR_7 = FUNC_8(VAR_4);

 if (VAR_6 > VAR_0)
  return (VAR_3);

 VAR_9 = FUNC_1((1<<VAR_6), VAR_1);
 VAR_10 = FUNC_1((1<<VAR_6), VAR_2);

 FUNC_2(VAR_8);


 FUNC_3(VAR_8, VAR_9, VAR_9);


 VAR_11 = FUNC_5(VAR_8, VAR_10, VAR_10);

 FUNC_4(VAR_8);

 return (VAR_11);
}
