
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
typedef int u_int16_t ;
struct HBB_MessageUnit {int doneq_index; int* done_qbuffer; } ;
struct AdapterControlBlock {int srb_dmamap; int srb_dmat; scalar_t__ pmu; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (struct AdapterControlBlock*,int,int ) ;
 int FUNC_1 (int ,int ,int) ;

__attribute__((used)) static void FUNC_2(struct AdapterControlBlock *VAR_6)
{
 struct HBB_MessageUnit *VAR_7 = (struct HBB_MessageUnit *)VAR_6->pmu;
 u_int32_t VAR_8;
 int VAR_9;
 u_int16_t VAR_10;






 FUNC_1(VAR_6->srb_dmat, VAR_6->srb_dmamap,
  VAR_2|VAR_3);
 VAR_9 = VAR_7->doneq_index;
 while((VAR_8 = VAR_7->done_qbuffer[VAR_9]) != 0) {
  VAR_7->done_qbuffer[VAR_9] = 0;
  VAR_9++;
  VAR_9 %= VAR_0;
  VAR_7->doneq_index = VAR_9;

 VAR_10 = (VAR_8 & VAR_1)?VAR_5:VAR_4;
  FUNC_0(VAR_6, VAR_8, VAR_10);
 }
}
