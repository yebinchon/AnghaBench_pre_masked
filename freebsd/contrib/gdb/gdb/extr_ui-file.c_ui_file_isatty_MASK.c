
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int (* to_isatty ) (struct ui_file*) ;} ;


 int FUNC_0 (struct ui_file*) ;

int
FUNC_1 (struct ui_file *VAR_0)
{
  return VAR_0->to_isatty (VAR_0);
}
