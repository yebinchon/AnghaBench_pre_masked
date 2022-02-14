
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int VCHIQ_STATUS_T ;
typedef int VCHIQ_INSTANCE_T ;
struct TYPE_5__ {int version_min; int version; int max_services; int max_outstanding_bulks; void* bulk_threshold; void* max_msg_size; } ;
typedef TYPE_1__ VCHIQ_CONFIG_T ;


 int VAR_0 ;
 void* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_1__*,TYPE_1__*,int ) ;
 int FUNC_1 (int,int) ;

VCHIQ_STATUS_T
FUNC_2(VCHIQ_INSTANCE_T VAR_7,
 int VAR_8, VCHIQ_CONFIG_T *VAR_9)
{
 VCHIQ_CONFIG_T VAR_10;

 (void)VAR_7;

 VAR_10.max_msg_size = VAR_1;
 VAR_10.bulk_threshold = VAR_1;
 VAR_10.max_outstanding_bulks = VAR_3;
 VAR_10.max_services = VAR_2;
 VAR_10.version = VAR_5;
 VAR_10.version_min = VAR_6;

 if (VAR_8 > sizeof(VCHIQ_CONFIG_T))
  return VAR_0;

 FUNC_0(VAR_9, &VAR_10,
  FUNC_1(VAR_8, (int)(sizeof(VCHIQ_CONFIG_T))));

 return VAR_4;
}
