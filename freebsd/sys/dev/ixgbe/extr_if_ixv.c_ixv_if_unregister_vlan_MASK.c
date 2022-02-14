
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u16 ;
struct adapter {int num_vlans; } ;
typedef int if_ctx_t ;


 struct adapter* FUNC_0 (int ) ;
 int* VAR_0 ;

__attribute__((used)) static void
FUNC_1(if_ctx_t VAR_1, u16 VAR_2)
{
 struct adapter *VAR_3 = FUNC_0(VAR_1);
 u16 VAR_4, VAR_5;

 VAR_4 = (VAR_2 >> 5) & 0x7F;
 VAR_5 = VAR_2 & 0x1F;
 VAR_0[VAR_4] &= ~(1 << VAR_5);
 --VAR_3->num_vlans;
}
