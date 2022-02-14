
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {struct preloaded_file* f_next; } ;


 int FUNC_0 (struct preloaded_file*) ;
 scalar_t__ VAR_0 ;
 struct preloaded_file* VAR_1 ;
 int FUNC_1 (char*) ;

void
FUNC_2(void)
{
 struct preloaded_file *VAR_2;

 while (VAR_1 != ((void*)0)) {
  VAR_2 = VAR_1;
  VAR_1 = VAR_1->f_next;
  FUNC_0(VAR_2);
 }
 VAR_0 = 0;
 FUNC_1("kernelname");
}
