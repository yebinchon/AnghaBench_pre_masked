
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct preloaded_file {struct file_metadata* f_metadata; } ;
struct file_metadata {size_t md_size; int md_type; struct file_metadata* md_next; int md_data; } ;


 int FUNC_0 (void*,int ,size_t) ;
 struct file_metadata* FUNC_1 (int) ;

void
FUNC_2(struct preloaded_file *VAR_0, int VAR_1, size_t VAR_2, void *VAR_3)
{
 struct file_metadata *VAR_4;

 VAR_4 = FUNC_1(sizeof(struct file_metadata) - sizeof(VAR_4->md_data) + VAR_2);
 if (VAR_4 != ((void*)0)) {
  VAR_4->md_size = VAR_2;
  VAR_4->md_type = VAR_1;
  FUNC_0(VAR_3, VAR_4->md_data, VAR_2);
  VAR_4->md_next = VAR_0->f_metadata;
 }
 VAR_0->f_metadata = VAR_4;
}
