
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint16_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct HBD_MessageUnit0 {int doneq_index; TYPE_1__* done_qbuffer; } ;
struct AdapterControlBlock {int srb_dmamap; int srb_dmat; scalar_t__ pmu; } ;
struct TYPE_2__ {int addressLow; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int FUNC_2 (struct AdapterControlBlock*,int,int ) ;
 int FUNC_3 (struct HBD_MessageUnit0*) ;
 int FUNC_4 (int ,int ,int) ;
 int VAR_8 ;
 int VAR_9 ;

__attribute__((used)) static void FUNC_5(struct AdapterControlBlock *VAR_10)
{
 struct HBD_MessageUnit0 *VAR_11 = (struct HBD_MessageUnit0 *)VAR_10->pmu;
 u_int32_t VAR_12;
 u_int32_t VAR_13;
 uint16_t VAR_14;
 u_int16_t VAR_15;





 if((FUNC_0(VAR_6, 0, VAR_8) &
  VAR_0) == 0)
  return;
 FUNC_4(VAR_10->srb_dmat, VAR_10->srb_dmamap,
  VAR_3 | VAR_4);
 VAR_12 = VAR_11->done_qbuffer[0].addressLow;
 VAR_14 = VAR_11->doneq_index;
 while ((VAR_14 & 0xFF) != (VAR_12 & 0xFF)) {
  VAR_14 = FUNC_3(VAR_11);
  VAR_13 = VAR_11->done_qbuffer[(VAR_14 & 0xFF)+1].addressLow;
  VAR_15 = (VAR_13 & VAR_2) ? VAR_7 : VAR_5;
  FUNC_2(VAR_10, VAR_13, VAR_15);
  FUNC_1(VAR_6, 0, VAR_9, VAR_14);
  VAR_12 = VAR_11->done_qbuffer[0].addressLow;
 }
 FUNC_1(VAR_6, 0, VAR_8, VAR_1);
 FUNC_0(VAR_6, 0, VAR_8);
}
