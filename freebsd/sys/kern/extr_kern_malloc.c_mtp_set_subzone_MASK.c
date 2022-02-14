
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct malloc_type_internal {scalar_t__ mti_zone; } ;
struct malloc_type {struct malloc_type_internal* ks_handle; } ;



__attribute__((used)) static void
FUNC_0(struct malloc_type *VAR_0)
{
 struct malloc_type_internal *VAR_1;

 VAR_1 = VAR_0->ks_handle;
 VAR_1->mti_zone = 0;
}
