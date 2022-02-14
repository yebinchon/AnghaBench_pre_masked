
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct mpage {struct mpage* desc; struct mpage* title; struct mpage* arch; struct mpage* sec; struct mpage* next; struct mlink* mlinks; } ;
struct mlink {struct mlink* next; } ;


 int FUNC_0 (struct mpage*) ;
 int FUNC_1 (struct mlink*) ;
 struct mpage* VAR_0 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct mpage *VAR_1;
 struct mlink *VAR_2;

 while ((VAR_1 = VAR_0) != ((void*)0)) {
  while ((VAR_2 = VAR_1->mlinks) != ((void*)0)) {
   VAR_1->mlinks = VAR_2->next;
   FUNC_1(VAR_2);
  }
  VAR_0 = VAR_1->next;
  FUNC_0(VAR_1->sec);
  FUNC_0(VAR_1->arch);
  FUNC_0(VAR_1->title);
  FUNC_0(VAR_1->desc);
  FUNC_0(VAR_1);
 }
}
