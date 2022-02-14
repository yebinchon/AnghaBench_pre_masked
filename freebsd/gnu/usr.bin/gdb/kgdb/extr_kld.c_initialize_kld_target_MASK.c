
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct cmd_list_element {int dummy; } ;
struct TYPE_3__ {int find_and_open_solib; int in_dynsym_resolve_code; int open_symbol_file_object; int current_sos; int special_symbol_handling; int solib_create_inferior_hook; int clear_solib; int free_so; int relocate_section_addresses; } ;


 struct cmd_list_element* FUNC_0 (char*,int ,int ,char*) ;
 int VAR_0 ;
 TYPE_1__* VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 TYPE_1__ VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 int FUNC_1 (struct cmd_list_element*,int ) ;

void
FUNC_2(void)
{
 struct cmd_list_element *VAR_14;

 VAR_11.relocate_section_addresses = VAR_10;
 VAR_11.free_so = VAR_7;
 VAR_11.clear_solib = VAR_4;
 VAR_11.solib_create_inferior_hook = VAR_12;
 VAR_11.special_symbol_handling = VAR_13;
 VAR_11.current_sos = VAR_5;
 VAR_11.open_symbol_file_object = VAR_9;
 VAR_11.in_dynsym_resolve_code = VAR_8;
 VAR_11.find_and_open_solib = VAR_6;

 VAR_1 = &VAR_11;

 VAR_14 = FUNC_0("add-kld", VAR_0, VAR_3,
    "Usage: add-kld FILE\nLoad the symbols from the kernel loadable module FILE.");

 FUNC_1(VAR_14, VAR_2);
}
