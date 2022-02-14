
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_1__ ;


struct TYPE_19__ {int devlist_lockcreated; int scan_lock; int devlist_lock; int *** device_list; scalar_t__ prev_heartbeat_count; int num_intrs; int prev_num_intrs; int devlist_lock_name; } ;
typedef TYPE_1__ pqisrc_softstate_t ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (char*,...) ;
 int FUNC_2 (char*) ;
 int VAR_0 ;
 int FUNC_3 (TYPE_1__*,int ,int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_4 (TYPE_1__*) ;
 int VAR_4 ;
 int FUNC_5 () ;
 int VAR_5 ;
 int FUNC_6 (char*,int,int *) ;
 int FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (TYPE_1__*,int *,int ) ;
 int FUNC_10 (TYPE_1__*) ;
 int FUNC_11 (int ,char*,int ) ;
 int FUNC_12 (int *) ;
 int FUNC_13 (TYPE_1__*) ;
 int FUNC_14 (TYPE_1__*) ;
 int FUNC_15 (TYPE_1__*) ;
 int FUNC_16 (TYPE_1__*) ;
 int FUNC_17 (TYPE_1__*) ;
 int FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_1__*) ;
 int FUNC_21 (TYPE_1__*) ;
 int FUNC_22 (TYPE_1__*) ;

int FUNC_23(pqisrc_softstate_t *VAR_6)
{
 int VAR_7 = 0;
 int VAR_8 = 0, VAR_9 = 0;

 FUNC_2("IN\n");

 FUNC_5();


 VAR_7 = FUNC_20(VAR_6);
 if (VAR_7) {
  FUNC_1("SIS Init failed with error %d\n", VAR_7);
  goto err_out;
 }

 VAR_7 = FUNC_6("scan_lock", 1, &VAR_6->scan_lock);
 if(VAR_7 != VAR_4){
  FUNC_1(" Failed to initialize scan lock\n");
  goto err_scan_lock;
 }


 VAR_7 = FUNC_15(VAR_6);
 if (VAR_7) {
  FUNC_1("PQI Init failed with error %d\n", VAR_7);
  goto err_pqi;
 }


 VAR_7 = FUNC_10(VAR_6);
 if (VAR_7) {
  FUNC_1("Interrupt setup failed with error %d\n", VAR_7);
  goto err_intr;
 }


        VAR_7 = FUNC_18(VAR_6);
        if(VAR_7){
                FUNC_1(" Failed to configure Report events\n");
  goto err_event;
 }


        VAR_7 = FUNC_19(VAR_6);
        if(VAR_7){
                FUNC_1(" Failed to configure Set events\n");
                goto err_event;
        }


 VAR_7 = FUNC_13(VAR_6);
        if(VAR_7){
                FUNC_1(" Failed to get ctrl fw version\n");
  goto err_fw_version;
        }


 VAR_7 = FUNC_22(VAR_6);
 if (VAR_7) {
  FUNC_1(" Failed to update driver version in to FW");
  goto err_host_wellness;
 }


 FUNC_11(VAR_6->devlist_lock_name, "devlist_lock", VAR_0);
 VAR_7 = FUNC_9(VAR_6, &VAR_6->devlist_lock, VAR_6->devlist_lock_name);
 if(VAR_7){
  FUNC_1(" Failed to initialize devlist_lock\n");
  VAR_6->devlist_lockcreated=0;
  goto err_lock;
 }
 VAR_6->devlist_lockcreated = 1;

 FUNC_3(VAR_6, VAR_5, 0);
 VAR_6->prev_num_intrs = VAR_6->num_intrs;



 if (FUNC_4(VAR_6)) {
  VAR_7 = FUNC_17(VAR_6);
  if (VAR_7) {
   FUNC_1("Failed to process PQI configuration table %d\n", VAR_7);
   goto err_config_tab;
  }
 }

 if (FUNC_4(VAR_6))
  VAR_6->prev_heartbeat_count = FUNC_0(VAR_6) - VAR_1;


 for(VAR_8 = 0; VAR_8 < VAR_2; VAR_8++)
  for(VAR_9 = 0; VAR_9 < VAR_3; VAR_9++)
   VAR_6->device_list[VAR_8][VAR_9] = ((void*)0);

 FUNC_14(VAR_6);

 FUNC_2("OUT\n");
 return VAR_7;

err_config_tab:
 if(VAR_6->devlist_lockcreated==1){
  FUNC_12(&VAR_6->devlist_lock);
  VAR_6->devlist_lockcreated = 0;
 }
err_lock:
err_fw_version:
err_event:
err_host_wellness:
 FUNC_7(VAR_6);
err_intr:
 FUNC_16(VAR_6);
err_pqi:
 FUNC_8(&VAR_6->scan_lock);
err_scan_lock:
 FUNC_21(VAR_6);
err_out:
 FUNC_2("OUT failed\n");
 return VAR_7;
}
