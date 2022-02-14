
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void const* key; struct TYPE_4__* rlink; struct TYPE_4__* llink; } ;
typedef TYPE_1__ posix_tnode ;


 int FUNC_0 (void const*,void const*) ;

posix_tnode *
FUNC_1(const void *VAR_0, posix_tnode * const *VAR_1,
    int (*VAR_2)(const void *, const void *))
{

 if (VAR_1 == ((void*)0))
  return ((void*)0);

 while (*VAR_1 != ((void*)0)) {
  int VAR_3;

  if ((VAR_3 = (*VAR_2)(VAR_0, (*VAR_1)->key)) == 0)
   return *VAR_1;
  VAR_1 = (VAR_3 < 0) ?
      &(*VAR_1)->llink :
      &(*VAR_1)->rlink;
 }
 return ((void*)0);
}
