
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_program_data {int child_stdin; int child_stdout; int program_name; } ;


 struct archive_write_program_data* FUNC_0 (int,int) ;
 int FUNC_1 (char const*) ;

struct archive_write_program_data *
FUNC_2(const char *VAR_0)
{
 struct archive_write_program_data *VAR_1;

 VAR_1 = FUNC_0(1, sizeof(struct archive_write_program_data));
 if (VAR_1 == ((void*)0))
  return (VAR_1);
 VAR_1->child_stdin = -1;
 VAR_1->child_stdout = -1;
 VAR_1->program_name = FUNC_1(VAR_0);
 return (VAR_1);
}
