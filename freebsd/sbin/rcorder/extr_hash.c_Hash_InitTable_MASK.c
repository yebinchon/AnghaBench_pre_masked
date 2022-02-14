
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct Hash_Entry {int dummy; } ;
struct TYPE_3__ {int size; int mask; struct Hash_Entry** bucketPtr; scalar_t__ numEntries; } ;
typedef TYPE_1__ Hash_Table ;


 scalar_t__ FUNC_0 (int) ;

void
FUNC_1(
 register Hash_Table *VAR_0,
 int VAR_1)




{
 register int VAR_2;
 register struct Hash_Entry **VAR_3;




 if (VAR_1 <= 0)
  VAR_2 = 16;
 else {
  for (VAR_2 = 2; VAR_2 < VAR_1; VAR_2 <<= 1)
    continue;
 }
 VAR_0->numEntries = 0;
 VAR_0->size = VAR_2;
 VAR_0->mask = VAR_2 - 1;
 VAR_0->bucketPtr = VAR_3 = (struct Hash_Entry **)FUNC_0(sizeof(*VAR_3) * VAR_2);
 while (--VAR_2 >= 0)
  *VAR_3++ = ((void*)0);
}
