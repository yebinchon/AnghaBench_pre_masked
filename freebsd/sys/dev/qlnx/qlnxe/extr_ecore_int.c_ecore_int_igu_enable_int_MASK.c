
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {TYPE_1__* p_dev; } ;
typedef enum ecore_int_mode { ____Placeholder_ecore_int_mode } ecore_int_mode ;
struct TYPE_2__ {int int_mode; } ;


 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct ecore_hwfn*,char*) ;




 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (struct ecore_hwfn*,struct ecore_ptt*,int ,int) ;

void FUNC_3(struct ecore_hwfn *VAR_6,
         struct ecore_ptt *VAR_7,
         enum ecore_int_mode VAR_8)
{
 u32 VAR_9 = VAR_1 | VAR_0;


 if (FUNC_0(VAR_6->p_dev)) {
  FUNC_1(VAR_6, "FPGA - don't enable ATTN generation in IGU\n");
  VAR_9 &= ~VAR_0;
 }


 VAR_6->p_dev->int_mode = VAR_8;
 switch (VAR_6->p_dev->int_mode) {
 case 131:
  VAR_9 |= VAR_2;
  VAR_9 |= VAR_4;
  break;

 case 130:
  VAR_9 |= VAR_3;
  VAR_9 |= VAR_4;
  break;

 case 129:
  VAR_9 |= VAR_3;
  break;
 case 128:
  break;
 }

 FUNC_2(VAR_6, VAR_7, VAR_5, VAR_9);
}
