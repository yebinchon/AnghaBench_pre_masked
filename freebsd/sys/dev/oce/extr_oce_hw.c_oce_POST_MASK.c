
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ stage; scalar_t__ error; } ;
struct TYPE_9__ {void* dw0; TYPE_1__ bits; } ;
typedef TYPE_2__ mpu_ep_semaphore_t ;
struct TYPE_10__ {int dev; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*) ;
 void* FUNC_2 (TYPE_3__*,int ,int ) ;
 int FUNC_3 (TYPE_3__*,int ,int ,void*) ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (int ,char*,void*) ;

__attribute__((used)) static int
FUNC_5(POCE_SOFTC VAR_5)
{
 mpu_ep_semaphore_t VAR_6;
 int VAR_7 = 60000;


 VAR_6.dw0 = FUNC_2(VAR_5, VAR_4, FUNC_1(VAR_5));


 if (VAR_6.bits.stage <= VAR_2) {
  VAR_6.bits.stage = VAR_3;
  FUNC_3(VAR_5, VAR_4, FUNC_1(VAR_5), VAR_6.dw0);
 }


 for (;;) {
  if (--VAR_7 == 0)
   break;

  FUNC_0(1000);

  VAR_6.dw0 = FUNC_2(VAR_5, VAR_4, FUNC_1(VAR_5));
  if (VAR_6.bits.error) {
   FUNC_4(VAR_5->dev,
      "POST failed: %x\n", VAR_6.dw0);
   return VAR_0;
  }
  if (VAR_6.bits.stage == VAR_1)
   return 0;
 }

 FUNC_4(VAR_5->dev, "POST timed out: %x\n", VAR_6.dw0);

 return VAR_0;
}
