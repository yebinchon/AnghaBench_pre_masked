
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ uint8_t ;
struct TYPE_8__ {int buffer_length; } ;
typedef TYPE_2__ sli4_res_common_set_dump_location_t ;
struct TYPE_7__ {scalar_t__ disable_dump_loc; } ;
struct TYPE_9__ {int os; int dump_size; int sli; TYPE_1__ workaround; } ;
typedef TYPE_3__ ocs_hw_t ;
typedef int ocs_hw_rtn_e ;
struct TYPE_10__ {int embed; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (int ,scalar_t__*,scalar_t__*,scalar_t__*) ;
 int FUNC_1 (TYPE_3__*,scalar_t__*,int ,int *,int *) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (int ,char*) ;
 int FUNC_4 (int ,int ) ;
 TYPE_4__ VAR_5 ;
 int VAR_6 ;
 scalar_t__ FUNC_5 (int *,scalar_t__*,int,int,int ,int *,int ) ;
 scalar_t__ FUNC_6 (int *) ;

__attribute__((used)) static ocs_hw_rtn_e
FUNC_7(ocs_hw_t *VAR_7)
{
 uint8_t VAR_8[VAR_3];
 uint8_t VAR_9, VAR_10, VAR_11;
 int VAR_12;


 if (VAR_4 != FUNC_6(&VAR_7->sli)) {
  FUNC_2(VAR_7->os, "Function only supported for I/F type 2\n");
  return VAR_1;
 }





 if (VAR_7->workaround.disable_dump_loc) {
  FUNC_3(VAR_7->os, "FW version is too old for this feature\n");
  return VAR_1;
 }


 FUNC_0(VAR_7->os, &VAR_9, &VAR_10, &VAR_11);
 if (VAR_11 == 0) {
  if (FUNC_5(&VAR_7->sli, VAR_8,
       VAR_3, 1, 0, ((void*)0), 0)) {
   sli4_res_common_set_dump_location_t *VAR_13 =
    (sli4_res_common_set_dump_location_t *)
    (VAR_8 + FUNC_4(VAR_6,
      VAR_5.embed));

   VAR_12 = FUNC_1(VAR_7, VAR_8, VAR_0, ((void*)0), ((void*)0));
   if (VAR_12 != VAR_2) {
    FUNC_3(VAR_7->os, "set dump location command failed\n");
    return VAR_12;
   } else {
    VAR_7->dump_size = VAR_13->buffer_length;
    FUNC_2(VAR_7->os, "Dump size %x\n", VAR_13->buffer_length);
   }
  }
 }
 return VAR_2;
}
