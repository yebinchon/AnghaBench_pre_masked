
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Hash_Entry {int namehash; struct Hash_Entry* next; } ;
struct TYPE_3__ {int size; int mask; struct Hash_Entry** bucketPtr; } ;
typedef TYPE_1__ Hash_Table ;
typedef struct Hash_Entry Hash_Entry ;


 scalar_t__ FUNC_0 (int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static void
FUNC_2(register Hash_Table *VAR_0)
{
 register Hash_Entry *VAR_1, *VAR_2 = ((void*)0), **VAR_3, **VAR_4;
 register int VAR_5, VAR_6;
        register Hash_Entry **VAR_7;
 int VAR_8;

 VAR_7 = VAR_0->bucketPtr;
 VAR_8 = VAR_5 = VAR_0->size;
 VAR_5 <<= 1;
 VAR_0->size = VAR_5;
 VAR_0->mask = VAR_6 = VAR_5 - 1;
 VAR_0->bucketPtr = VAR_3 = (struct Hash_Entry **) FUNC_0(sizeof(*VAR_3) * VAR_5);
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
 FUNC_1((char *)VAR_7);
}
