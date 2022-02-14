
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct isp_pcisoftc {int msicount; TYPE_2__* irq; } ;
struct TYPE_11__ {int dev; } ;
struct TYPE_13__ {int isp_nirq; TYPE_1__ isp_osinfo; } ;
typedef TYPE_3__ ispsoftc_t ;
typedef int driver_intr_t ;
typedef int device_t ;
struct TYPE_12__ {int iqd; int ih; int * irq; } ;


 scalar_t__ FUNC_0 (TYPE_3__*) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 int VAR_1 ;
 int FUNC_2 (TYPE_3__*) ;
 scalar_t__ FUNC_3 (TYPE_3__*) ;
 scalar_t__ FUNC_4 (TYPE_3__*) ;
 int FUNC_5 (int,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int * FUNC_6 (int ,int ,int*,int) ;
 int FUNC_7 (int ,int *,int ,char*,int) ;
 int FUNC_8 (int ,int ,int,int *) ;
 scalar_t__ FUNC_9 (int ,int *,int ,int *,int *,TYPE_3__*,int *) ;
 int FUNC_10 (int ) ;
 struct isp_pcisoftc* FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ,char*) ;
 void* FUNC_14 (int,int) ;
 int * VAR_5 ;
 int * VAR_6 ;
 int * VAR_7 ;
 scalar_t__ FUNC_15 (int ,int*) ;
 scalar_t__ FUNC_16 (int ,int*) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ,int ,char*,int*) ;

__attribute__((used)) static int
FUNC_20(ispsoftc_t *VAR_8)
{
 device_t VAR_9 = VAR_8->isp_osinfo.dev;
 struct isp_pcisoftc *VAR_10 = FUNC_11(VAR_9);
 driver_intr_t *VAR_11;
 int VAR_12, VAR_13;


 if (VAR_8->isp_nirq > 0)
  return (0);

 FUNC_2(VAR_8);
 if (FUNC_0(VAR_8)) {
  VAR_13 = FUNC_4(VAR_8) ? 3 : (FUNC_3(VAR_8) ? 2 : 0);
  FUNC_19(FUNC_10(VAR_9),
      FUNC_12(VAR_9), "msix", &VAR_13);
  VAR_13 = FUNC_14(VAR_1, VAR_13);
  VAR_10->msicount = FUNC_14(FUNC_18(VAR_9), VAR_13);
  if (VAR_10->msicount > 0 &&
      FUNC_16(VAR_9, &VAR_10->msicount) != 0)
   VAR_10->msicount = 0;
 }
 if (VAR_10->msicount == 0) {
  VAR_13 = 1;
  FUNC_19(FUNC_10(VAR_9),
      FUNC_12(VAR_9), "msi", &VAR_13);
  VAR_13 = FUNC_14(1, VAR_13);
  VAR_10->msicount = FUNC_14(FUNC_17(VAR_9), VAR_13);
  if (VAR_10->msicount > 0 &&
      FUNC_15(VAR_9, &VAR_10->msicount) != 0)
   VAR_10->msicount = 0;
 }
 for (VAR_12 = 0; VAR_12 < FUNC_5(1, VAR_10->msicount); VAR_12++) {
  VAR_10->irq[VAR_12].iqd = VAR_12 + (VAR_10->msicount > 0);
  VAR_10->irq[VAR_12].irq = FUNC_6(VAR_9, VAR_4,
      &VAR_10->irq[VAR_12].iqd, VAR_2 | VAR_3);
  if (VAR_10->irq[VAR_12].irq == ((void*)0)) {
   FUNC_13(VAR_9, "could not allocate interrupt\n");
   break;
  }
  if (VAR_12 == 0)
   VAR_11 = VAR_5;
  else if (VAR_12 == 1)
   VAR_11 = VAR_7;
  else
   VAR_11 = VAR_6;
  if (FUNC_9(VAR_9, VAR_10->irq[VAR_12].irq, VAR_0, ((void*)0),
      VAR_11, VAR_8, &VAR_10->irq[VAR_12].ih)) {
   FUNC_13(VAR_9, "could not setup interrupt\n");
   (void) FUNC_8(VAR_9, VAR_4,
       VAR_10->irq[VAR_12].iqd, VAR_10->irq[VAR_12].irq);
   break;
  }
  if (VAR_10->msicount > 1) {
   FUNC_7(VAR_9, VAR_10->irq[VAR_12].irq, VAR_10->irq[VAR_12].ih,
       "%d", VAR_12);
  }
  VAR_8->isp_nirq = VAR_12 + 1;
 }
 FUNC_1(VAR_8);

 return (VAR_8->isp_nirq == 0);
}
