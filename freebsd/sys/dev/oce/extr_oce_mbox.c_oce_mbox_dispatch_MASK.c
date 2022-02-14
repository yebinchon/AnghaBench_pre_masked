
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_6__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_9__ {int hi; int address; scalar_t__ ready; } ;
struct TYPE_10__ {int dw0; TYPE_1__ bits; } ;
typedef TYPE_2__ pd_mpu_mbox_db_t ;
struct TYPE_12__ {scalar_t__ paddr; } ;
struct TYPE_11__ {TYPE_6__ bsmbx; } ;
typedef TYPE_3__* POCE_SOFTC ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_3__*,int ,int ,int ) ;
 int VAR_2 ;
 int FUNC_1 (TYPE_2__*,int) ;
 int VAR_3 ;
 int FUNC_2 (TYPE_6__*,int ) ;
 int FUNC_3 (TYPE_3__*,int) ;

int
FUNC_4(POCE_SOFTC VAR_4, uint32_t VAR_5)
{
 pd_mpu_mbox_db_t VAR_6;
 uint32_t VAR_7;
 int VAR_8;

 FUNC_2(&VAR_4->bsmbx, VAR_1);
 VAR_7 = (uint32_t) ((uint64_t) VAR_4->bsmbx.paddr >> 34);
 FUNC_1(&VAR_6, sizeof(pd_mpu_mbox_db_t));
 VAR_6.bits.ready = 0;
 VAR_6.bits.hi = 1;
 VAR_6.bits.address = VAR_7;

 VAR_8 = FUNC_3(VAR_4, VAR_5);
 if (VAR_8 == 0) {
  FUNC_0(VAR_4, VAR_3, VAR_2, VAR_6.dw0);

  VAR_7 = (uint32_t) ((uint64_t) VAR_4->bsmbx.paddr >> 4) & 0x3fffffff;
  VAR_6.bits.ready = 0;
  VAR_6.bits.hi = 0;
  VAR_6.bits.address = VAR_7;

  VAR_8 = FUNC_3(VAR_4, VAR_5);

  if (VAR_8 == 0) {
   FUNC_0(VAR_4, VAR_3, VAR_2, VAR_6.dw0);

   VAR_8 = FUNC_3(VAR_4, VAR_5);

   FUNC_2(&VAR_4->bsmbx, VAR_0);
  }
 }

 return VAR_8;
}
