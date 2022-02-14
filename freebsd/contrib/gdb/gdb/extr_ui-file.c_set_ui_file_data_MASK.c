
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ui_file_delete_ftype ;
struct ui_file {int * to_delete; void* to_data; } ;



void
FUNC_0 (struct ui_file *VAR_0, void *VAR_1,
    ui_file_delete_ftype *VAR_2)
{
  VAR_0->to_data = VAR_1;
  VAR_0->to_delete = VAR_2;
}
