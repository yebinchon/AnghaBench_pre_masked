
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_long ;
struct resource {int r_bushandle; int r_bustag; struct resource** res; } ;
struct aml8726_clkmsr_softc {int r_bushandle; int r_bustag; struct aml8726_clkmsr_softc** res; } ;
typedef int sc ;
typedef int phandle_t ;
typedef int mem ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int) ;
 int FUNC_3 (struct resource*,int ) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_4 (int ,scalar_t__,scalar_t__,int ,int *) ;
 int FUNC_5 (int ,int ,scalar_t__) ;
 int FUNC_6 (int,char*,int) ;
 scalar_t__ FUNC_7 (int ,int ,scalar_t__*,scalar_t__*) ;
 scalar_t__ FUNC_8 (int,char*) ;
 scalar_t__ FUNC_9 (int,scalar_t__*,scalar_t__*) ;
 int VAR_3 ;
 int FUNC_10 (struct resource*,int ,int) ;

int
FUNC_11()
{
 struct resource VAR_4;
 struct aml8726_clkmsr_softc VAR_5;
 phandle_t VAR_6;
 u_long VAR_7, VAR_8;
 u_long VAR_9, VAR_10;
 int VAR_11;

 FUNC_0(VAR_2 != VAR_1,
  ("aml8726_soc_hw_rev isn't initialized"));





 if ((VAR_6 = FUNC_1("clkmsr")) != -1)
  if (FUNC_8(VAR_6, "amlogic,aml8726-clkmsr"))
    goto moveon;




 if ((VAR_6 = FUNC_1("/soc")) == -1)
  return (0);

 if ((VAR_6 = FUNC_6(VAR_6,
     "amlogic,aml8726-clkmsr", 1)) == 0)
  return (0);

moveon:
 if (FUNC_7(FUNC_2(VAR_6), 0, &VAR_7, &VAR_8) != 0
     || FUNC_9(VAR_6, &VAR_9, &VAR_10) != 0)
  return (0);

 VAR_9 += VAR_7;

 FUNC_10(&VAR_4, 0, sizeof(VAR_4));

 VAR_4.r_bustag = VAR_3;

 if (FUNC_4(VAR_4.r_bustag, VAR_9, VAR_10, 0, &VAR_4.r_bushandle) != 0)
  return (0);






 FUNC_10(&VAR_5, 0, sizeof(VAR_5));

 VAR_5.res[0] = &VAR_4;

 VAR_11 = FUNC_3(&VAR_5, VAR_0) * 1000000;

 FUNC_5(VAR_4.r_bustag, VAR_4.r_bushandle, VAR_10);

 return (VAR_11);
}
