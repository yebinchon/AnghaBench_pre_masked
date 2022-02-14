
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct emu_sc_info {int dbg_level; int dev; scalar_t__ is_ca0102; scalar_t__ is_ca0108; TYPE_1__* ihandler; } ;
struct TYPE_2__ {int intr_mask; int (* irq_func ) (int ,int) ;int softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ,char*,int) ;
 int FUNC_1 (struct emu_sc_info*,int ,int) ;
 int FUNC_2 (struct emu_sc_info*,int ,int,int) ;
 int FUNC_3 (int ,int) ;

__attribute__((used)) static void
FUNC_4(void *VAR_4)
{
 struct emu_sc_info *VAR_5 = (struct emu_sc_info *)VAR_4;
 uint32_t VAR_6, VAR_7;
 int VAR_8;

 for (;;) {
  VAR_6 = FUNC_1(VAR_5, VAR_0, 4);
  VAR_7 = 0;
  if (VAR_6 == 0)
   break;
  FUNC_2(VAR_5, VAR_0, VAR_6, 4);
  for (VAR_8 = 0; VAR_8 < VAR_3; VAR_8++) {
   if ((((VAR_5->ihandler[VAR_8].intr_mask) & VAR_6) != 0) &&
       (((void *)VAR_5->ihandler[VAR_8].irq_func) != ((void*)0))) {
    VAR_7 |= VAR_5->ihandler[VAR_8].irq_func(VAR_5->ihandler[VAR_8].softc,
        (VAR_5->ihandler[VAR_8].intr_mask) & VAR_6);
   }
  }
 if (VAR_5->dbg_level > 1)
  if (VAR_6 & (~VAR_7))
   FUNC_0(VAR_5->dev, "Unhandled interrupt: %08x\n", VAR_6 & (~VAR_7));

 }

 if ((VAR_5->is_ca0102) || (VAR_5->is_ca0108))
  for (;;) {
   VAR_6 = FUNC_1(VAR_5, VAR_1, 4);
   VAR_7 = 0;
   if (VAR_6 == 0)
    break;
   FUNC_2(VAR_5, VAR_1, VAR_6, 4);
   if (VAR_5->dbg_level > 1)
    FUNC_0(VAR_5->dev, "EMU_IPR2: %08x\n", VAR_6);

   break;

  }

 if (VAR_5->is_ca0102)
  for (;;) {
   VAR_6 = FUNC_1(VAR_5, VAR_2, 4);
   VAR_7 = 0;
   if (VAR_6 == 0)
    break;
   FUNC_2(VAR_5, VAR_2, VAR_6, 4);
   if (VAR_5->dbg_level > 1)
    FUNC_0(VAR_5->dev, "EMU_IPR3: %08x\n", VAR_6);

   break;

  }
}
