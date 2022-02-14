
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_6__ {scalar_t__ ready; } ;
struct TYPE_7__ {TYPE_1__ bits; int dw0; } ;
typedef TYPE_2__ pd_mpu_mbox_db_t ;
struct TYPE_8__ {int dev; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int FUNC_1 (TYPE_3__*,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(POCE_SOFTC VAR_3, uint32_t VAR_4)
{
 VAR_4 *= 10000;
 pd_mpu_mbox_db_t VAR_5;

 for (;;) {
  if (VAR_4 != 0) {
   if (--VAR_4 == 0)
    break;
  }

  VAR_5.dw0 = FUNC_1(VAR_3, VAR_2, VAR_1);

  if (VAR_5.bits.ready)
   return 0;

  FUNC_0(100);
 }

 FUNC_2(VAR_3->dev, "Mailbox timed out\n");

 return VAR_0;
}
