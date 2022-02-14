
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct aac_softc {unsigned long DebugOffset; int DebugFlags; scalar_t__ FwDebugFlags; scalar_t__ FwDebugBufferSize; scalar_t__ DebugHeaderSize; int aac_regs_res1; } ;


 scalar_t__ FUNC_0 (struct aac_softc*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct aac_softc*,int ,int ,int ,int ,int ,int *,int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

int FUNC_4(struct aac_softc *VAR_2)
{
 u_int32_t VAR_3 = 0;
 u_int32_t VAR_4 = 0;
 u_int32_t VAR_5 = 0;
 u_int32_t VAR_6 = 0;





 if (!FUNC_1(VAR_2, VAR_0, 0, 0, 0, 0, ((void*)0), ((void*)0))) {
  VAR_3 = FUNC_0(VAR_2, 1);
  VAR_4 = FUNC_0(VAR_2, 2);
  VAR_5 = FUNC_0(VAR_2, 3);
  VAR_6 = FUNC_0(VAR_2, 4);
  if (VAR_5) {
   unsigned long VAR_7 = VAR_3
    - FUNC_3(VAR_2->aac_regs_res1);





   if ((VAR_4 == 0) &&
    (VAR_7 + VAR_5 <
    FUNC_2(VAR_2->aac_regs_res1))) {
    VAR_2->DebugOffset = VAR_7;
    VAR_2->DebugHeaderSize = VAR_6;
    VAR_2->FwDebugBufferSize = VAR_5;
    VAR_2->FwDebugFlags = 0;
    VAR_2->DebugFlags = VAR_1;
    return 1;
   }
  }
 }




 return 0;
}
