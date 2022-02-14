
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct TYPE_2__ {int * hw_mac_addr; } ;
struct ecore_hwfn {TYPE_1__ hw_info; } ;


 int VAR_0 ;
 int FUNC_0 (int*,int *,int ) ;

__attribute__((used)) static void FUNC_1(struct ecore_hwfn *VAR_1, u8 *VAR_2)
{
 u8 VAR_3[6];

 FUNC_0(&VAR_3[0], &VAR_1->hw_info.hw_mac_addr[0], VAR_0);
 VAR_2[0] = VAR_3[0] ^ 2;
 VAR_2[1] = VAR_3[1];
 VAR_2[2] = VAR_3[2];
 VAR_2[3] = 0xff;
 VAR_2[4] = 0xfe;
 VAR_2[5] = VAR_3[3];
 VAR_2[6] = VAR_3[4];
 VAR_2[7] = VAR_3[5];
}
