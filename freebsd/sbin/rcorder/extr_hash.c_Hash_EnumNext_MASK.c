
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {struct TYPE_8__* next; } ;
struct TYPE_7__ {scalar_t__ nextIndex; TYPE_3__* hashEntryPtr; TYPE_1__* tablePtr; } ;
struct TYPE_6__ {scalar_t__ size; TYPE_3__** bucketPtr; } ;
typedef TYPE_1__ Hash_Table ;
typedef TYPE_2__ Hash_Search ;
typedef TYPE_3__ Hash_Entry ;



Hash_Entry *
FUNC_0(
 register Hash_Search *VAR_0)

{
 register Hash_Entry *VAR_1;
 Hash_Table *VAR_2 = VAR_0->tablePtr;






 VAR_1 = VAR_0->hashEntryPtr;
 if (VAR_1 != ((void*)0))
  VAR_1 = VAR_1->next;




 while (VAR_1 == ((void*)0)) {
  if (VAR_0->nextIndex >= VAR_2->size)
   return (((void*)0));
  VAR_1 = VAR_2->bucketPtr[VAR_0->nextIndex++];
 }
 VAR_0->hashEntryPtr = VAR_1;
 return (VAR_1);
}
