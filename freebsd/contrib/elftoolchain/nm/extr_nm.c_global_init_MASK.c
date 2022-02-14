
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_4__ {char* def_filename; int name; } ;
struct TYPE_3__ {int demangle_type; int print_debug; int print_armap; int debug_line; int undef_only; int sort_reverse; int * fileargs; int * size_print_fn; int * value_print_fn; int * elem_print_fn; int * sort_fn; scalar_t__ no_demangle; scalar_t__ sort_size; scalar_t__ def_only; scalar_t__ print_size; int print_name; int print_symbol; } ;


 int FUNC_0 () ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int *) ;
 int VAR_5 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (int ,char*) ;
 TYPE_2__ VAR_6 ;
 TYPE_1__ VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;

__attribute__((used)) static void
FUNC_4(void)
{

 if (FUNC_2(VAR_0) == VAR_1)
  FUNC_3(VAR_2, "elf_version error");

 VAR_6.name = FUNC_0();
 VAR_6.def_filename = "a.out";
 VAR_7.print_symbol = VAR_4;
 VAR_7.print_name = VAR_3;
 VAR_7.demangle_type = -1;
 VAR_7.print_debug = 0;
 VAR_7.print_armap = 0;
 VAR_7.print_size = 0;
 VAR_7.debug_line = 0;
 VAR_7.def_only = 0;
 VAR_7.undef_only = 0;
 VAR_7.sort_size = 0;
 VAR_7.sort_reverse = 0;
 VAR_7.no_demangle = 0;
 VAR_7.sort_fn = &VAR_5;
 VAR_7.elem_print_fn = &VAR_9;
 VAR_7.value_print_fn = &VAR_11;
 VAR_7.size_print_fn = &VAR_10;
 VAR_7.fileargs = ((void*)0);
 FUNC_1(&VAR_8);
}
