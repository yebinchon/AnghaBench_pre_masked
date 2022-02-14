
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint8_t ;
typedef int pqisrc_softstate_t ;
struct TYPE_4__ {int offload_config; int offload_enabled_pending; int scsi3addr; } ;
typedef TYPE_1__ pqi_scsi_dev_t ;


 int FUNC_0 (char*,int,int) ;
 int FUNC_1 (char*,int) ;
 int FUNC_2 (char*) ;
 size_t VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int* FUNC_3 (int *,int) ;
 int FUNC_4 (int *,char*,int) ;
 scalar_t__ FUNC_5 (int *,TYPE_1__*) ;
 int FUNC_6 (int *,int ,int,int*,int) ;

__attribute__((used)) static void FUNC_7(pqisrc_softstate_t *VAR_6,
 pqi_scsi_dev_t *VAR_7)
{
 int VAR_8 = VAR_3;
 uint8_t *VAR_9;
 uint8_t VAR_10;

 FUNC_2("IN\n");

 VAR_9 = FUNC_3(VAR_6, 64);
 if (!VAR_9)
  return;

 VAR_8 = FUNC_6(VAR_6, VAR_7->scsi3addr,
     VAR_5 | VAR_4, VAR_9, 64);
 if (VAR_8) {
  FUNC_1("error in send scsi inquiry ret=%d\n", VAR_8);
  goto err_out;
 }

 VAR_10 = VAR_9[VAR_0];
 VAR_7->offload_config =
  !!(VAR_10 & VAR_1);

 if (VAR_7->offload_config) {
  VAR_7->offload_enabled_pending =
   !!(VAR_10 & VAR_2);
  if (FUNC_5(VAR_6, VAR_7))
   VAR_7->offload_enabled_pending = 0;
 }

 FUNC_0("offload_config: 0x%x offload_enabled_pending: 0x%x \n",
   VAR_7->offload_config, VAR_7->offload_enabled_pending);

err_out:
 FUNC_4(VAR_6, (char*)VAR_9, 64);
 FUNC_2("OUT\n");
}
