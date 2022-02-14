
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int namehash; struct TYPE_7__* next; } ;
struct TYPE_6__ {int size; int mask; TYPE_2__** bucketPtr; } ;
typedef TYPE_1__ Hash_Table ;
typedef TYPE_2__ Hash_Entry ;


 TYPE_2__** FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__**) ;

__attribute__((used)) static void
FUNC_2(Hash_Table *VAR_0)
{
 Hash_Entry *VAR_1, *VAR_2 = ((void*)0), **VAR_3, **VAR_4;
 int VAR_5, VAR_6;
        Hash_Entry **VAR_7;
 int VAR_8;

 VAR_7 = VAR_0->bucketPtr;
 VAR_8 = VAR_5 = VAR_0->size;
 VAR_5 <<= 1;
 VAR_0->size = VAR_5;
 VAR_0->mask = VAR_6 = VAR_5 - 1;
 VAR_0->bucketPtr = VAR_3 = FUNC_0(sizeof(*VAR_3) * VAR_5);
 while (--VAR_5 >= 0)
  *VAR_3++ = ((void*)0);
 for (VAR_3 = VAR_7, VAR_5 = VAR_8; --VAR_5 >= 0;) {
  for (VAR_1 = *VAR_3++; VAR_1 != ((void*)0); VAR_1 = VAR_2) {
   VAR_2 = VAR_1->next;
   VAR_4 = &VAR_0->bucketPtr[VAR_1->namehash & VAR_6];
   VAR_1->next = *VAR_4;
   *VAR_4 = VAR_1;
  }
 }
 FUNC_1(VAR_7);
}
