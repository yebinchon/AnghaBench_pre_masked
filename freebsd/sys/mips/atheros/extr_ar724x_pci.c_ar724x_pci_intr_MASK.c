
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct intr_event {int ie_handlers; } ;
struct ar71xx_pci_softc {int * sc_intr_counter; struct intr_event** sc_eventstab; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int *) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intr_event*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(void *VAR_7)
{
 struct ar71xx_pci_softc *VAR_8 = VAR_7;
 struct intr_event *VAR_9;
 uint32_t VAR_10, VAR_11, VAR_12;


 VAR_10 = FUNC_0(VAR_4);
 VAR_12 = FUNC_0(VAR_3);



 VAR_10 &= VAR_12;
 if (VAR_10 & VAR_2) {

  VAR_11 = VAR_1;
  VAR_9 = VAR_8->sc_eventstab[VAR_11];
  if (!VAR_9 || FUNC_1(&VAR_9->ie_handlers)) {
   FUNC_5("Stray IRQ %d\n", VAR_11);
   return (VAR_6);
  }


  FUNC_2(VAR_0);


  FUNC_3(VAR_9, ((void*)0));
  FUNC_4(VAR_8->sc_intr_counter[VAR_11]);
 }

 return (VAR_5);
}
