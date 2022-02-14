
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint32_t ;
struct TYPE_4__ {int extent_length; int scopetype; int scope_addr; int reservation; } ;
struct TYPE_3__ {int generation; } ;
struct scsi_per_res_in_rsrv {TYPE_2__ data; TYPE_1__ header; } ;
struct scsi_per_res_in_header {int length; } ;


 int FUNC_0 (int,int) ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 int VAR_0 ;
 int FUNC_6 (char*,int) ;

__attribute__((used)) static void
FUNC_7(struct scsi_per_res_in_header *VAR_1, uint32_t VAR_2)
{
 uint32_t VAR_3;
 struct scsi_per_res_in_rsrv *VAR_4;

 VAR_3 = FUNC_4(VAR_1->length);
 VAR_3 = FUNC_0(VAR_3, VAR_2);

 VAR_4 = (struct scsi_per_res_in_rsrv *)VAR_1;

 if (VAR_3 < sizeof(VAR_4->data) - sizeof(VAR_4->data.extent_length)) {
  if (VAR_3 == 0)
   FUNC_1(VAR_0, "No reservations.\n");
  else
   FUNC_6("unable to print reservation, only got %u "
         "valid bytes", VAR_3);
  return;
 }
 FUNC_1(VAR_0, "PRgeneration: %#x\n",
  FUNC_4(VAR_4->header.generation));
 FUNC_1(VAR_0, "Reservation Key: %jd\n",
  (uintmax_t)FUNC_5(VAR_4->data.reservation));
 FUNC_1(VAR_0, "Scope address: %#x\n",
  FUNC_4(VAR_4->data.scope_addr));

 FUNC_2(VAR_4->data.scopetype);

 FUNC_1(VAR_0, "Extent length: %u\n",
  FUNC_3(VAR_4->data.extent_length));
}
