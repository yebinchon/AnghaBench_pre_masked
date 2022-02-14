
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {int (* to_write ) (struct ui_file*,char const*,long) ;} ;


 int FUNC_0 (struct ui_file*,char const*,long) ;

void
FUNC_1 (struct ui_file *VAR_0,
  const char *VAR_1,
  long VAR_2)
{
  VAR_0->to_write (VAR_0, VAR_1, VAR_2);
}
