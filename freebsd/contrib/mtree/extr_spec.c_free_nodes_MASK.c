
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {struct TYPE_4__* tags; struct TYPE_4__* sha512digest; struct TYPE_4__* sha384digest; struct TYPE_4__* sha256digest; struct TYPE_4__* sha1digest; struct TYPE_4__* rmd160digest; struct TYPE_4__* md5digest; struct TYPE_4__* slink; struct TYPE_4__* child; struct TYPE_4__* next; } ;
typedef TYPE_1__ NODE ;


 int FUNC_0 (TYPE_1__*,int *) ;

void
FUNC_1(NODE *VAR_0)
{
 NODE *VAR_1, *VAR_2;

 if (VAR_0 == ((void*)0))
  return;

 VAR_2 = ((void*)0);
 for (VAR_1 = VAR_0; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
  VAR_2 = VAR_1->next;
  FUNC_1(VAR_1->child);
  FUNC_0(VAR_1->slink, ((void*)0));
  FUNC_0(VAR_1->md5digest, ((void*)0));
  FUNC_0(VAR_1->rmd160digest, ((void*)0));
  FUNC_0(VAR_1->sha1digest, ((void*)0));
  FUNC_0(VAR_1->sha256digest, ((void*)0));
  FUNC_0(VAR_1->sha384digest, ((void*)0));
  FUNC_0(VAR_1->sha512digest, ((void*)0));
  FUNC_0(VAR_1->tags, ((void*)0));
  FUNC_0(VAR_1, ((void*)0));
 }
}
