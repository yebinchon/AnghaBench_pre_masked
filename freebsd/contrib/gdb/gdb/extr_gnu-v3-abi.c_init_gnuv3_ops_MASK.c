
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {char* shortname; char* longname; char* doc; int baseclass_offset; int virtual_fn_field; int rtti_type; int is_operator_name; int is_vtable_name; int is_constructor_name; int is_destructor_name; } ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int FUNC_0 (int ) ;
 int VAR_9 ;

__attribute__((used)) static void
FUNC_1 (void)
{
  VAR_9 = FUNC_0 (VAR_0);

  VAR_1.shortname = "gnu-v3";
  VAR_1.longname = "GNU G++ Version 3 ABI";
  VAR_1.doc = "G++ Version 3 ABI";
  VAR_1.is_destructor_name = VAR_8;
  VAR_1.is_constructor_name = VAR_7;
  VAR_1.is_vtable_name = VAR_4;
  VAR_1.is_operator_name = VAR_3;
  VAR_1.rtti_type = VAR_5;
  VAR_1.virtual_fn_field = VAR_6;
  VAR_1.baseclass_offset = VAR_2;
}
