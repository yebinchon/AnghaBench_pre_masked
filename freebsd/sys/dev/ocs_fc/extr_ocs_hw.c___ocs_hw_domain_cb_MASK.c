
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
struct TYPE_6__ {int os; } ;
typedef TYPE_2__ ocs_hw_t ;
struct TYPE_7__ {int sm; int indicator; } ;
typedef TYPE_3__ ocs_domain_t ;
typedef int int32_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*,int ,int ,scalar_t__) ;
 int FUNC_1 (int *,int ,int *) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_hw_t *VAR_2, int32_t VAR_3, uint8_t *VAR_4, void *VAR_5)
{
 ocs_domain_t *VAR_6 = VAR_5;
 sli4_mbox_command_header_t *VAR_7 = (sli4_mbox_command_header_t *)VAR_4;
 ocs_sm_event_t VAR_8;

 if (VAR_3 || VAR_7->status) {
  FUNC_0(VAR_2->os, "bad status vfi=%#x st=%x hdr=%x\n",
         VAR_6->indicator, VAR_3, VAR_7->status);
  VAR_8 = VAR_0;
 } else {
  VAR_8 = VAR_1;
 }

 FUNC_1(&VAR_6->sm, VAR_8, VAR_4);

 return 0;
}
