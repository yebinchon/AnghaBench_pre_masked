
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef size_t u8 ;
typedef scalar_t__ u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
typedef enum dbg_storms { ____Placeholder_dbg_storms } dbg_storms ;
struct TYPE_2__ {scalar_t__ sem_fast_mem_addr; } ;


 size_t VAR_0 ;
 int FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (struct ecore_hwfn*,int) ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,scalar_t__,int) ;
 TYPE_1__* VAR_3 ;

__attribute__((used)) static void FUNC_3(struct ecore_hwfn *VAR_4,
           struct ecore_ptt *VAR_5,
           bool VAR_6)
{
 u32 VAR_7;
 u8 VAR_8;

 for (VAR_8 = 0; VAR_8 < VAR_0; VAR_8++) {
  if (!FUNC_1(VAR_4, (enum dbg_storms)VAR_8))
   continue;

  VAR_7 = VAR_3[VAR_8].sem_fast_mem_addr + VAR_1;
  FUNC_2(VAR_4, VAR_5, VAR_7, VAR_6 ? 1 : 0);
 }

 FUNC_0(VAR_2);
}
