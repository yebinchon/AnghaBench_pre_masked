
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct cfi_softc {scalar_t__ sc_width; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 struct cfi_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(device_t VAR_0)
{
 struct cfi_softc *VAR_1;
 int VAR_2;

 VAR_1 = FUNC_1(VAR_0);

 VAR_1->sc_width = 0;
 if ((VAR_2 = FUNC_0(VAR_0)) > 0)
  return (VAR_2);

 FUNC_2(VAR_0, "Broadcom ChipCommon CFI");
 return (VAR_2);
}
