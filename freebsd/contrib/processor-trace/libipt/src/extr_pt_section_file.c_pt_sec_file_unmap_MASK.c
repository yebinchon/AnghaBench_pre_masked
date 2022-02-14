
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int * memsize; int * read; int * unmap; struct pt_sec_file_mapping* mapping; } ;
struct pt_sec_file_mapping {int dummy; } ;


 int FUNC_0 (struct pt_sec_file_mapping*) ;
 int FUNC_1 (struct pt_sec_file_mapping*) ;
 int VAR_0 ;

int FUNC_2(struct pt_section *VAR_1)
{
 struct pt_sec_file_mapping *VAR_2;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = VAR_1->mapping;

 if (!VAR_2 || !VAR_1->unmap || !VAR_1->read || !VAR_1->memsize)
  return -VAR_0;

 VAR_1->mapping = ((void*)0);
 VAR_1->unmap = ((void*)0);
 VAR_1->read = ((void*)0);
 VAR_1->memsize = ((void*)0);

 FUNC_0(VAR_2);
 FUNC_1(VAR_2);

 return 0;
}
