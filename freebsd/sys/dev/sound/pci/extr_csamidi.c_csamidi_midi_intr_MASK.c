
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_midi_softc {int mpu; int (* mpu_intr ) (int ) ;} ;


 int FUNC_0 (int ) ;

__attribute__((used)) static void
FUNC_1(void *VAR_0)
{
 struct csa_midi_softc *VAR_1 = (struct csa_midi_softc *)VAR_0;

 if (VAR_1->mpu_intr)
  (VAR_1->mpu_intr)(VAR_1->mpu);
}
