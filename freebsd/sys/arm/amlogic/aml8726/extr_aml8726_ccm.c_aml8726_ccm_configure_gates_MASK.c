
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct aml8726_ccm_softc {int dev; struct aml8726_ccm_function* soc; } ;
struct aml8726_ccm_gate {int bits; int addr; } ;
struct aml8726_ccm_function {struct aml8726_ccm_gate* gates; int * name; } ;
typedef scalar_t__ ssize_t ;
typedef int phandle_t ;


 int FUNC_0 (struct aml8726_ccm_softc*) ;
 int FUNC_1 (struct aml8726_ccm_softc*) ;
 int FUNC_2 (struct aml8726_ccm_softc*,int ) ;
 int FUNC_3 (struct aml8726_ccm_softc*,int ,int) ;
 int VAR_0 ;
 scalar_t__ FUNC_4 (int ,char*,void**) ;
 int FUNC_5 (char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (int ) ;
 scalar_t__ FUNC_8 (int *,char*,scalar_t__) ;

__attribute__((used)) static int
FUNC_9(struct aml8726_ccm_softc *VAR_1)
{
 struct aml8726_ccm_function *VAR_2;
 struct aml8726_ccm_gate *VAR_3;
 char *VAR_4;
 char *VAR_5;
 phandle_t VAR_6;
 ssize_t VAR_7;
 uint32_t VAR_8;

 VAR_6 = FUNC_7(VAR_1->dev);

 VAR_7 = FUNC_4(VAR_6, "functions",
     (void **)&VAR_5);

 if (VAR_7 < 0) {
  FUNC_6(VAR_1->dev, "missing functions attribute in FDT\n");
  return (VAR_0);
 }

 VAR_4 = VAR_5;

 while (VAR_7) {
  for (VAR_2 = VAR_1->soc; VAR_2->name != ((void*)0); VAR_2++)
   if (FUNC_8(VAR_2->name, VAR_4, VAR_7) == 0)
    break;

  if (VAR_2->name == ((void*)0)) {

   FUNC_6(VAR_1->dev,
       "unknown function attribute %.*s in FDT\n",
       VAR_7, VAR_4);
  }


  while (*VAR_4 && VAR_7) {
   VAR_4++;
   VAR_7--;
  }
  if (VAR_7) {
   VAR_4++;
   VAR_7--;
  }

  if (VAR_2->name == ((void*)0))
   continue;

  FUNC_0(VAR_1);
  for (VAR_3 = VAR_2->gates; VAR_3->bits != 0x00000000; VAR_3++) {
   VAR_8 = FUNC_2(VAR_1, VAR_3->addr);
   VAR_8 |= VAR_3->bits;
   FUNC_3(VAR_1, VAR_3->addr, VAR_8);
  }

  FUNC_1(VAR_1);
 }

 FUNC_5(VAR_5);

 return (0);
}
