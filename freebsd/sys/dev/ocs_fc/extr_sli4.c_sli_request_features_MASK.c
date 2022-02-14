
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


typedef int uint8_t ;
struct TYPE_15__ {TYPE_6__* virt; } ;
struct TYPE_16__ {int os; TYPE_3__ bmbx; } ;
typedef TYPE_4__ sli4_t ;
struct TYPE_17__ {int dword; } ;
typedef TYPE_5__ sli4_features_t ;
struct TYPE_14__ {int dword; } ;
struct TYPE_13__ {scalar_t__ status; } ;
struct TYPE_18__ {TYPE_2__ response; TYPE_1__ hdr; } ;
typedef TYPE_6__ sli4_cmd_request_features_t ;
typedef int int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_6__*,int ,TYPE_5__,int ) ;

__attribute__((used)) static int32_t
FUNC_4(sli4_t *VAR_1, sli4_features_t *VAR_2, uint8_t VAR_3)
{

 if (FUNC_3(VAR_1, VAR_1->bmbx.virt, VAR_0,
    *VAR_2, VAR_3)) {
  sli4_cmd_request_features_t *VAR_4 = VAR_1->bmbx.virt;

  if (FUNC_2(VAR_1)) {
   FUNC_0(VAR_1->os, "bootstrap mailbox write fail (REQUEST_FEATURES)\n");
   return -1;
  }
  if (VAR_4->hdr.status) {
   FUNC_1(VAR_1->os, "REQUEST_FEATURES bad status %#x\n",
     VAR_4->hdr.status);
   return -1;
  }
  VAR_2->dword = VAR_4->response.dword;
 } else {
  FUNC_1(VAR_1->os, "bad REQUEST_FEATURES write\n");
  return -1;
 }

 return 0;
}
