
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct vm_domainset_iter {int dummy; } ;
struct malloc_type {int dummy; } ;
struct domainset {int dummy; } ;


 void* FUNC_0 (size_t,struct malloc_type*,int,int) ;
 scalar_t__ FUNC_1 (struct vm_domainset_iter*,int*) ;
 int FUNC_2 (struct vm_domainset_iter*,struct domainset*,int*,int*) ;

void *
FUNC_3(size_t VAR_0, struct malloc_type *VAR_1, struct domainset *VAR_2,
    int VAR_3)
{
 struct vm_domainset_iter VAR_4;
 void *VAR_5;
 int VAR_6;

 FUNC_2(&VAR_4, VAR_2, &VAR_6, &VAR_3);
 do {
  VAR_5 = FUNC_0(VAR_0, VAR_1, VAR_6, VAR_3);
  if (VAR_5 != ((void*)0))
   break;
 } while (FUNC_1(&VAR_4, &VAR_6) == 0);

 return (VAR_5);
}
