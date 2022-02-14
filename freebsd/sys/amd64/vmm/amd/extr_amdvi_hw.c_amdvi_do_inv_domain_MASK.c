
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct amdvi_softc {int pci_cap; } ;


 int VAR_0 ;
 int FUNC_0 (struct amdvi_softc*,char*) ;
 int FUNC_1 (struct amdvi_softc*,int ) ;
 int FUNC_2 (struct amdvi_softc*) ;
 struct amdvi_softc* FUNC_3 (int ) ;
 int VAR_1 ;
 int * VAR_2 ;

__attribute__((used)) static void
FUNC_4(uint16_t VAR_3, bool VAR_4)
{
 struct amdvi_softc *VAR_5;
 int VAR_6;

 for (VAR_6 = 0; VAR_6 < VAR_1; VAR_6++) {
  VAR_5 = FUNC_3(VAR_2[VAR_6]);
  FUNC_0(VAR_5, ("softc is NULL"));
  FUNC_1(VAR_5, VAR_3);
  FUNC_2(VAR_5);
 }
}
