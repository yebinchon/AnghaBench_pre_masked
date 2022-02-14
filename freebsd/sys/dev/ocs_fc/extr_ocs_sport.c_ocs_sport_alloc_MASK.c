
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_4__ ;
typedef struct TYPE_21__ TYPE_3__ ;
typedef struct TYPE_20__ TYPE_2__ ;
typedef struct TYPE_19__ TYPE_1__ ;


typedef void* uint8_t ;
typedef scalar_t__ uint64_t ;
typedef int uint32_t ;
struct TYPE_19__ {TYPE_2__* app; } ;
struct TYPE_20__ {int enable_rscn; int display_name; int * mgmt_functions; int node_group_dir_list; scalar_t__ instance_index; int node_group_lock; TYPE_4__* ocs; int wwnn_str; scalar_t__ wwnn; scalar_t__ wwpn; int fc_id; int service_params; void* enable_tgt; void* enable_ini; TYPE_1__ sm; int node_list; int lookup; TYPE_3__* domain; } ;
typedef TYPE_2__ ocs_sport_t ;
struct TYPE_21__ {TYPE_4__* ocs; int sport_list; TYPE_2__* sport; int service_params; int sport_instance_count; } ;
typedef TYPE_3__ ocs_domain_t ;
typedef int fc_plogi_payload_t ;
struct TYPE_22__ {int ctrlmask; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_4__*) ;
 int VAR_3 ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (TYPE_3__*) ;
 int FUNC_3 (int *,TYPE_2__*) ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (int *,int ,int ) ;
 int FUNC_6 (TYPE_4__*,int *,char*,scalar_t__) ;
 int FUNC_7 (TYPE_4__*,char*,int ) ;
 int FUNC_8 (TYPE_4__*,char*,unsigned long long,unsigned long long) ;
 TYPE_2__* FUNC_9 (TYPE_4__*,int,int) ;
 int FUNC_10 (int ,int ,int) ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_11 (int ,int,char*,...) ;
 TYPE_2__* FUNC_12 (TYPE_3__*,scalar_t__,scalar_t__) ;
 int FUNC_13 (TYPE_2__*) ;
 int VAR_6 ;
 int FUNC_14 (TYPE_4__*) ;

ocs_sport_t *
FUNC_15(ocs_domain_t *VAR_7, uint64_t VAR_8, uint64_t VAR_9, uint32_t VAR_10, uint8_t VAR_11, uint8_t VAR_12)
{
 ocs_sport_t *VAR_13;

 if (VAR_7->ocs->ctrlmask & VAR_0) {
  VAR_11 = 0;
 }


 if (VAR_8 != 0) {
  VAR_13 = FUNC_12(VAR_7, VAR_9, VAR_8);
  if (VAR_13 != ((void*)0)) {
   FUNC_8(VAR_7->ocs, "Failed: SPORT %016llx  %016llx already allocated\n",
         (unsigned long long)VAR_9, (unsigned long long)VAR_8);
   return ((void*)0);
  }
 }

 VAR_13 = FUNC_9(VAR_7->ocs, sizeof(*VAR_13), VAR_1 | VAR_2);
 if (VAR_13) {
  VAR_13->ocs = VAR_7->ocs;
  FUNC_11(VAR_13->display_name, sizeof(VAR_13->display_name), "------");
  VAR_13->domain = VAR_7;
  VAR_13->lookup = FUNC_14(VAR_7->ocs);
  VAR_13->instance_index = VAR_7->sport_instance_count++;
  FUNC_13(VAR_13);
  FUNC_5(&VAR_13->node_list, VAR_5, VAR_3);
  VAR_13->sm.app = VAR_13;
  VAR_13->enable_ini = VAR_11;
  VAR_13->enable_tgt = VAR_12;
  VAR_13->enable_rscn = (VAR_13->enable_ini || (VAR_13->enable_tgt && FUNC_0(VAR_13->ocs)));


  FUNC_10(VAR_13->service_params, VAR_7->service_params, sizeof(fc_plogi_payload_t));


  VAR_13->fc_id = VAR_10;


  VAR_13->wwpn = VAR_8;
  VAR_13->wwnn = VAR_9;
  FUNC_11(VAR_13->wwnn_str, sizeof(VAR_13->wwnn_str), "%016llx" , (unsigned long long)VAR_9);


  FUNC_6(VAR_13->ocs, &VAR_13->node_group_lock, "node_group_lock[%d]", VAR_13->instance_index);
  FUNC_5(&VAR_13->node_group_dir_list, VAR_4, VAR_3);


  FUNC_1(VAR_7);
   if (FUNC_4(&VAR_7->sport_list)) {
    VAR_7->sport = VAR_13;
   }

   FUNC_3(&VAR_7->sport_list, VAR_13);
  FUNC_2(VAR_7);

  VAR_13->mgmt_functions = &VAR_6;

  FUNC_7(VAR_7->ocs, "[%s] allocate sport\n", VAR_13->display_name);
 }
 return VAR_13;
}
