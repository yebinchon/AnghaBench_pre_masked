
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sndcard_func {int dummy; } ;
struct csa_midi_softc {int * io; int io_rid; int mtx; int * mpu; int mpu_intr; int dev; } ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_0 (int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int * FUNC_1 (int ,int ,int *,int ) ;
 int FUNC_2 (int ,int ,int ,int *) ;
 int FUNC_3 (struct csa_midi_softc*,int) ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_4 (struct csa_midi_softc*,int ,int) ;
 struct sndcard_func* FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 struct csa_midi_softc* FUNC_7 (int ) ;
 int * FUNC_8 (int *,struct csa_midi_softc*,int ,int *) ;
 int FUNC_9 (int *,int ,char*,int ) ;

__attribute__((used)) static int
FUNC_10(device_t VAR_14)
{
 struct csa_midi_softc *VAR_15;
 struct sndcard_func *VAR_16;
 int VAR_17 = VAR_3;

 VAR_15 = FUNC_7(VAR_14);
 VAR_16 = FUNC_5(VAR_14);

 FUNC_3(VAR_15, sizeof(struct csa_midi_softc));
 VAR_15->dev = VAR_14;


 VAR_15->io_rid = FUNC_0(0);
 VAR_15->io = FUNC_1(VAR_14, VAR_11,
     &VAR_15->io_rid, VAR_10);
 if (VAR_15->io == ((void*)0))
  goto err0;


 VAR_15->mpu = FUNC_8(&VAR_13, VAR_15, VAR_12,
     &VAR_15->mpu_intr);
 if (VAR_15->mpu == ((void*)0)) {
  VAR_17 = VAR_2;
  goto err1;
 }

 FUNC_9(&VAR_15->mtx, FUNC_6(VAR_14), "csamidi softc",
     VAR_9);


 FUNC_4(VAR_15, VAR_1, VAR_6);

 FUNC_4(VAR_15, VAR_1, VAR_8 | VAR_7);
 FUNC_4(VAR_15, VAR_0, VAR_5 | VAR_4);

 return (0);
err1:
 FUNC_2(VAR_14, VAR_11, VAR_15->io_rid, VAR_15->io);
 VAR_15->io = ((void*)0);
err0:
 return (VAR_17);
}
