
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct source_cleanup_lines_args {int old_error_pre_print; int old_pre_error; int old_file; int old_line; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static void
FUNC_0 (void *VAR_4)
{
  struct source_cleanup_lines_args *VAR_5 =
  (struct source_cleanup_lines_args *) VAR_4;
  VAR_2 = VAR_5->old_line;
  VAR_1 = VAR_5->old_file;
  VAR_3 = VAR_5->old_pre_error;
  VAR_0 = VAR_5->old_error_pre_print;
}
