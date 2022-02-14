
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _citrus_region {size_t r_size; void* r_head; } ;



__attribute__((used)) static __inline void
FUNC_0(struct _citrus_region *VAR_0, void *VAR_1, size_t VAR_2)
{

 VAR_0->r_head = VAR_1;
 VAR_0->r_size = VAR_2;
}
