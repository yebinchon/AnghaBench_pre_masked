
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
struct vtpci_softc {int vtpci_nvqs; int vtpci_flags; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 struct vtpci_softc* FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (struct vtpci_softc*,int) ;
 int FUNC_4 (struct vtpci_softc*) ;
 int FUNC_5 (int ,int ) ;
 int FUNC_6 (int ) ;

__attribute__((used)) static int
FUNC_7(device_t VAR_4, uint64_t VAR_5)
{
 struct vtpci_softc *VAR_6;
 int VAR_7, VAR_8;

 VAR_6 = FUNC_0(VAR_4);
 if (FUNC_1(VAR_4) != VAR_2)
  FUNC_6(VAR_4);





 FUNC_5(VAR_4, VAR_0);
 FUNC_5(VAR_4, VAR_1);

 FUNC_2(VAR_4, VAR_5);

 for (VAR_7 = 0; VAR_7 < VAR_6->vtpci_nvqs; VAR_7++) {
  VAR_8 = FUNC_3(VAR_6, VAR_7);
  if (VAR_8)
   return (VAR_8);
 }

 if (VAR_6->vtpci_flags & VAR_3) {
  VAR_8 = FUNC_4(VAR_6);
  if (VAR_8)
   return (VAR_8);
 }

 return (0);
}
