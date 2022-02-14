
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct viapm_softc {int lock; scalar_t__ irqres; scalar_t__ irqrid; scalar_t__ iores; scalar_t__ iorid; int smbus; int irqih; } ;
typedef int driver_intr_t ;
typedef int device_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int) ;
 int VAR_14 ;
 int VAR_15 ;
 scalar_t__ VAR_16 ;
 scalar_t__ FUNC_2 (int ,int ,scalar_t__*,int,int,int,int) ;
 scalar_t__ FUNC_3 (int ,int ,scalar_t__*,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_6 (int ,scalar_t__,int,int *,struct viapm_softc*,int *) ;
 int FUNC_7 (int ,char*,int) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (int ) ;
 int FUNC_10 (int ,char*,...) ;
 int FUNC_11 (int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (int *,int ,char*,int ) ;
 scalar_t__ FUNC_14 (int ) ;
 scalar_t__ FUNC_15 (int ) ;
 int FUNC_16 (int ,int ,int) ;
 int FUNC_17 (int ,int ,int,int) ;
 scalar_t__ VAR_17 ;

__attribute__((used)) static int
FUNC_18(device_t VAR_18)
{
 struct viapm_softc *VAR_19 = (struct viapm_softc *)FUNC_9(VAR_18);
 u_int32_t VAR_20;

 FUNC_13(&VAR_19->lock, FUNC_8(VAR_18), "viapm", VAR_3);
 if (!(VAR_19->iores = FUNC_3(VAR_18, VAR_12,
  &VAR_19->iorid, VAR_6))) {
  FUNC_10(VAR_18, "could not allocate bus space\n");
  goto error;
 }
 if (VAR_16) {
  VAR_20 = FUNC_16(VAR_18, VAR_14, 1);
  FUNC_10(VAR_18, "SMBus revision code 0x%x\n", VAR_20);
 }

 VAR_19->smbus = FUNC_7(VAR_18, "smbus", -1);


 FUNC_4(VAR_18);


 FUNC_1(VAR_10, FUNC_0(VAR_10) & ~VAR_11);


 VAR_20 = FUNC_16(VAR_18, VAR_15, 1);
 FUNC_17(VAR_18, VAR_15, VAR_20 | 1, 1);
 return 0;

error:
 if (VAR_19->iores)
  FUNC_5(VAR_18, VAR_12, VAR_19->iorid, VAR_19->iores);




 FUNC_12(&VAR_19->lock);

 return VAR_0;
}
