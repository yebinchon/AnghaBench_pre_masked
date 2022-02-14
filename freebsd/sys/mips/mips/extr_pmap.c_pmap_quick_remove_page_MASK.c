
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__* vm_offset_t ;
typedef scalar_t__ pt_entry_t ;


 int FUNC_0 (int,char*) ;
 scalar_t__* VAR_0 ;
 scalar_t__* VAR_1 ;
 int VAR_2 ;
 scalar_t__* FUNC_1 (int ) ;
 scalar_t__ VAR_3 ;
 int FUNC_2 () ;
 int VAR_4 ;
 int FUNC_3 (scalar_t__*,int ) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_4 (int ,scalar_t__*) ;

void
FUNC_5(vm_offset_t VAR_7)
{
 FUNC_3(VAR_7, VAR_2);


 pt_entry_t *VAR_8;

 if (VAR_7 >= VAR_1 && VAR_7 < VAR_0)
  return;

 VAR_8 = FUNC_1(VAR_6);

 FUNC_0(*VAR_8 != VAR_3,
     ("pmap_quick_remove_page: PTE not in use"));
 FUNC_0(FUNC_1(VAR_5) == VAR_7,
     ("pmap_quick_remove_page: invalid address"));

 *VAR_8 = VAR_3;
 FUNC_4(VAR_4, VAR_7);
 FUNC_2();

}
