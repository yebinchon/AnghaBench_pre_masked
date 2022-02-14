
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {size_t namehash; struct TYPE_6__* next; } ;
struct TYPE_5__ {size_t mask; int numEntries; TYPE_2__** bucketPtr; } ;
typedef TYPE_1__ Hash_Table ;
typedef TYPE_2__ Hash_Entry ;


 int FUNC_0 () ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int,char*,int) ;

void
FUNC_3(Hash_Table *VAR_0, Hash_Entry *VAR_1)
{
 register Hash_Entry **VAR_2, *VAR_3;

 if (VAR_1 == ((void*)0))
  return;
 for (VAR_2 = &VAR_0->bucketPtr[VAR_1->namehash & VAR_0->mask];
      (VAR_3 = *VAR_2) != ((void*)0); VAR_2 = &VAR_3->next) {
  if (VAR_3 == VAR_1) {
   *VAR_2 = VAR_3->next;
   FUNC_1((char *)VAR_3);
   VAR_0->numEntries--;
   return;
  }
 }
 (void)FUNC_2(2, "bad call to Hash_DeleteEntry\n", 29);
 FUNC_0();
}
