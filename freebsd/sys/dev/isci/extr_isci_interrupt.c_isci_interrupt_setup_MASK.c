
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint8_t ;
typedef scalar_t__ uint32_t ;
struct isci_softc {scalar_t__ controller_count; scalar_t__ num_interrupts; int device; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (char*,scalar_t__*) ;
 int FUNC_1 (struct isci_softc*) ;
 int FUNC_2 (struct isci_softc*) ;
 scalar_t__ FUNC_3 (int ,scalar_t__*) ;
 scalar_t__ FUNC_4 (int ) ;

void
FUNC_5(struct isci_softc *VAR_3)
{
 uint8_t VAR_4 = VAR_1 *
     VAR_3->controller_count;
 BOOL VAR_5 = VAR_0;
 uint32_t VAR_6 = 0;

 FUNC_0("hw.isci.force_legacy_interrupts",
     &VAR_6);

 if (!VAR_6 &&
     FUNC_4(VAR_3->device) >= VAR_4) {

  VAR_3->num_interrupts = VAR_4;
  if (FUNC_3(VAR_3->device, &VAR_3->num_interrupts) == 0 &&
      VAR_3->num_interrupts == VAR_4)
   VAR_5 = VAR_2;
 }

 if (VAR_5 == VAR_2)
  FUNC_2(VAR_3);
 else
  FUNC_1(VAR_3);
}
