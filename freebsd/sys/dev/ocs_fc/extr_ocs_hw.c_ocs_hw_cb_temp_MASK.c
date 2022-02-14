
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_10__ {int arg; int (* cb ) (scalar_t__,int ,int ,int ,int ,int ,int ,int ) ;} ;
typedef TYPE_2__ uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {scalar_t__ status; } ;
struct TYPE_11__ {TYPE_1__ hdr; int * resp_data; } ;
typedef TYPE_3__ sli4_cmd_dump4_t ;
typedef TYPE_2__ ocs_hw_temp_cb_arg_t ;
struct TYPE_12__ {int os; } ;
typedef TYPE_5__ ocs_hw_t ;
typedef scalar_t__ int32_t ;


 int VAR_0 ;
 int FUNC_0 (int ,TYPE_2__*,int) ;
 int FUNC_1 (scalar_t__,int ,int ,int ,int ,int ,int ,int ) ;

__attribute__((used)) static int32_t
FUNC_2(ocs_hw_t *VAR_1, int32_t VAR_2, uint8_t *VAR_3, void *VAR_4)
{

 sli4_cmd_dump4_t* VAR_5 = (sli4_cmd_dump4_t*) VAR_3;
 ocs_hw_temp_cb_arg_t *VAR_6 = VAR_4;
 uint32_t VAR_7 = VAR_5->resp_data[0];
 uint32_t VAR_8 = VAR_5->resp_data[1];
 uint32_t VAR_9 = VAR_5->resp_data[2];
 uint32_t VAR_10 = VAR_5->resp_data[3];
 uint32_t VAR_11 = VAR_5->resp_data[4];
 uint32_t VAR_12 = VAR_5->resp_data[5];

 if (VAR_6) {
  if (VAR_6->cb) {
   if ((VAR_2 == 0) && VAR_5->hdr.status) {
    VAR_2 = VAR_5->hdr.status;
   }
   VAR_6->cb(VAR_2,
       VAR_7,
       VAR_8,
       VAR_9,
       VAR_10,
       VAR_11,
       VAR_12,
       VAR_6->arg);
  }

  FUNC_0(VAR_1->os, VAR_6, sizeof(ocs_hw_temp_cb_arg_t));
 }
 FUNC_0(VAR_1->os, VAR_3, VAR_0);

 return 0;
}
