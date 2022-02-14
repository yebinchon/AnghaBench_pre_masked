
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct TYPE_20__ {scalar_t__ virt; } ;
struct TYPE_17__ {int num_descriptors; TYPE_8__ payload; int arg; int (* cb ) (int ,TYPE_3__*,int ) ;TYPE_1__* descriptors; } ;
typedef TYPE_3__ uint8_t ;
struct TYPE_18__ {int profile_descriptor_count; TYPE_2__* profile_descriptor; } ;
typedef TYPE_4__ sli4_res_common_get_profile_list_t ;
struct TYPE_19__ {int os; } ;
typedef TYPE_5__ ocs_hw_t ;
typedef TYPE_3__ ocs_hw_profile_list_t ;
typedef TYPE_3__ ocs_hw_get_profile_list_cb_arg_t ;
typedef TYPE_8__ ocs_dma_t ;
typedef int int32_t ;
struct TYPE_16__ {scalar_t__ profile_description; int profile_index; int profile_id; } ;
struct TYPE_15__ {int profile_description; int profile_index; int profile_id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,TYPE_8__*) ;
 int FUNC_1 (int ,TYPE_3__*,int) ;
 TYPE_3__* FUNC_2 (int ,int,int ) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,TYPE_3__*,int ) ;

__attribute__((used)) static int32_t
FUNC_5(ocs_hw_t *VAR_3, int32_t VAR_4, uint8_t *VAR_5, void *VAR_6)
{
 ocs_hw_profile_list_t *VAR_7;
 ocs_hw_get_profile_list_cb_arg_t *VAR_8 = VAR_6;
 ocs_dma_t *VAR_9 = &(VAR_8->payload);
 sli4_res_common_get_profile_list_t *VAR_10 = (sli4_res_common_get_profile_list_t *)VAR_9->virt;
 int VAR_11;
 int VAR_12;

 VAR_7 = FUNC_2(VAR_3->os, sizeof(ocs_hw_profile_list_t), VAR_1);
 VAR_7->num_descriptors = VAR_10->profile_descriptor_count;

 VAR_12 = VAR_7->num_descriptors;
 if (VAR_12 > VAR_0) {
  VAR_12 = VAR_0;
 }

 for (VAR_11=0; VAR_11<VAR_12; VAR_11++) {
  VAR_7->descriptors[VAR_11].profile_id = VAR_10->profile_descriptor[VAR_11].profile_id;
  VAR_7->descriptors[VAR_11].profile_index = VAR_10->profile_descriptor[VAR_11].profile_index;
  FUNC_3(VAR_7->descriptors[VAR_11].profile_description, (char *)VAR_10->profile_descriptor[VAR_11].profile_description);
 }

 if (VAR_8->cb) {
  VAR_8->cb(VAR_4, VAR_7, VAR_8->arg);
 } else {
  FUNC_1(VAR_3->os, VAR_7, sizeof(*VAR_7));
 }

 FUNC_1(VAR_3->os, VAR_5, VAR_2);
 FUNC_0(VAR_3->os, &VAR_8->payload);
 FUNC_1(VAR_3->os, VAR_8, sizeof(ocs_hw_get_profile_list_cb_arg_t));

 return 0;
}
