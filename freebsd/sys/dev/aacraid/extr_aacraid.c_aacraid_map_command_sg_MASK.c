
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef scalar_t__ u_int32_t ;
struct aac_softc {int flags; int aac_sg_tablesize; int hint_flags; struct aac_command* aac_sync_cm; int aac_buffer_dmat; int aac_io_lock; } ;
struct aac_sge_ieee1212 {int length; scalar_t__ flags; int addrLow; scalar_t__ addrHigh; } ;
struct aac_sg_tableraw {int SgCount; TYPE_1__* SgEntryRaw; } ;
struct aac_sg_table64 {int SgCount; TYPE_3__* SgEntry64; } ;
struct aac_sg_table {int SgCount; TYPE_2__* SgEntry; } ;
struct aac_sg_entryraw {int dummy; } ;
struct aac_sg_entry64 {int dummy; } ;
struct aac_sg_entry {int dummy; } ;
struct aac_raw_io2 {int sgeCnt; scalar_t__ sgeNominalSize; int flags; scalar_t__ sgeFirstSize; } ;
struct TYPE_11__ {scalar_t__ ReceiverFibAddress; } ;
struct TYPE_12__ {scalar_t__ Command; int Size; int SenderFibAddress; int Handle; TYPE_4__ u; } ;
struct aac_fib {TYPE_5__ Header; int * data; } ;
struct aac_command {int cm_index; scalar_t__ cm_passthr_dmat; int cm_flags; scalar_t__ cm_fibphys; int cm_datamap; struct aac_fib* cm_fib; struct aac_sg_table* cm_sgtable; struct aac_softc* cm_sc; } ;
struct TYPE_13__ {scalar_t__ ds_len; int ds_addr; } ;
typedef TYPE_6__ bus_dma_segment_t ;
typedef int bus_addr_t ;
struct TYPE_10__ {scalar_t__ SgByteCount; int SgAddress; } ;
struct TYPE_9__ {scalar_t__ SgByteCount; int SgAddress; } ;
struct TYPE_8__ {scalar_t__ SgByteCount; scalar_t__ Flags; scalar_t__ Prev; scalar_t__ Next; int SgAddress; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 scalar_t__ FUNC_0 (struct aac_softc*,struct aac_command*) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 char* VAR_11 ;
 int VAR_12 ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 scalar_t__ VAR_15 ;
 scalar_t__ VAR_16 ;
 int VAR_17 ;
 int FUNC_2 (struct aac_softc*,struct aac_raw_io2*,int,int,int) ;
 int FUNC_3 (struct aac_command*) ;
 int FUNC_4 (struct aac_command*) ;
 int FUNC_5 (struct aac_softc*,int ,scalar_t__,int ,int ,int ,scalar_t__*,int *) ;
 int FUNC_6 (int ,int ,int ) ;
 int FUNC_7 (struct aac_softc*,char*,char*,int) ;
 int FUNC_8 (int *,int ) ;

void
FUNC_9(void *VAR_18, bus_dma_segment_t *VAR_19, int VAR_20, int VAR_21)
{
 struct aac_softc *VAR_22;
 struct aac_command *VAR_23;
 struct aac_fib *VAR_24;
 int VAR_25;

 VAR_23 = (struct aac_command *)VAR_18;
 VAR_22 = VAR_23->cm_sc;
 VAR_24 = VAR_23->cm_fib;
 FUNC_7(VAR_22, VAR_11, "nseg %d", VAR_20);
 FUNC_8(&VAR_22->aac_io_lock, VAR_12);

 if ((VAR_22->flags & VAR_5) && VAR_22->aac_sync_cm)
  return;


 if (VAR_23->cm_sgtable != ((void*)0)) {
  if (VAR_24->Header.Command == VAR_16) {
   struct aac_raw_io2 *VAR_26;
   struct aac_sge_ieee1212 *VAR_27;
   u_int32_t VAR_28 = VAR_13, VAR_29;
   int VAR_30 = VAR_17;

   VAR_26 = (struct aac_raw_io2 *)&VAR_24->data[0];
   VAR_27 = (struct aac_sge_ieee1212 *)VAR_23->cm_sgtable;
   VAR_26->sgeCnt = VAR_20;

   for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++) {
    VAR_29 = VAR_19[VAR_25].ds_len;
    VAR_27[VAR_25].addrHigh = 0;
    *(bus_addr_t *)&VAR_27[VAR_25].addrLow = VAR_19[VAR_25].ds_addr;
    VAR_27[VAR_25].length = VAR_29;
    VAR_27[VAR_25].flags = 0;
    if (VAR_25 == 0) {
     VAR_26->sgeFirstSize = VAR_29;
    } else if (VAR_25 == 1) {
     VAR_26->sgeNominalSize = VAR_29;
     VAR_28 = VAR_29;
    } else if ((VAR_25+1) < VAR_20 &&
     VAR_29 != VAR_26->sgeNominalSize) {
     VAR_30 = VAR_10;
     if (VAR_29 < VAR_28)
      VAR_28 = VAR_29;
    }
   }


   if (!VAR_30) {
    int VAR_31, VAR_32, VAR_33 = VAR_20;
    for (VAR_25 = VAR_28 / VAR_13; VAR_25 >= 1; --VAR_25) {
     VAR_32 = VAR_10;
     VAR_33 = 2;
     for (VAR_31 = 1; VAR_31 < VAR_20 - 1; ++VAR_31) {
      if (VAR_27[VAR_31].length % (VAR_25*VAR_13)) {
       VAR_32 = VAR_17;
       break;
      }
      VAR_33 += (VAR_27[VAR_31].length / (VAR_25*VAR_13));
     }
     if (!VAR_32)
      break;
    }
    if (VAR_25>0 && VAR_33<=VAR_22->aac_sg_tablesize &&
     !(VAR_22->hint_flags & 4))
     VAR_20 = FUNC_2(VAR_22,
      VAR_26, VAR_25, VAR_20, VAR_33);
   } else {
    VAR_26->flags |= VAR_14;
   }


   VAR_24->Header.Size += VAR_20 *
    sizeof(struct aac_sge_ieee1212);

  } else if (VAR_24->Header.Command == VAR_15) {
   struct aac_sg_tableraw *VAR_34;
   VAR_34 = (struct aac_sg_tableraw *)VAR_23->cm_sgtable;
   VAR_34->SgCount = VAR_20;
   for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++) {
    VAR_34->SgEntryRaw[VAR_25].SgAddress = VAR_19[VAR_25].ds_addr;
    VAR_34->SgEntryRaw[VAR_25].SgByteCount = VAR_19[VAR_25].ds_len;
    VAR_34->SgEntryRaw[VAR_25].Next = 0;
    VAR_34->SgEntryRaw[VAR_25].Prev = 0;
    VAR_34->SgEntryRaw[VAR_25].Flags = 0;
   }

   VAR_24->Header.Size += VAR_20*sizeof(struct aac_sg_entryraw);
  } else if ((VAR_23->cm_sc->flags & VAR_4) == 0) {
   struct aac_sg_table *VAR_35;
   VAR_35 = VAR_23->cm_sgtable;
   VAR_35->SgCount = VAR_20;
   for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++) {
    VAR_35->SgEntry[VAR_25].SgAddress = VAR_19[VAR_25].ds_addr;
    VAR_35->SgEntry[VAR_25].SgByteCount = VAR_19[VAR_25].ds_len;
   }

   VAR_24->Header.Size += VAR_20*sizeof(struct aac_sg_entry);
  } else {
   struct aac_sg_table64 *VAR_36;
   VAR_36 = (struct aac_sg_table64 *)VAR_23->cm_sgtable;
   VAR_36->SgCount = VAR_20;
   for (VAR_25 = 0; VAR_25 < VAR_20; VAR_25++) {
    VAR_36->SgEntry64[VAR_25].SgAddress = VAR_19[VAR_25].ds_addr;
    VAR_36->SgEntry64[VAR_25].SgByteCount = VAR_19[VAR_25].ds_len;
   }

   VAR_24->Header.Size += VAR_20*sizeof(struct aac_sg_entry64);
  }
 }






 VAR_23->cm_fib->Header.SenderFibAddress = (VAR_23->cm_index << 2);
 VAR_23->cm_fib->Header.u.ReceiverFibAddress = (u_int32_t)VAR_23->cm_fibphys;


 VAR_23->cm_fib->Header.Handle += VAR_23->cm_index + 1;

 if (VAR_23->cm_passthr_dmat == 0) {
  if (VAR_23->cm_flags & VAR_0)
   FUNC_6(VAR_22->aac_buffer_dmat, VAR_23->cm_datamap,
       VAR_8);
  if (VAR_23->cm_flags & VAR_1)
   FUNC_6(VAR_22->aac_buffer_dmat, VAR_23->cm_datamap,
       VAR_9);
 }

 VAR_23->cm_flags |= VAR_2;

 if (VAR_23->cm_flags & VAR_3) {
  FUNC_5(VAR_22, VAR_6,
   VAR_23->cm_fibphys, 0, 0, 0, ((void*)0), ((void*)0));
 } else if (VAR_22->flags & VAR_5) {
  u_int32_t VAR_37 = 0;
  VAR_22->aac_sync_cm = VAR_23;
  FUNC_5(VAR_22, VAR_6,
   VAR_23->cm_fibphys, 0, 0, 0, &VAR_37, ((void*)0));
 } else {
  int VAR_38 = 10000000L;
  while (FUNC_0(VAR_22, VAR_23) != 0) {
   if (--VAR_38 == 0) {
    FUNC_4(VAR_23);
    VAR_22->flags |= VAR_7;
    FUNC_3(VAR_23);
   }
   FUNC_1(5);
  }
 }
}
