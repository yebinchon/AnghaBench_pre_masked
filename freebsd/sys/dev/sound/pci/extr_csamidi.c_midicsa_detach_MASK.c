
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct csa_midi_softc {int mtx; int * io; int io_rid; int mpu; } ;
typedef int device_t ;


 int VAR_0 ;
 int FUNC_0 (int ,int ,int ,int *) ;
 struct csa_midi_softc* FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int *) ;

__attribute__((used)) static int
FUNC_4(device_t VAR_1)
{
 struct csa_midi_softc *VAR_2;
 int VAR_3 = 0;

 VAR_2 = FUNC_1(VAR_1);
 VAR_3 = FUNC_2(VAR_2->mpu);
 if (VAR_3)
  return (VAR_3);
 if (VAR_2->io != ((void*)0)) {
  FUNC_0(VAR_1, VAR_0, VAR_2->io_rid,
      VAR_2->io);
  VAR_2->io = ((void*)0);
 }
 FUNC_3(&VAR_2->mtx);
 return (VAR_3);
}
