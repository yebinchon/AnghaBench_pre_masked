
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_5__ {scalar_t__ status; } ;
typedef TYPE_1__ sli4_mbox_command_header_t ;
typedef int ocs_sm_event_t ;
struct TYPE_6__ {int ctx; int indicator; } ;
typedef TYPE_2__ ocs_sli_port_t ;
struct TYPE_7__ {int os; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,char*,int ,int,scalar_t__) ;
 int FUNC_1 (int ,char*) ;
 int * FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int *,int *,int ) ;
 int FUNC_4 (int *,int ,int *) ;

__attribute__((used)) static int32_t
FUNC_5(ocs_hw_t *VAR_5, int32_t VAR_6, uint8_t *VAR_7, void *VAR_8)
{
 ocs_sli_port_t *VAR_9 = VAR_8;
 sli4_mbox_command_header_t *VAR_10 = (sli4_mbox_command_header_t *)VAR_7;
 ocs_sm_event_t VAR_11;
 uint8_t *VAR_12;

 if (VAR_6 || VAR_10->status) {
  FUNC_0(VAR_5->os, "bad status vpi=%#x st=%x hdr=%x\n",
         VAR_9->indicator, VAR_6, VAR_10->status);
  VAR_11 = VAR_0;
 } else {
  VAR_11 = VAR_1;
 }





 VAR_12 = FUNC_2(VAR_5->os, VAR_4, VAR_3 | VAR_2);
 if (VAR_12 == ((void*)0)) {
  FUNC_1(VAR_5->os, "malloc mqecpy failed\n");
  return -1;
 }
 FUNC_3(VAR_12, VAR_7, VAR_4);

 FUNC_4(&VAR_9->ctx, VAR_11, VAR_12);

 return 0;
}
