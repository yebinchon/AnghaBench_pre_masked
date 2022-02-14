
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct padctl_softc {int dev; } ;
typedef scalar_t__ phandle_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 scalar_t__ FUNC_3 (scalar_t__,char*) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (struct padctl_softc*,scalar_t__) ;
 int FUNC_6 (struct padctl_softc*,scalar_t__) ;

__attribute__((used)) static int
FUNC_7(struct padctl_softc *VAR_1, phandle_t VAR_2)
{
 phandle_t VAR_3;
 int VAR_4;

 VAR_4 = 0;
 VAR_3 = FUNC_3(VAR_2, "pads");

 if (VAR_3 <= 0) {
  FUNC_2(VAR_1->dev, "Cannot find pads subnode.\n");
  return (VAR_0);
 }
 for (VAR_3 = FUNC_0(VAR_3); VAR_3 != 0; VAR_3 = FUNC_1(VAR_3)) {
  if (!FUNC_4(VAR_3))
   continue;
  VAR_4 = FUNC_5(VAR_1, VAR_3);
  if (VAR_4 != 0)
   return (VAR_4);
 }

 VAR_3 = FUNC_3(VAR_2, "ports");
 if (VAR_3 <= 0) {
  FUNC_2(VAR_1->dev, "Cannot find ports subnode.\n");
  return (VAR_0);
 }
 for (VAR_3 = FUNC_0(VAR_3); VAR_3 != 0; VAR_3 = FUNC_1(VAR_3)) {
  if (!FUNC_4(VAR_3))
   continue;
  VAR_4 = FUNC_6(VAR_1, VAR_3);
  if (VAR_4 != 0)
   return (VAR_4);
 }

 return (0);
}
