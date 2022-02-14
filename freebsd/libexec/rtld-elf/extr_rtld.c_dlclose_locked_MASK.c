
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int refcount; int linkmap; int dl_refcount; int * path; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (int ,void*,int *,int ,int ,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 TYPE_1__* FUNC_2 (void*) ;
 int VAR_4 ;
 int FUNC_3 (int *,TYPE_1__*,int *) ;
 int FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static int
FUNC_6(void *VAR_5, RtldLockState *VAR_6)
{
    Obj_Entry *VAR_7;

    VAR_7 = FUNC_2(VAR_5);
    if (VAR_7 == ((void*)0))
 return -1;
    FUNC_1(VAR_2, VAR_5, ((void*)0), 0, VAR_7->dl_refcount,
 VAR_7->path);


    VAR_7->dl_refcount--;

    if (VAR_7->refcount == 1) {




 FUNC_3(&VAR_4, VAR_7, VAR_6);

 FUNC_5(VAR_7);


 FUNC_0(VAR_1,&VAR_7->linkmap);
 FUNC_4(VAR_7, VAR_6);
 FUNC_0(VAR_0,((void*)0));
    } else
 FUNC_5(VAR_7);

    FUNC_1(VAR_3, VAR_5, ((void*)0), 0, 0, ((void*)0));
    return 0;
}
