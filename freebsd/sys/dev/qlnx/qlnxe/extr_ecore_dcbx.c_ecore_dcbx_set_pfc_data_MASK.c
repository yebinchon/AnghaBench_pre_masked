
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u32 ;
struct ecore_hwfn {int dummy; } ;
struct TYPE_2__ {scalar_t__* prio; scalar_t__ max_tc; scalar_t__ enabled; scalar_t__ willing; } ;
struct ecore_dcbx_params {TYPE_1__ pfc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (struct ecore_hwfn*,int ,char*,int) ;
 int VAR_7 ;
 int VAR_8 ;

__attribute__((used)) static void
FUNC_1(struct ecore_hwfn *VAR_9,
   u32 *VAR_10, struct ecore_dcbx_params *VAR_11)
{
 u8 VAR_12 = 0;
 int VAR_13;

 *VAR_10 &= ~VAR_3;

 if (VAR_11->pfc.willing)
  *VAR_10 |= VAR_6;
 else
  *VAR_10 &= ~VAR_6;

 if (VAR_11->pfc.enabled)
  *VAR_10 |= VAR_2;
 else
  *VAR_10 &= ~VAR_2;

 *VAR_10 &= ~VAR_0;
 *VAR_10 |= (u32)VAR_11->pfc.max_tc << VAR_1;

 for (VAR_13 = 0; VAR_13 < VAR_7; VAR_13++)
  if (VAR_11->pfc.prio[VAR_13])
   VAR_12 |= (1 << VAR_13);
 *VAR_10 &= ~VAR_4;
 *VAR_10 |= (VAR_12 << VAR_5);

 FUNC_0(VAR_9, VAR_8, "pfc = 0x%x\n", *VAR_10);
}
