
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
 int FUNC_2 (int ) ;
 int FUNC_3 (struct intr_event*,int *) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (char*,int) ;

__attribute__((used)) static int
FUNC_6(void *VAR_6)
{
 struct ar71xx_pci_softc *VAR_7 = VAR_6;
 struct intr_event *VAR_8;
 uint32_t VAR_9, VAR_10, VAR_11;

 VAR_9 = FUNC_0(VAR_2);
 VAR_11 = FUNC_0(VAR_1);



 VAR_9 &= VAR_11;
 for (VAR_10 = VAR_4; VAR_10 <= VAR_3; VAR_10++) {
  if (VAR_9 & (1 << VAR_10)) {
   VAR_8 = VAR_7->sc_eventstab[VAR_10];
   if (!VAR_8 || FUNC_1(&VAR_8->ie_handlers)) {

    if (VAR_10 != 0)
     FUNC_5("Stray IRQ %d\n", VAR_10);
    continue;
   }


   FUNC_2(VAR_0);


   FUNC_3(VAR_8, ((void*)0));
   FUNC_4(VAR_7->sc_intr_counter[VAR_10]);
  }
 }

 return (VAR_5);
}
