
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {struct preloaded_file* f_next; } ;


 struct preloaded_file* VAR_0 ;

__attribute__((used)) static void
FUNC_0(struct preloaded_file *VAR_1)
{
 struct preloaded_file *VAR_2;


 VAR_1->f_next = ((void*)0);
 if (VAR_0 == ((void*)0)) {
  VAR_0 = VAR_1;
 } else {
  for (VAR_2 = VAR_0; VAR_2->f_next != ((void*)0); VAR_2 = VAR_2->f_next)
   ;
  VAR_2->f_next = VAR_1;
 }
}
