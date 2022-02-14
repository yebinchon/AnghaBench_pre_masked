
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int32_t ;
typedef int u_int16_t ;
struct InBound_SRB {int length; int addressLow; int addressHigh; } ;
struct HBD_MessageUnit0 {int postq_index; int * post_qbuffer; } ;
struct HBB_MessageUnit {int postq_index; int* post_qbuffer; int drv2iop_doorbell; } ;
struct CommandControlBlock {int srb_flags; int arc_cdb_size; int smid; int cdb_phyaddr_low; int cdb_phyaddr_high; int srb_state; int arcmsr_cdb; } ;
struct TYPE_3__ {int phyadd_high; } ;
struct TYPE_4__ {TYPE_1__ B; } ;
struct AdapterControlBlock {int adapter_type; int postDone_lock; scalar_t__ pmu; TYPE_2__ srb_phyaddr; int srboutstandingcount; int srb_dmamap; int srb_dmat; } ;
struct ARCMSR_CDB {int Flags; int Context; } ;







 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (int ,int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int ,int ,int ) ;
 int VAR_13 ;
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;

__attribute__((used)) static void FUNC_6(struct AdapterControlBlock *VAR_17, struct CommandControlBlock *VAR_18)
{
 u_int32_t VAR_19 = (u_int32_t) VAR_18->cdb_phyaddr_low;
 struct ARCMSR_CDB *VAR_20 = (struct ARCMSR_CDB *)&VAR_18->arcmsr_cdb;

 FUNC_5(VAR_17->srb_dmat, VAR_17->srb_dmamap, (VAR_18->srb_flags & VAR_12) ? VAR_7:VAR_6);
 FUNC_4(&VAR_17->srboutstandingcount, 1);
 VAR_18->srb_state = VAR_5;

 switch (VAR_17->adapter_type) {
 case 132: {
   if(VAR_20->Flags & VAR_0) {
    FUNC_2(VAR_8, 0, VAR_13, VAR_19|VAR_4);
   } else {
    FUNC_2(VAR_8, 0, VAR_13, VAR_19);
   }
  }
  break;
 case 131: {
   struct HBB_MessageUnit *VAR_21 = (struct HBB_MessageUnit *)VAR_17->pmu;
   int VAR_22, VAR_23;

   VAR_23 = VAR_21->postq_index;
   VAR_22 = ((VAR_23+1) % VAR_2);
   VAR_21->post_qbuffer[VAR_22] = 0;
   if(VAR_20->Flags & VAR_0) {
    VAR_21->post_qbuffer[VAR_23] = VAR_19 | VAR_4;
   } else {
    VAR_21->post_qbuffer[VAR_23] = VAR_19;
   }
   VAR_23++;
   VAR_23 %= VAR_2;
   VAR_21->postq_index = VAR_23;
   FUNC_3(0, VAR_21->drv2iop_doorbell, VAR_1);
  }
  break;
 case 130: {
   u_int32_t VAR_24, VAR_25, VAR_26;

   VAR_25 = (VAR_18->arc_cdb_size > 0x300) ? 0x300 : VAR_18->arc_cdb_size;
   VAR_24 = (VAR_19 | ((VAR_25-1) >> 6) | 1);
   VAR_26 = VAR_17->srb_phyaddr.B.phyadd_high;
   if(VAR_26)
   {
    FUNC_2(VAR_9,0,VAR_14, VAR_26);
    FUNC_2(VAR_9,0,VAR_15, VAR_24);
   }
   else
   {
    FUNC_2(VAR_9,0,VAR_15, VAR_24);
   }
  }
  break;
 case 129: {
   struct HBD_MessageUnit0 *VAR_27 = (struct HBD_MessageUnit0 *)VAR_17->pmu;
   u_int16_t VAR_28;
   u_int16_t VAR_29;
   struct InBound_SRB *VAR_30;

   FUNC_0(&VAR_17->postDone_lock);
   VAR_29 = VAR_27->postq_index;
   VAR_30 = (struct InBound_SRB *)&VAR_27->post_qbuffer[VAR_29 & 0xFF];
   VAR_30->addressHigh = VAR_18->cdb_phyaddr_high;
   VAR_30->addressLow = VAR_18->cdb_phyaddr_low;
   VAR_30->length = VAR_18->arc_cdb_size >> 2;
   VAR_20->Context = VAR_18->cdb_phyaddr_low;
   if (VAR_29 & 0x4000) {
    VAR_28 = VAR_29 & 0xFF;
    VAR_28 += 1;
    VAR_28 %= VAR_3;
    VAR_27->postq_index = VAR_28 ? (VAR_28 | 0x4000) : VAR_28;
   } else {
    VAR_28 = VAR_29;
    VAR_28 += 1;
    VAR_28 %= VAR_3;
    VAR_27->postq_index = VAR_28 ? VAR_28 : (VAR_28 | 0x4000);
   }
   FUNC_2(VAR_10, 0, VAR_16, VAR_29);
   FUNC_1(&VAR_17->postDone_lock);
  }
  break;
 case 128: {
   u_int32_t VAR_31, VAR_32;

   VAR_32 = (VAR_18->arc_cdb_size > 0x300) ? 0x300 : VAR_18->arc_cdb_size;
   VAR_31 = (VAR_18->smid | ((VAR_32-1) >> 6));
   FUNC_2(VAR_11, 0, VAR_14, 0);
   FUNC_2(VAR_11, 0, VAR_15, VAR_31);
         }
  break;
 }
}
