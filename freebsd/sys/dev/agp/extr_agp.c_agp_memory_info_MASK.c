
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct agp_memory_info {int ami_is_bound; int ami_offset; int ami_physical; int ami_size; } ;
struct agp_memory {int am_is_bound; int am_offset; int am_physical; int am_size; } ;
typedef int device_t ;



void FUNC_0(device_t VAR_0, void *VAR_1, struct
       agp_memory_info *VAR_2)
{
 struct agp_memory *VAR_3 = (struct agp_memory *) VAR_1;

 VAR_2->ami_size = VAR_3->am_size;
 VAR_2->ami_physical = VAR_3->am_physical;
 VAR_2->ami_offset = VAR_3->am_offset;
 VAR_2->ami_is_bound = VAR_3->am_is_bound;
}
