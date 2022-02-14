
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int refCount; int flags; scalar_t__ sNum; void* ref; void* parents; void* children; void* searchPath; scalar_t__ nameLen; int name; } ;
typedef int Suff ;


 int FUNC_0 (void*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int ,void*,int ) ;
 void* FUNC_2 (int ) ;
 int VAR_2 ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int) ;
 int FUNC_5 (char*) ;
 int VAR_3 ;
 TYPE_1__* VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 TYPE_1__* VAR_7 ;
 void* VAR_8 ;

void
FUNC_6(void)
{



    VAR_8 = FUNC_2(VAR_0);
    VAR_5 = 0;
    if (VAR_7)
 FUNC_3(VAR_7);
    VAR_4 = VAR_7 = FUNC_4(sizeof(Suff));

    VAR_7->name = FUNC_5("");
    VAR_7->nameLen = 0;
    VAR_7->searchPath = FUNC_2(VAR_0);
    FUNC_0(VAR_7->searchPath, VAR_3);
    VAR_7->children = FUNC_2(VAR_0);
    VAR_7->parents = FUNC_2(VAR_0);
    VAR_7->ref = FUNC_2(VAR_0);
    VAR_7->sNum = VAR_5++;
    VAR_7->flags = VAR_2;
    VAR_7->refCount = 1;
}
