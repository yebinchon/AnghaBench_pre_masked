
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct HBB_MessageUnit {int* done_qbuffer; int postq_index; int doneq_index; int * post_qbuffer; int iop2drv_doorbell; } ;
struct AdapterControlBlock {int adapter_type; int outbound_int_enable; scalar_t__ pmu; } ;







 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (int ,int ,int) ;
 int FUNC_1 (int ,int ,int,int) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (struct AdapterControlBlock*,int,int ) ;
 int FUNC_4 (struct AdapterControlBlock*) ;
 int FUNC_5 (struct AdapterControlBlock*) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;

__attribute__((used)) static void FUNC_6(struct AdapterControlBlock *VAR_13)
{
 int VAR_14=0;
 u_int32_t VAR_15;
 u_int16_t VAR_16;

 switch (VAR_13->adapter_type) {
 case 132: {
   u_int32_t VAR_17;


   VAR_17 = FUNC_0(VAR_7, 0, VAR_17) & VAR_13->outbound_int_enable;
   FUNC_1(VAR_7, 0, VAR_17, VAR_17);
   while(((VAR_15=FUNC_0(VAR_7, 0, VAR_11)) != 0xFFFFFFFF) && (VAR_14++ < VAR_3)) {
    VAR_16 = (VAR_15 & VAR_4)?VAR_9:VAR_6;
    FUNC_3(VAR_13, VAR_15, VAR_16);
   }
  }
  break;
 case 131: {
   struct HBB_MessageUnit *VAR_18=(struct HBB_MessageUnit *)VAR_13->pmu;


   FUNC_2(0, VAR_18->iop2drv_doorbell, VAR_0);
   for(VAR_14=0; VAR_14 < VAR_2; VAR_14++) {
    if((VAR_15 = VAR_18->done_qbuffer[VAR_14]) != 0) {
     VAR_18->done_qbuffer[VAR_14] = 0;
     VAR_16 = (VAR_15 & VAR_4)?VAR_9:VAR_6;
     FUNC_3(VAR_13, VAR_15, VAR_16);
    }
    VAR_18->post_qbuffer[VAR_14] = 0;
   }
   VAR_18->doneq_index = 0;
   VAR_18->postq_index = 0;
  }
  break;
 case 130: {

   while((FUNC_0(VAR_8, 0, VAR_10) & VAR_1) && (VAR_14++ < VAR_3)) {
    VAR_15 = FUNC_0(VAR_8, 0, VAR_12);
    VAR_16 = (VAR_15 & VAR_5) ? VAR_9 : VAR_6;
    FUNC_3(VAR_13, VAR_15, VAR_16);
   }
  }
  break;
 case 129: {
   FUNC_4(VAR_13);
  }
  break;
 case 128: {
   FUNC_5(VAR_13);
  }
  break;
 }
}
