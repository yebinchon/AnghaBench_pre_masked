
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int (* to_fputs ) (char const*,struct ui_file*) ;} ;


 int FUNC_0 (char const*,struct ui_file*) ;

void
FUNC_1 (const char *VAR_0, struct ui_file *VAR_1)
{
  VAR_1->to_fputs (VAR_0, VAR_1);
}
