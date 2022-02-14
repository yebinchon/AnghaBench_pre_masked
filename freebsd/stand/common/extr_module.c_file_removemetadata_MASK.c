
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {struct file_metadata* f_metadata; } ;
struct file_metadata {struct file_metadata* md_next; } ;


 int FUNC_0 (struct file_metadata*) ;

void
FUNC_1(struct preloaded_file *VAR_0)
{
 struct file_metadata *VAR_1, *VAR_2;

 for (VAR_1 = VAR_0->f_metadata; VAR_1 != ((void*)0); VAR_1 = VAR_2)
 {
  VAR_2 = VAR_1->md_next;
  FUNC_0(VAR_1);
 }
 VAR_0->f_metadata = ((void*)0);
}
