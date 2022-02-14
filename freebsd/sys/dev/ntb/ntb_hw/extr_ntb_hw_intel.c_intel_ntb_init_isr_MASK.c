
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
struct ntb_softc {scalar_t__ type; int db_vec_count; int device; int db_vec_shift; int db_count; int db_mask; TYPE_1__* self_reg; int db_valid_mask; int last_ts; scalar_t__ allocated_interrupts; } ;
struct TYPE_2__ {int db_mask; } ;


 int FUNC_0 (struct ntb_softc*) ;
 int FUNC_1 (struct ntb_softc*) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (struct ntb_softc*,int ) ;
 int FUNC_3 (int ,int ) ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (struct ntb_softc*,int ,int ) ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (struct ntb_softc*,int) ;
 int FUNC_7 (struct ntb_softc*) ;
 int FUNC_8 (int ,int,int) ;
 int FUNC_9 (struct ntb_softc*) ;
 int FUNC_10 (struct ntb_softc*,int) ;
 scalar_t__ VAR_5 ;
 int FUNC_11 (int ,int*) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_14(struct ntb_softc *VAR_7)
{
 uint32_t VAR_8, VAR_9;
 int VAR_10;

 VAR_7->allocated_interrupts = 0;
 VAR_7->last_ts = VAR_6;




 FUNC_0(VAR_7);
 VAR_7->db_mask = VAR_7->db_valid_mask;
 FUNC_4(VAR_7, VAR_7->self_reg->db_mask, VAR_7->db_mask);
 FUNC_1(VAR_7);

 VAR_9 = VAR_8 = FUNC_3(FUNC_12(VAR_7->device),
     VAR_7->db_count);
 if (VAR_8 >= 1) {
  VAR_10 = FUNC_11(VAR_7->device, &VAR_9);

  if (VAR_5 != 0 && VAR_10 == 0 &&
      VAR_9 == VAR_8)
   VAR_9--;

  if (VAR_10 == 0 && VAR_9 < VAR_8) {
   VAR_10 = FUNC_8(VAR_7->device, VAR_8,
       VAR_9);
   if (VAR_10 == 0)
    VAR_9 = VAR_8;
   else
    FUNC_13(VAR_7->device);
  }
  if (VAR_10 != 0)
   VAR_9 = 1;
 } else
  VAR_9 = 1;

 if (VAR_7->type == VAR_2 && VAR_9 < VAR_7->db_vec_count) {
  if (FUNC_2(VAR_7, VAR_1)) {
   FUNC_5(VAR_7->device,
       "Errata workaround does not support MSI or INTX\n");
   return (VAR_0);
  }

  VAR_7->db_vec_count = 1;
  VAR_7->db_vec_shift = VAR_3;
  VAR_10 = FUNC_9(VAR_7);
 } else {
  if (VAR_9 - 1 != VAR_4 &&
      FUNC_2(VAR_7, VAR_1)) {
   FUNC_5(VAR_7->device,
       "Errata workaround expects %d doorbell bits\n",
       VAR_4);
   return (VAR_0);
  }

  FUNC_6(VAR_7, VAR_9);
  VAR_10 = FUNC_10(VAR_7, VAR_9);
 }
 if (VAR_10 != 0) {
  FUNC_5(VAR_7->device,
      "Error allocating interrupts: %d\n", VAR_10);
  FUNC_7(VAR_7);
 }

 return (VAR_10);
}
