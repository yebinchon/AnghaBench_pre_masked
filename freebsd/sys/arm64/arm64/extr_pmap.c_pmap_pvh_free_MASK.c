
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct md_page {int dummy; } ;
typedef int * pv_entry_t ;
typedef int pmap_t ;


 int FUNC_0 (int ,char*) ;
 int FUNC_1 (int ,int *) ;
 int * FUNC_2 (struct md_page*,int ,int ) ;

__attribute__((used)) static void
FUNC_3(struct md_page *VAR_0, pmap_t VAR_1, vm_offset_t VAR_2)
{
 pv_entry_t VAR_3;

 VAR_3 = FUNC_2(VAR_0, VAR_1, VAR_2);
 FUNC_0(VAR_3 != ((void*)0), ("pmap_pvh_free: pv not found"));
 FUNC_1(VAR_1, VAR_3);
}
