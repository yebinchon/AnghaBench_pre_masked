
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uintmax_t ;
typedef int uint8_t ;
typedef int uint32_t ;
struct scsi_per_res_in_header {int generation; int length; } ;
struct TYPE_2__ {int key; } ;
struct scsi_per_res_in_full_desc {int flags; int transport_id; int additional_length; int rel_trgt_port_id; int scopetype; TYPE_1__ res_key; } ;


 int FUNC_0 (int,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,char*,...) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (int ) ;
 int FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int VAR_2 ;
 int FUNC_7 (char*,int) ;

__attribute__((used)) static void
FUNC_8(struct scsi_per_res_in_header *VAR_3, uint32_t VAR_4)
{
 uint32_t VAR_5, VAR_6 = 0;
 struct scsi_per_res_in_full_desc *VAR_7;
 uint8_t *VAR_8;
 int VAR_9;

 VAR_5 = FUNC_5(VAR_3->length);
 VAR_5 = FUNC_0(VAR_5, VAR_4);

 if (VAR_5 < sizeof(*VAR_7)) {
  if (VAR_5 == 0)
   FUNC_1(VAR_2, "No reservations.\n");
  else
   FUNC_7("unable to print reservation, only got %u "
         "valid bytes", VAR_5);
  return;
 }

 FUNC_1(VAR_2, "PRgeneration: %#x\n", FUNC_5(VAR_3->generation));
 VAR_8 = (uint8_t *)&VAR_3[1];
 for (VAR_6 = VAR_5, VAR_9 = 0,
      VAR_7 = (struct scsi_per_res_in_full_desc *)VAR_8;
      VAR_6 >= sizeof(*VAR_7);
      VAR_7 = (struct scsi_per_res_in_full_desc *)VAR_8, VAR_9++) {
  uint32_t VAR_10, VAR_11;


  FUNC_1(VAR_2, "Reservation Key: %jd\n",
   (uintmax_t)FUNC_6(VAR_7->res_key.key));
  FUNC_1(VAR_2, "All Target Ports (ALL_TG_PT): %d\n",
   (VAR_7->flags & VAR_0) ? 1 : 0);
  FUNC_1(VAR_2, "Reservation Holder (R_HOLDER): %d\n",
   (VAR_7->flags & VAR_1) ? 1 : 0);

  if (VAR_7->flags & VAR_1)
   FUNC_2(VAR_7->scopetype);

  if ((VAR_7->flags & VAR_0) == 0)
   FUNC_1(VAR_2, "Relative Target Port ID: %#x\n",
    FUNC_4(VAR_7->rel_trgt_port_id));

  VAR_10 = FUNC_5(VAR_7->additional_length);

  FUNC_3(VAR_7->transport_id,
       VAR_10);

  VAR_11 = sizeof(*VAR_7) + VAR_10;
  VAR_6 -= VAR_11;
  VAR_8 += VAR_11;
 }
}
