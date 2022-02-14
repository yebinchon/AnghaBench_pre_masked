
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vtpci_softc {int vtpci_flags; int vtpci_nvqs; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct vtpci_softc*) ;
 int FUNC_1 (struct vtpci_softc*,int) ;
 int FUNC_2 (struct vtpci_softc*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct vtpci_softc *VAR_4)
{
 int VAR_5;

 if (VAR_4->vtpci_flags & VAR_3) {
  FUNC_2(VAR_4, VAR_0,
      VAR_1);

  for (VAR_5 = 0; VAR_5 < VAR_4->vtpci_nvqs; VAR_5++) {
   FUNC_1(VAR_4, VAR_5);
   FUNC_2(VAR_4, VAR_2,
       VAR_1);
  }
 }

 FUNC_0(VAR_4);
}
