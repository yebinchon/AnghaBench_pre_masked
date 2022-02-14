
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct s10_svc_softc {int dev; } ;
typedef int phandle_t ;
typedef int method ;
typedef int * intel_smc_callfn_t ;


 scalar_t__ FUNC_0 (int ,char*,char*,int) ;
 int * VAR_0 ;
 int * VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (char*,char*) ;

__attribute__((used)) static intel_smc_callfn_t
FUNC_3(struct s10_svc_softc *VAR_2, phandle_t VAR_3)
{
 char VAR_4[16];

 if ((FUNC_0(VAR_3, "method", VAR_4, sizeof(VAR_4))) > 0) {
  if (FUNC_2(VAR_4, "hvc") == 0)
   return (VAR_0);
  else if (FUNC_2(VAR_4, "smc") == 0)
   return (VAR_1);
  else
   FUNC_1(VAR_2->dev,
       "Invalid method \"%s\"\n", VAR_4);
 } else
  FUNC_1(VAR_2->dev, "SMC method not provided\n");

 return (((void*)0));
}
