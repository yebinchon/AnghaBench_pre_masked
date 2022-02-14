
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int uint32_t ;
typedef scalar_t__ uint16_t ;
typedef int u_int32_t ;
typedef int u_int16_t ;
struct AdapterControlBlock {int doneq_index; int completionQ_entry; TYPE_1__* pCompletionQ; int srb_dmamap; int srb_dmat; } ;
struct TYPE_2__ {int cmdFlag; scalar_t__ cmdSMID; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ,int ) ;
 int FUNC_1 (int ,int ,int ,int) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct AdapterControlBlock*,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int VAR_6 ;
 int VAR_7 ;

__attribute__((used)) static void FUNC_4(struct AdapterControlBlock *VAR_8)
{
 u_int16_t VAR_9;
 uint32_t VAR_10;
 uint16_t VAR_11;






 FUNC_3(VAR_8->srb_dmat, VAR_8->srb_dmamap, VAR_1 | VAR_2);
 VAR_10 = VAR_8->doneq_index;
 while ((FUNC_0(VAR_4, 0, VAR_7) & 0xFFFF) != VAR_10) {
  VAR_11 = VAR_8->pCompletionQ[VAR_10].cmdSMID;
  VAR_9 = (VAR_8->pCompletionQ[VAR_10].cmdFlag & VAR_0) ? VAR_5 : VAR_3;
  FUNC_2(VAR_8, (u_int32_t)VAR_11, VAR_9);
  VAR_10++;
  if (VAR_10 >= VAR_8->completionQ_entry)
   VAR_10 = 0;
 }
 VAR_8->doneq_index = VAR_10;
 FUNC_1(VAR_4, 0, VAR_6, VAR_10);
}
