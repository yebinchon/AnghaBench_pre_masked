
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int* u; } ;
typedef TYPE_1__ warc_uuid_t ;


 int FUNC_0 (int*,int) ;

__attribute__((used)) static int
FUNC_1(warc_uuid_t *VAR_0)
{
 FUNC_0(VAR_0->u, sizeof(VAR_0->u));

 VAR_0->u[1U] &= 0xffff0fffU;
 VAR_0->u[1U] |= 0x4000U;
 VAR_0->u[2U] &= 0x3fffffffU;
 VAR_0->u[2U] |= 0x80000000U;
 return 0;
}
