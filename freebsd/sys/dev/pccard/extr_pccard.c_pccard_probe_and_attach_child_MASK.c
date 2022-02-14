
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pccard_softc {scalar_t__ sc_enabled_count; int dev; } ;
struct pccard_function {int * cfe; int ccr_mask; int pf_ccr_offset; int pf_ccr_window; int number; } ;
typedef int device_t ;


 int FUNC_0 (int ) ;
 int VAR_0 ;
 struct pccard_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ,int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct pccard_function*,int) ;
 int FUNC_7 (struct pccard_function*) ;
 scalar_t__ FUNC_8 (struct pccard_function*) ;
 int FUNC_9 (struct pccard_function*) ;
 int FUNC_10 (struct pccard_function*,int) ;
 scalar_t__ FUNC_11 (int ) ;

__attribute__((used)) static int
FUNC_12(device_t VAR_1, device_t VAR_2,
    struct pccard_function *VAR_3)
{
 struct pccard_softc *VAR_4 = FUNC_1(VAR_1);
 int VAR_5;
 VAR_5 = FUNC_5(VAR_2);
 if (VAR_5 != 0)
  goto out;
 FUNC_10(VAR_3, -1);
 if (VAR_4->sc_enabled_count == 0)
  FUNC_2(FUNC_4(VAR_1), VAR_1);
 if (FUNC_8(VAR_3) == 0 &&
     FUNC_11(VAR_2) == 0 &&
     FUNC_3(VAR_2) == 0) {
  FUNC_0((VAR_4->dev, "function %d CCR at %d offset %#x "
      "mask %#x: %#x %#x %#x %#x, %#x %#x %#x %#x, %#x\n",
      VAR_3->number, VAR_3->pf_ccr_window, VAR_3->pf_ccr_offset,
      VAR_3->ccr_mask, FUNC_6(VAR_3, 0x00),
      FUNC_6(VAR_3, 0x02), FUNC_6(VAR_3, 0x04),
      FUNC_6(VAR_3, 0x06), FUNC_6(VAR_3, 0x0A),
      FUNC_6(VAR_3, 0x0C), FUNC_6(VAR_3, 0x0E),
      FUNC_6(VAR_3, 0x10), FUNC_6(VAR_3, 0x12)));
  return (0);
 }
 VAR_5 = VAR_0;
out:;





 if (VAR_3->cfe != ((void*)0))
  FUNC_7(VAR_3);
 VAR_3->cfe = ((void*)0);
 FUNC_9(VAR_3);
 return VAR_5;
}
