
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;
struct emu_midi_softc {int dev; int (* mpu_intr ) (int ) ;int mpu; } ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ,char*,int ) ;
 int FUNC_1 (void*,struct emu_midi_softc*,int ) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static uint32_t
FUNC_3(void *VAR_1, uint32_t VAR_2)
{
 struct emu_midi_softc *VAR_3 = (struct emu_midi_softc *)VAR_1;
 if (VAR_3->mpu_intr)
  (VAR_3->mpu_intr) (VAR_3->mpu);
 if (VAR_3->mpu_intr == ((void*)0)) {


  if (VAR_0)
   FUNC_0(VAR_3->dev, "midi interrupt %08x without interrupt handler, force mread!\n", VAR_2);
  (void)FUNC_1((void *)(((void*)0)), VAR_3, 0);
 }
 return (VAR_2);
}
