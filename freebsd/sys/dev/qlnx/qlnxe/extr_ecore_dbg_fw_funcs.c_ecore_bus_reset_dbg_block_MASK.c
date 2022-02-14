
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u32 ;
struct ecore_ptt {int dummy; } ;
struct ecore_hwfn {int dummy; } ;
struct block_defs {size_t reset_reg; int reset_bit_offset; } ;
struct TYPE_2__ {int addr; } ;


 size_t VAR_0 ;
 int FUNC_0 (struct ecore_hwfn*,struct ecore_ptt*,int) ;
 int FUNC_1 (struct ecore_hwfn*,struct ecore_ptt*,int,int) ;
 struct block_defs** VAR_1 ;
 TYPE_1__* VAR_2 ;

__attribute__((used)) static void FUNC_2(struct ecore_hwfn *VAR_3,
           struct ecore_ptt *VAR_4)
{
 u32 VAR_5, VAR_6, VAR_7;
 struct block_defs *VAR_8 = VAR_1[VAR_0];

 VAR_5 = VAR_2[VAR_8->reset_reg].addr;
 VAR_6 = FUNC_0(VAR_3, VAR_4, VAR_5);
 VAR_7 = VAR_6 & ~(1 << VAR_8->reset_bit_offset);

 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_7);
 FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6);
}
