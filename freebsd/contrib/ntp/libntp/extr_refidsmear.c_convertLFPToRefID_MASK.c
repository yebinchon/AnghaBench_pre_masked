
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_4__ {int l_ui; int l_uf; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;

uint32_t
FUNC_3(l_fp VAR_0)
{
 uint32_t VAR_1;







 FUNC_0(&VAR_0, 0x200);
 VAR_0.l_ui &= 3;


 VAR_1 = (VAR_0.l_ui << 22) | (VAR_0.l_uf >> 10);


 VAR_1 |= FUNC_1(0xFE000000);



 return FUNC_2(VAR_1);
}
