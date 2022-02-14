
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct readelf {void* cu_ver; void* cu_osize; void* cu_psize; } ;
typedef void* Dwarf_Half ;



__attribute__((used)) static void
FUNC_0(struct readelf *VAR_0, Dwarf_Half VAR_1, Dwarf_Half VAR_2,
    Dwarf_Half VAR_3)
{

 VAR_0->cu_psize = VAR_1;
 VAR_0->cu_osize = VAR_2;
 VAR_0->cu_ver = VAR_3;
}
