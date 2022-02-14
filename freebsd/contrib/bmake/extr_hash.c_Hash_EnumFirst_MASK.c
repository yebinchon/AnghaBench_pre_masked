
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int * hashEntryPtr; scalar_t__ nextIndex; int * tablePtr; } ;
typedef int Hash_Table ;
typedef TYPE_1__ Hash_Search ;
typedef int Hash_Entry ;


 int * FUNC_0 (TYPE_1__*) ;

Hash_Entry *
FUNC_1(Hash_Table *VAR_0, Hash_Search *VAR_1)
{
 VAR_1->tablePtr = VAR_0;
 VAR_1->nextIndex = 0;
 VAR_1->hashEntryPtr = ((void*)0);
 return FUNC_0(VAR_1);
}
