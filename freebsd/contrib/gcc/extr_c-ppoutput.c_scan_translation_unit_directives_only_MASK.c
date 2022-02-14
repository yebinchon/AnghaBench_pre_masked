
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct _cpp_dir_only_callbacks {int maybe_print_line; int print_lines; } ;
typedef int cpp_reader ;


 int FUNC_0 (int *,struct _cpp_dir_only_callbacks*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void
FUNC_1 (cpp_reader *VAR_2)
{
  struct _cpp_dir_only_callbacks VAR_3;

  VAR_3.print_lines = VAR_1;
  VAR_3.maybe_print_line = VAR_0;

  FUNC_0 (VAR_2, &VAR_3);
}
