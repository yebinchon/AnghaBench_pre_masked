
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int ifuncs_resolved; scalar_t__ gnu_ifunc; scalar_t__ bind_now; scalar_t__ irelative; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,int,int *) ;
 int FUNC_3 (TYPE_1__*,int *) ;

__attribute__((used)) static int
FUNC_4(Obj_Entry *VAR_0, bool VAR_1, int VAR_2,
    RtldLockState *VAR_3)
{

 if (VAR_0->ifuncs_resolved)
  return (0);
 VAR_0->ifuncs_resolved = 1;
 if (!VAR_0->irelative && !((VAR_0->bind_now || VAR_1) && VAR_0->gnu_ifunc))
  return (0);
 if (FUNC_0(VAR_0) == -1 ||
     (VAR_0->irelative && FUNC_3(VAR_0, VAR_3) == -1) ||
     ((VAR_0->bind_now || VAR_1) && VAR_0->gnu_ifunc &&
     FUNC_2(VAR_0, VAR_2, VAR_3) == -1) ||
     FUNC_1(VAR_0) == -1)
  return (-1);
 return (0);
}
