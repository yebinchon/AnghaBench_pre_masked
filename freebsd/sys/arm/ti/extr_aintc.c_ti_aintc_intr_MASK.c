
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef size_t uint32_t ;
struct ti_aintc_softc {int sc_dev; TYPE_1__* aintc_isrcs; } ;
struct TYPE_4__ {int td_intr_frame; } ;
struct TYPE_3__ {int tai_isrc; } ;


 int VAR_0 ;
 size_t VAR_1 ;
 int VAR_2 ;
 size_t VAR_3 ;
 size_t FUNC_0 (struct ti_aintc_softc*,int ) ;
 int FUNC_1 (size_t) ;
 TYPE_2__* VAR_4 ;
 int FUNC_2 (int ,char*,size_t) ;
 scalar_t__ FUNC_3 (int *,int ) ;
 int FUNC_4 (struct ti_aintc_softc*) ;
 int FUNC_5 (struct ti_aintc_softc*,size_t) ;

__attribute__((used)) static int
FUNC_6(void *VAR_5)
{
 uint32_t VAR_6;
 struct ti_aintc_softc *VAR_7 = VAR_5;


 VAR_6 = FUNC_0(VAR_7, VAR_2);
 if ((VAR_6 & VAR_3) != 0) {
  FUNC_2(VAR_7->sc_dev,
      "Spurious interrupt detected (0x%08x)\n", VAR_6);
  FUNC_4(VAR_7);
  return (VAR_0);
 }


 VAR_6 &= VAR_1;
 if (FUNC_3(&VAR_7->aintc_isrcs[VAR_6].tai_isrc,
     VAR_4->td_intr_frame) != 0) {
  FUNC_5(VAR_7, VAR_6);
  FUNC_4(VAR_7);
  FUNC_2(VAR_7->sc_dev, "Stray irq %u disabled\n", VAR_6);
 }

 FUNC_1(VAR_6);
 return (VAR_0);
}
