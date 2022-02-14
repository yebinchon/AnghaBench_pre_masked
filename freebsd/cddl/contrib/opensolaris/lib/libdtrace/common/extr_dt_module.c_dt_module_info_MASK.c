
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int dto_bss_size; int dto_bss_va; int dto_data_size; int dto_data_va; int dto_text_size; int dto_text_va; int dto_flags; int dto_id; int dto_file; int dto_name; } ;
typedef TYPE_1__ dtrace_objinfo_t ;
struct TYPE_7__ {int dm_flags; int dm_bss_size; int dm_bss_va; int dm_data_size; int dm_data_va; int dm_text_size; int dm_text_va; int dm_modid; int dm_file; int dm_name; } ;
typedef TYPE_2__ dt_module_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static dtrace_objinfo_t *
FUNC_0(const dt_module_t *VAR_4, dtrace_objinfo_t *VAR_5)
{
 VAR_5->dto_name = VAR_4->dm_name;
 VAR_5->dto_file = VAR_4->dm_file;
 VAR_5->dto_id = VAR_4->dm_modid;
 VAR_5->dto_flags = 0;

 if (VAR_4->dm_flags & VAR_2)
  VAR_5->dto_flags |= VAR_0;
 if (VAR_4->dm_flags & VAR_3)
  VAR_5->dto_flags |= VAR_1;

 VAR_5->dto_text_va = VAR_4->dm_text_va;
 VAR_5->dto_text_size = VAR_4->dm_text_size;
 VAR_5->dto_data_va = VAR_4->dm_data_va;
 VAR_5->dto_data_size = VAR_4->dm_data_size;
 VAR_5->dto_bss_va = VAR_4->dm_bss_va;
 VAR_5->dto_bss_size = VAR_4->dm_bss_size;

 return (VAR_5);
}
