
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ refcount; int dl_refcount; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (TYPE_1__*,int *) ;
 int FUNC_1 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_2(Obj_Entry *VAR_0, RtldLockState *VAR_1)
{

 VAR_0->dl_refcount--;
 FUNC_1(VAR_0);
 if (VAR_0->refcount == 0)
  FUNC_0(VAR_0, VAR_1);
}
