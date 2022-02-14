
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {struct file_metadata* f_metadata; } ;
struct file_metadata {int md_type; struct file_metadata* md_next; } ;



struct file_metadata *
FUNC_0(struct preloaded_file *VAR_0, int VAR_1)
{
 struct file_metadata *VAR_2;

 for (VAR_2 = VAR_0->f_metadata; VAR_2 != ((void*)0); VAR_2 = VAR_2->md_next)
  if (VAR_2->md_type == VAR_1)
   break;
 return(VAR_2);
}
