
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int ocs_t ;
struct TYPE_2__ {int sm; } ;
typedef TYPE_1__ ocs_sli_port_t ;
typedef int ocs_hw_port_event_e ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;






 int FUNC_0 (int *,char*) ;
 int FUNC_1 (int *,char*,int) ;
 int FUNC_2 (int *,int ,int *) ;

int32_t
FUNC_3(void *VAR_6, ocs_hw_port_event_e VAR_7, void *VAR_8)
{
 ocs_t *VAR_9 = VAR_6;
 ocs_sli_port_t *VAR_10 = VAR_8;

 switch (VAR_7) {
 case 132:
  FUNC_0(VAR_9, "OCS_HW_PORT_ALLOC_OK\n");
  FUNC_2(&VAR_10->sm, VAR_1, ((void*)0));
  break;
 case 133:
  FUNC_0(VAR_9, "OCS_HW_PORT_ALLOC_FAIL\n");
  FUNC_2(&VAR_10->sm, VAR_0, ((void*)0));
  break;
 case 130:
  FUNC_0(VAR_9, "OCS_HW_PORT_ATTACH_OK\n");
  FUNC_2(&VAR_10->sm, VAR_3, ((void*)0));
  break;
 case 131:
  FUNC_0(VAR_9, "OCS_HW_PORT_ATTACH_FAIL\n");
  FUNC_2(&VAR_10->sm, VAR_2, ((void*)0));
  break;
 case 128:
  FUNC_0(VAR_9, "OCS_HW_PORT_FREE_OK\n");
  FUNC_2(&VAR_10->sm, VAR_5, ((void*)0));
  break;
 case 129:
  FUNC_0(VAR_9, "OCS_HW_PORT_FREE_FAIL\n");
  FUNC_2(&VAR_10->sm, VAR_4, ((void*)0));
  break;
 default:
  FUNC_1(VAR_9, "unknown event %#x\n", VAR_7);
 }

 return 0;
}
