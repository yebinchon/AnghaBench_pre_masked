
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_14__ {int ctrl_in_pqi_mode; TYPE_3__* pqi_reg; TYPE_1__* ioa_reg; scalar_t__ pqi_reset_quiesce_allowed; } ;
typedef TYPE_4__ pqisrc_softstate_t ;
struct TYPE_12__ {int reset_action; int reset_type; } ;
struct TYPE_15__ {int all_bits; TYPE_2__ bits; } ;
typedef TYPE_5__ pqi_reset_reg_t ;
struct TYPE_13__ {int dev_reset; } ;
struct TYPE_11__ {int host_to_ioa_db; } ;


 int FUNC_0 (char*,int) ;
 int FUNC_1 (char*) ;
 int VAR_0 ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_4__*,int *,int ) ;
 int FUNC_4 (TYPE_4__*,int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_5 (TYPE_4__*,int ) ;
 int FUNC_6 (TYPE_4__*) ;

int FUNC_7(pqisrc_softstate_t *VAR_6)
{
 int VAR_7 = VAR_4;
 uint32_t VAR_8 = 0;
 pqi_reset_reg_t VAR_9;

 FUNC_1("IN\n");

 if (1 == VAR_6->ctrl_in_pqi_mode) {

  if (VAR_6->pqi_reset_quiesce_allowed) {
   VAR_8 = FUNC_3(VAR_6, &VAR_6->ioa_reg->host_to_ioa_db,
     VAR_0);
   VAR_8 |= VAR_5;
   FUNC_4(VAR_6, &VAR_6->ioa_reg->host_to_ioa_db,
     VAR_0, FUNC_2(VAR_8));
   VAR_7 = FUNC_5(VAR_6, VAR_5);
   if (VAR_7) {
    FUNC_0("failed with error %d during quiesce\n", VAR_7);
    return VAR_7;
   }
  }

  VAR_9.all_bits = 0;
  VAR_9.bits.reset_type = VAR_3;
  VAR_9.bits.reset_action = VAR_2;

  FUNC_4(VAR_6, &VAR_6->pqi_reg->dev_reset, VAR_1,
   FUNC_2(VAR_9.all_bits));

  VAR_7 = FUNC_6(VAR_6);
  if (VAR_7) {
   FUNC_0("PQI reset timed out: ret = %d!\n", VAR_7);
   return VAR_7;
  }
 }
 VAR_6->ctrl_in_pqi_mode = 0;
 FUNC_1("OUT\n");
 return VAR_7;
}
