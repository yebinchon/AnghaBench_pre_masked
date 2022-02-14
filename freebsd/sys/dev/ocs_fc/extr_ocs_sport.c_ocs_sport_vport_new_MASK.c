
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
typedef int uint64_t ;
typedef int uint32_t ;
struct TYPE_9__ {int is_vport; int sm; void* ini_data; void* tgt_data; } ;
typedef TYPE_1__ ocs_sport_t ;
struct TYPE_10__ {TYPE_4__* ocs; } ;
typedef TYPE_2__ ocs_domain_t ;
typedef int int32_t ;
struct TYPE_11__ {scalar_t__ enable_ini; scalar_t__ enable_tgt; } ;


 int VAR_0 ;
 int FUNC_0 (TYPE_4__*,char*) ;
 int FUNC_1 (int *,int ,int *) ;
 TYPE_1__* FUNC_2 (TYPE_2__*,int ,int ,int ,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_3 (TYPE_4__*,int ,int ,int ,scalar_t__,scalar_t__,void*,void*) ;
 int FUNC_4 (TYPE_2__*) ;

int32_t
FUNC_5(ocs_domain_t *VAR_1, uint64_t VAR_2, uint64_t VAR_3,
      uint32_t VAR_4, uint8_t VAR_5, uint8_t VAR_6, void *VAR_7,
      void *VAR_8, uint8_t VAR_9)
{
 ocs_sport_t *VAR_10;

 if (VAR_5 && (VAR_1->ocs->enable_ini == 0)) {
  FUNC_0(VAR_1->ocs, "driver initiator functionality not enabled\n");
  return -1;
 }

 if (VAR_6 && (VAR_1->ocs->enable_tgt == 0)) {
  FUNC_0(VAR_1->ocs, "driver target functionality not enabled\n");
  return -1;
 }


 if (VAR_9) {
  if (FUNC_3(VAR_1->ocs, VAR_3, VAR_2, VAR_4, VAR_5, VAR_6, VAR_7, VAR_8)) {
   FUNC_0(VAR_1->ocs, "failed to create vport object entry\n");
   return -1;
  }
  return FUNC_4(VAR_1);
 }


 VAR_10 = FUNC_2(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5, VAR_6);

 if (VAR_10 == ((void*)0)) {
  return -1;
 }

 VAR_10->is_vport = 1;
 VAR_10->tgt_data = VAR_7;
 VAR_10->ini_data = VAR_8;


 FUNC_1(&VAR_10->sm, VAR_0, ((void*)0));

 return 0;
}
