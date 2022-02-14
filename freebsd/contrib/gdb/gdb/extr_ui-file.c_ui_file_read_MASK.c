
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ui_file {long (* to_read ) (struct ui_file*,char*,long) ;} ;


 long FUNC_0 (struct ui_file*,char*,long) ;

long
FUNC_1 (struct ui_file *VAR_0, char *VAR_1, long VAR_2)
{
  return VAR_0->to_read (VAR_0, VAR_1, VAR_2);
}
