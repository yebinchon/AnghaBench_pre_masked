
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int uint8_t ;
typedef int ocs_textbuf_t ;
struct TYPE_8__ {int hw; } ;
typedef TYPE_1__ ocs_t ;
struct TYPE_9__ {scalar_t__ status; int port_protocol; int semaphore; } ;
typedef TYPE_2__ ocs_mgmt_get_port_protocol_result_t ;


 int VAR_0 ;




 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (TYPE_1__*,int *,int *,int *) ;
 scalar_t__ FUNC_1 (int *,int ,int ,TYPE_2__*) ;
 int FUNC_2 (TYPE_1__*,char*) ;
 int FUNC_3 (TYPE_1__*,char*,scalar_t__) ;
 int FUNC_4 (int *,int ,char*,char*) ;
 int VAR_3 ;
 int FUNC_5 (int *,int ,char*) ;
 scalar_t__ FUNC_6 (int *,int ) ;

__attribute__((used)) static void
FUNC_7(ocs_t *VAR_4, char *VAR_5, ocs_textbuf_t *VAR_6)
{
 ocs_mgmt_get_port_protocol_result_t VAR_7;
 uint8_t VAR_8;
 uint8_t VAR_9;
 uint8_t VAR_10;

 FUNC_5(&(VAR_7.semaphore), 0, "get_port_protocol");

 FUNC_0(VAR_4, &VAR_8, &VAR_9, &VAR_10);

 if(FUNC_1(&VAR_4->hw, VAR_10, VAR_3, &VAR_7) == VAR_1) {
  if (FUNC_6(&(VAR_7.semaphore), VAR_2) != 0) {

   FUNC_2(VAR_4, "ocs_sem_p failed\n");
  }
  if (VAR_7.status == 0) {
   switch (VAR_7.port_protocol) {
   case 129:
    FUNC_4(VAR_6, VAR_0, "port_protocol", "iSCSI");
    break;
   case 130:
    FUNC_4(VAR_6, VAR_0, "port_protocol", "FCoE");
    break;
   case 131:
    FUNC_4(VAR_6, VAR_0, "port_protocol", "FC");
    break;
   case 128:
    FUNC_4(VAR_6, VAR_0, "port_protocol", "Other");
    break;
   }
  } else {
   FUNC_3(VAR_4, "getting port profile status 0x%x\n", VAR_7.status);
   FUNC_4(VAR_6, VAR_0, "port_protocol", "Unknown");
  }
 }
}
