
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int vm_offset_t ;
struct devmap_entry {scalar_t__ pd_size; int pd_pa; int pd_va; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 struct devmap_entry const* VAR_5 ;
 int FUNC_0 (int ,scalar_t__,int ) ;
 int FUNC_1 (int ,int ,int ,scalar_t__,int,int ) ;
 int FUNC_2 (int ,int ,scalar_t__,int,int ) ;

void
FUNC_3(vm_offset_t VAR_6, const struct devmap_entry *VAR_7)
{
 const struct devmap_entry *VAR_8;

 VAR_4 = 1;





 if (VAR_7 != ((void*)0))
  VAR_5 = VAR_7;
 else if (VAR_5 == ((void*)0))
  return;

 for (VAR_8 = VAR_5; VAR_8->pd_size != 0; ++VAR_8) {
 }
}
