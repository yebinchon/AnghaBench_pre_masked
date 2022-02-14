
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Hash_Entry {struct Hash_Entry* next; } ;
struct TYPE_3__ {int size; struct Hash_Entry** bucketPtr; } ;
typedef TYPE_1__ Hash_Table ;


 int FUNC_0 (char*) ;

void
FUNC_1(Hash_Table *VAR_0)
{
 register struct Hash_Entry **VAR_1, *VAR_2, *VAR_3 = ((void*)0);
 register int VAR_4;

 for (VAR_1 = VAR_0->bucketPtr, VAR_4 = VAR_0->size; --VAR_4 >= 0;) {
  for (VAR_2 = *VAR_1++; VAR_2 != ((void*)0); VAR_2 = VAR_3) {
   VAR_3 = VAR_2->next;
   FUNC_0((char *)VAR_2);
  }
 }
 FUNC_0((char *)VAR_0->bucketPtr);





 VAR_0->bucketPtr = ((void*)0);
}
