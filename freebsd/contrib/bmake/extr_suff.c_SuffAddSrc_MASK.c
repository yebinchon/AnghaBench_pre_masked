
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_8__ {void* l; TYPE_2__* s; } ;
struct TYPE_7__ {int children; void* cp; TYPE_1__* suff; int * node; struct TYPE_7__* parent; int pref; int file; } ;
struct TYPE_6__ {int flags; char* name; int refCount; } ;
typedef TYPE_1__ Suff ;
typedef TYPE_2__ Src ;
typedef TYPE_3__ LstSrc ;


 int VAR_0 ;
 int FUNC_0 (void*,TYPE_2__*) ;
 int FUNC_1 (void*,int ,int *) ;
 void* FUNC_2 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 TYPE_2__* FUNC_3 (int) ;
 int FUNC_4 (int ) ;
 int VAR_3 ;
 int FUNC_5 (int ,char*,...) ;
 int FUNC_6 (int ,char*,int ) ;

__attribute__((used)) static int
FUNC_7(void *VAR_4, void *VAR_5)
{
    Suff *VAR_6 = (Suff *)VAR_4;
    LstSrc *VAR_7 = (LstSrc *)VAR_5;
    Src *VAR_8;
    Src *VAR_9;

    VAR_9 = VAR_7->s;

    if ((VAR_6->flags & VAR_2) && (*VAR_6->name != '\0')) {





 VAR_8 = FUNC_3(sizeof(Src));
 VAR_8->file = FUNC_4(VAR_9->pref);
 VAR_8->pref = VAR_9->pref;
 VAR_8->parent = VAR_9;
 VAR_8->node = ((void*)0);
 VAR_8->suff = VAR_6;
 VAR_6->refCount++;
 VAR_8->children = 0;
 VAR_9->children += 1;
 (void)FUNC_0(VAR_7->l, VAR_8);







    }
    VAR_8 = FUNC_3(sizeof(Src));
    VAR_8->file = FUNC_6(VAR_9->pref, VAR_6->name, 0);
    VAR_8->pref = VAR_9->pref;
    VAR_8->parent = VAR_9;
    VAR_8->node = ((void*)0);
    VAR_8->suff = VAR_6;
    VAR_6->refCount++;
    VAR_8->children = 0;
    VAR_9->children += 1;
    (void)FUNC_0(VAR_7->l, VAR_8);
    return(0);
}
