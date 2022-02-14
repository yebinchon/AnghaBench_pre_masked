
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef void* uint8_t ;
struct TYPE_7__ {void* qry; void* hck; } ;
typedef TYPE_1__ sli4_req_common_set_features_health_check_t ;
typedef int param ;
struct TYPE_8__ {int os; int sli; } ;
typedef TYPE_2__ ocs_hw_t ;
typedef scalar_t__ ocs_hw_rtn_e ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_2__*,void**,int ,int *,int *) ;
 int FUNC_1 (int ,char*,scalar_t__) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (TYPE_1__*,int ,int) ;
 int FUNC_4 (int *,void**,int,int ,int,TYPE_1__*) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_5(ocs_hw_t *VAR_4, uint8_t VAR_5, uint8_t VAR_6)
{
 ocs_hw_rtn_e VAR_7 = VAR_1;
 uint8_t VAR_8[VAR_2];
 sli4_req_common_set_features_health_check_t VAR_9;

 FUNC_3(&VAR_9, 0, sizeof(VAR_9));
 VAR_9.hck = VAR_6;
 VAR_9.qry = VAR_5;


 FUNC_4(&VAR_4->sli, VAR_8, VAR_2,
        VAR_3,
        sizeof(VAR_9),
        &VAR_9);

 VAR_7 = FUNC_0(VAR_4, VAR_8, VAR_0, ((void*)0), ((void*)0));
 if (VAR_7) {
  FUNC_1(VAR_4->os, "ocs_hw_command returns %d\n", VAR_7);
 } else {
  FUNC_2(VAR_4->os, "SLI Port Health Check is enabled \n");
 }

 return VAR_7;
}
