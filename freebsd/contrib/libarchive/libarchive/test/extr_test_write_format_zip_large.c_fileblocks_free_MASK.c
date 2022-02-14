
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileblocks {struct fileblocks* buff; struct fileblocks* next; struct fileblocks* first; } ;
struct fileblock {struct fileblock* buff; struct fileblock* next; struct fileblock* first; } ;


 int FUNC_0 (struct fileblocks*) ;

__attribute__((used)) static void
FUNC_1(struct fileblocks *VAR_0)
{
 while (VAR_0->first != ((void*)0)) {
  struct fileblock *VAR_1 = VAR_0->first;
  VAR_0->first = VAR_0->first->next;
  FUNC_0(VAR_1->buff);
  FUNC_0(VAR_1);
 }
 FUNC_0(VAR_0);
}
