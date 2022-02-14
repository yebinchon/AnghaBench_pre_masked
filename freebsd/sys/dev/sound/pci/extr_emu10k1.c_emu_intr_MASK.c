
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
struct sc_info {int nchans; int lock; TYPE_2__* rch; TYPE_1__* pch; int dev; int mpu; int (* mpu_intr ) (int ) ;} ;
struct TYPE_4__ {scalar_t__ channel; } ;
struct TYPE_3__ {scalar_t__ channel; scalar_t__ run; } ;


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
 int VAR_10 ;
 int VAR_11 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (struct sc_info*,int ) ;
 int FUNC_3 (struct sc_info*,int ,int) ;
 int FUNC_4 (struct sc_info*,int ,int,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;

__attribute__((used)) static void
FUNC_8(void *VAR_12)
{
 struct sc_info *VAR_13 = VAR_12;
 u_int32_t VAR_14, VAR_15, VAR_16, VAR_17;

 FUNC_5(VAR_13->lock);
 while (1) {
  VAR_14 = FUNC_3(VAR_13, VAR_0, 4);
  if (VAR_14 == 0)
   break;
  VAR_15 = 0;


  if (VAR_14 & VAR_5)
   VAR_15 |= VAR_5;

  if (VAR_14 & (VAR_1 | VAR_2))
   VAR_15 |= VAR_14 & (VAR_1 | VAR_2);

  if (VAR_14 & (VAR_3 | VAR_4))
   VAR_15 |= VAR_14 & (VAR_3 | VAR_4);

  if (VAR_14 & (VAR_6 | VAR_7))
   VAR_15 |= VAR_14 & (VAR_6 | VAR_7);

  if (VAR_14 & VAR_11) {
   VAR_15 |= VAR_11;
   FUNC_1(VAR_13->dev, "pci error\n");

  }
  if (VAR_14 & VAR_10) {
   VAR_15 |= VAR_10;




  }

     if (VAR_14 & VAR_8)
  if (VAR_13->mpu_intr) {
      (VAR_13->mpu_intr)(VAR_13->mpu);
      VAR_15 |= VAR_8 | VAR_9;
   }
  if (VAR_14 & ~VAR_15)
   FUNC_1(VAR_13->dev, "dodgy irq: %x (harmless)\n",
       VAR_14 & ~VAR_15);

  FUNC_4(VAR_13, VAR_0, VAR_14, 4);

  if (VAR_15) {
   FUNC_6(VAR_13->lock);

   if (VAR_15 & VAR_5) {
    VAR_17 = 0;
    for (VAR_16 = 0; VAR_16 < VAR_13->nchans; VAR_16++) {
     if (VAR_13->pch[VAR_16].run) {
      VAR_17 = 1;
      FUNC_0(VAR_13->pch[VAR_16].channel);
     }
    }
    if (VAR_17 == 0)
     FUNC_2(VAR_13, 0);
   }


   if (VAR_15 & (VAR_1 | VAR_2)) {
    if (VAR_13->rch[0].channel)
     FUNC_0(VAR_13->rch[0].channel);
   }
   if (VAR_15 & (VAR_3 | VAR_4)) {
    if (VAR_13->rch[1].channel)
     FUNC_0(VAR_13->rch[1].channel);
   }
   if (VAR_15 & (VAR_6 | VAR_7)) {
    if (VAR_13->rch[2].channel)
     FUNC_0(VAR_13->rch[2].channel);
   }

   FUNC_5(VAR_13->lock);
  }
 }
 FUNC_6(VAR_13->lock);
}
