
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
struct TYPE_3__ {int l_uf; int l_ui; } ;
typedef TYPE_1__ l_fp ;


 int FUNC_0 (int) ;

l_fp
FUNC_1(uint32_t VAR_0)
{
 l_fp VAR_1;

 VAR_0 = FUNC_0(VAR_0);



 VAR_1.l_uf = (VAR_0 << 10);

 VAR_1.l_ui = (VAR_0 >> 22) & 0x3;
 VAR_1.l_ui |= ~(VAR_1.l_ui & 2) + 1;

 return VAR_1;
}
