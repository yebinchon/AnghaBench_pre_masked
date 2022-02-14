
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ssh_identitylist {size_t nkeys; struct ssh_identitylist** comments; int * keys; } ;


 int FUNC_0 (struct ssh_identitylist*) ;
 int FUNC_1 (int ) ;

void
FUNC_2(struct ssh_identitylist *VAR_0)
{
 size_t VAR_1;

 if (VAR_0 == ((void*)0))
  return;
 for (VAR_1 = 0; VAR_1 < VAR_0->nkeys; VAR_1++) {
  if (VAR_0->keys != ((void*)0))
   FUNC_1(VAR_0->keys[VAR_1]);
  if (VAR_0->comments != ((void*)0))
   FUNC_0(VAR_0->comments[VAR_1]);
 }
 FUNC_0(VAR_0);
}
