
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct pt_section {int * memsize; int * read; int * unmap; struct pt_sec_windows_mapping* mapping; } ;
struct pt_sec_windows_mapping {int fd; int mh; int begin; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct pt_sec_windows_mapping*) ;
 int VAR_0 ;

int FUNC_4(struct pt_section *VAR_1)
{
 struct pt_sec_windows_mapping *VAR_2;

 if (!VAR_1)
  return -VAR_0;

 VAR_2 = VAR_1->mapping;
 if (!VAR_2 || !VAR_1->unmap || !VAR_1->read || !VAR_1->memsize)
  return -VAR_0;

 VAR_1->mapping = ((void*)0);
 VAR_1->unmap = ((void*)0);
 VAR_1->read = ((void*)0);
 VAR_1->memsize = ((void*)0);

 FUNC_1(VAR_2->begin);
 FUNC_0(VAR_2->mh);
 FUNC_2(VAR_2->fd);
 FUNC_3(VAR_2);

 return 0;
}
