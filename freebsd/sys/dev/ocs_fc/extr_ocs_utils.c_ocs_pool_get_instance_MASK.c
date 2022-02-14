
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int uint32_t ;
typedef void pool_hdr_t ;
struct TYPE_3__ {int a; } ;
typedef TYPE_1__ ocs_pool_t ;


 void* FUNC_0 (int ,int ) ;

void *
FUNC_1(ocs_pool_t *VAR_0, uint32_t VAR_1)
{
 pool_hdr_t *VAR_2 = FUNC_0(VAR_0->a, VAR_1);

 if (VAR_2 == ((void*)0)) {
  return ((void*)0);
 }
 return &VAR_2[1];
}
