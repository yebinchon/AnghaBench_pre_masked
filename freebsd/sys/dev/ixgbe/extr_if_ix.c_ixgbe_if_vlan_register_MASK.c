
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adapter {int* shadow_vfta; int num_vlans; } ;
typedef int if_ctx_t ;


 struct adapter* FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(if_ctx_t VAR_0, u16 VAR_1)
{
 struct adapter *VAR_2 = FUNC_0(VAR_0);
 u16 VAR_3, VAR_4;

 VAR_3 = (VAR_1 >> 5) & 0x7F;
 VAR_4 = VAR_1 & 0x1F;
 VAR_2->shadow_vfta[VAR_3] |= (1 << VAR_4);
 ++VAR_2->num_vlans;
 FUNC_1(VAR_0);
}
