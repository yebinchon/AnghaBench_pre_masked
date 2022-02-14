
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ui_file_put_method_ftype ;
struct ui_file {int (* to_put ) (struct ui_file*,int *,void*) ;} ;


 int FUNC_0 (struct ui_file*,int *,void*) ;

void
FUNC_1 (struct ui_file *VAR_0,
       ui_file_put_method_ftype *VAR_1,
       void *VAR_2)
{
  VAR_0->to_put (VAR_0, VAR_1, VAR_2);
}
