
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_10__ {TYPE_2__* pqi_reg; } ;
typedef TYPE_3__ pqisrc_softstate_t ;
struct TYPE_8__ {scalar_t__ reset_action; } ;
struct TYPE_11__ {TYPE_1__ bits; int all_bits; } ;
typedef TYPE_4__ pqi_reset_reg_t ;
struct TYPE_9__ {int dev_reset; int pqi_dev_adminq_cap; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (TYPE_3__*,int *,int ) ;
 int FUNC_3 (TYPE_3__*,int *,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;

int FUNC_4(pqisrc_softstate_t *VAR_6)
{
 int VAR_7 = VAR_4;
 pqi_reset_reg_t VAR_8;
 int VAR_9 = 0;
 uint64_t VAR_10 = 0;
 uint32_t VAR_11 = 0;

 VAR_10 = FUNC_3(VAR_6, &VAR_6->pqi_reg->pqi_dev_adminq_cap, VAR_0);

 VAR_11 = (VAR_10 & 0xFFFF00000000) >> 32;

 FUNC_0("max_timeout for PQI reset completion in 100 msec units = %u\n", VAR_11);

 while(1) {
  if (VAR_9++ == VAR_11) {
   return VAR_5;
  }
  FUNC_1(VAR_3);
  VAR_8.all_bits = FUNC_2(VAR_6,
   &VAR_6->pqi_reg->dev_reset, VAR_1);
  if (VAR_8.bits.reset_action == VAR_2)
   break;
 }

 return VAR_7;
}
