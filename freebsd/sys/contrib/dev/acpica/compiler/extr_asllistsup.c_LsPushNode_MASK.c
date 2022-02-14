
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* Filename; struct TYPE_4__* Next; scalar_t__ LineNumber; } ;
typedef TYPE_1__ ASL_LISTING_NODE ;


 TYPE_1__* VAR_0 ;
 TYPE_1__* FUNC_0 (int) ;

void
FUNC_1 (
    char *VAR_1)
{
    ASL_LISTING_NODE *VAR_2;




    VAR_2 = FUNC_0 (sizeof (ASL_LISTING_NODE));



    VAR_2->Filename = VAR_1;
    VAR_2->LineNumber = 0;



    VAR_2->Next = VAR_0;
    VAR_0 = VAR_2;
}
