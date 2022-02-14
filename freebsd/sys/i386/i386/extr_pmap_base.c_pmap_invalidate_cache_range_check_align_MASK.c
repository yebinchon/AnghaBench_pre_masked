
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;


 int FUNC_0 (int,char*) ;
 int VAR_0 ;

__attribute__((used)) static void
FUNC_1(vm_offset_t VAR_1, vm_offset_t VAR_2)
{

 FUNC_0((VAR_1 & VAR_0) == 0,
     ("pmap_invalidate_cache_range: sva not page-aligned"));
 FUNC_0((VAR_2 & VAR_0) == 0,
     ("pmap_invalidate_cache_range: eva not page-aligned"));
}
