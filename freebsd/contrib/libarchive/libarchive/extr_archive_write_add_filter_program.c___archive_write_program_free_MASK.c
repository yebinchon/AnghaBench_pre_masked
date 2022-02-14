
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct archive_write_program_data {struct archive_write_program_data* child_buf; struct archive_write_program_data* program_name; scalar_t__ child; } ;


 int VAR_0 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (struct archive_write_program_data*) ;

int
FUNC_2(struct archive_write_program_data *VAR_1)
{

 if (VAR_1) {




  FUNC_1(VAR_1->program_name);
  FUNC_1(VAR_1->child_buf);
  FUNC_1(VAR_1);
 }
 return (VAR_0);
}
