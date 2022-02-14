
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct aac_softc {int flags; int aac_buffer_dmat; } ;
struct aac_sg_tableraw {int SgCount; TYPE_1__* SgEntryRaw; } ;
struct aac_sg_table64 {int SgCount; TYPE_3__* SgEntry64; } ;
struct aac_sg_table {int SgCount; TYPE_2__* SgEntry; } ;
struct aac_sg_entryraw {int dummy; } ;
struct aac_sg_entry64 {int dummy; } ;
struct aac_sg_entry {int dummy; } ;
struct TYPE_10__ {scalar_t__ Command; int Size; int SenderFibAddress; int SenderData; scalar_t__ ReceiverFibAddress; } ;
struct aac_fib {TYPE_4__ Header; } ;
struct aac_command {int cm_index; int cm_flags; int cm_queue; int cm_datamap; struct aac_fib* cm_fib; scalar_t__ cm_fibphys; struct aac_sg_table* cm_sgtable; struct aac_softc* cm_sc; } ;
struct TYPE_11__ {int ds_len; int ds_addr; } ;
typedef TYPE_5__ bus_dma_segment_t ;
struct TYPE_9__ {int SgByteCount; int SgAddress; } ;
struct TYPE_8__ {int SgByteCount; int SgAddress; } ;
struct TYPE_7__ {scalar_t__ Flags; scalar_t__ Prev; scalar_t__ Next; int SgByteCount; int SgAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_0 (struct aac_softc*,struct aac_command*) ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_1 (int) ;
 scalar_t__ VAR_8 ;
 char* VAR_9 ;
 scalar_t__ VAR_10 ;
 scalar_t__ FUNC_2 (struct aac_softc*,int ,struct aac_command*) ;
 int FUNC_3 (struct aac_command*) ;
 int FUNC_4 (struct aac_command*) ;
 int FUNC_5 (int ,int ,int ) ;
 int FUNC_6 (struct aac_softc*,char*,char*) ;

__attribute__((used)) static void
FUNC_7(void *VAR_11, bus_dma_segment_t *VAR_12, int VAR_13, int VAR_14)
{
 struct aac_softc *VAR_15;
 struct aac_command *VAR_16;
 struct aac_fib *VAR_17;
 int VAR_18;

 VAR_16 = (struct aac_command *)VAR_11;
 VAR_15 = VAR_16->cm_sc;
 VAR_17 = VAR_16->cm_fib;
 FUNC_6(VAR_15, VAR_9, "");


 if (VAR_16->cm_sgtable != ((void*)0)) {
  if (VAR_17->Header.Command == VAR_10) {
   struct aac_sg_tableraw *VAR_19;
   VAR_19 = (struct aac_sg_tableraw *)VAR_16->cm_sgtable;
   VAR_19->SgCount = VAR_13;
   for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
    VAR_19->SgEntryRaw[VAR_18].SgAddress = VAR_12[VAR_18].ds_addr;
    VAR_19->SgEntryRaw[VAR_18].SgByteCount = VAR_12[VAR_18].ds_len;
    VAR_19->SgEntryRaw[VAR_18].Next = 0;
    VAR_19->SgEntryRaw[VAR_18].Prev = 0;
    VAR_19->SgEntryRaw[VAR_18].Flags = 0;
   }

   VAR_17->Header.Size += VAR_13*sizeof(struct aac_sg_entryraw);
  } else if ((VAR_16->cm_sc->flags & VAR_4) == 0) {
   struct aac_sg_table *VAR_20;
   VAR_20 = VAR_16->cm_sgtable;
   VAR_20->SgCount = VAR_13;
   for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
    VAR_20->SgEntry[VAR_18].SgAddress = VAR_12[VAR_18].ds_addr;
    VAR_20->SgEntry[VAR_18].SgByteCount = VAR_12[VAR_18].ds_len;
   }

   VAR_17->Header.Size += VAR_13*sizeof(struct aac_sg_entry);
  } else {
   struct aac_sg_table64 *VAR_21;
   VAR_21 = (struct aac_sg_table64 *)VAR_16->cm_sgtable;
   VAR_21->SgCount = VAR_13;
   for (VAR_18 = 0; VAR_18 < VAR_13; VAR_18++) {
    VAR_21->SgEntry64[VAR_18].SgAddress = VAR_12[VAR_18].ds_addr;
    VAR_21->SgEntry64[VAR_18].SgByteCount = VAR_12[VAR_18].ds_len;
   }

   VAR_17->Header.Size += VAR_13*sizeof(struct aac_sg_entry64);
  }
 }






 VAR_16->cm_fib->Header.SenderFibAddress = (VAR_16->cm_index << 2);
 VAR_16->cm_fib->Header.ReceiverFibAddress = (u_int32_t)VAR_16->cm_fibphys;


 VAR_16->cm_fib->Header.SenderData = VAR_16->cm_index;

 if (VAR_16->cm_flags & VAR_0)
  FUNC_5(VAR_15->aac_buffer_dmat, VAR_16->cm_datamap,
    VAR_6);
 if (VAR_16->cm_flags & VAR_1)
  FUNC_5(VAR_15->aac_buffer_dmat, VAR_16->cm_datamap,
    VAR_7);
 VAR_16->cm_flags |= VAR_2;

 if (VAR_15->flags & VAR_3) {
  int VAR_22 = 10000000L;
  while (FUNC_0(VAR_15, VAR_16) != 0) {
   if (--VAR_22 == 0) {
    FUNC_4(VAR_16);
    VAR_15->flags |= VAR_5;
    FUNC_3(VAR_16);
   }
   FUNC_1(5);
  }
 } else {

  if (FUNC_2(VAR_15, VAR_16->cm_queue, VAR_16) == VAR_8) {
   FUNC_4(VAR_16);
   VAR_15->flags |= VAR_5;
   FUNC_3(VAR_16);
  }
 }
}
