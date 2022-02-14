
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ dlopened; } ;
typedef int RtldLockState ;
typedef TYPE_1__ Obj_Entry ;


 int FUNC_0 (char*) ;
 TYPE_1__* FUNC_1 (void*) ;
 int FUNC_2 (int ,int *) ;
 TYPE_1__* FUNC_3 (void*) ;
 int FUNC_4 (int ,int *) ;
 int VAR_0 ;

int
FUNC_5(void *VAR_1)
{
 Obj_Entry *VAR_2;
 RtldLockState VAR_3;
 int VAR_4;

 FUNC_4(VAR_0, &VAR_3);
 VAR_2 = FUNC_1(VAR_1);
 if (VAR_2 == ((void*)0))
  VAR_2 = FUNC_3(VAR_1);
 if (VAR_2 == ((void*)0)) {
  FUNC_0("No shared object contains address");
  FUNC_2(VAR_0, &VAR_3);
  return (-1);
 }
 VAR_4 = VAR_2->dlopened ? 1 : 0;
 FUNC_2(VAR_0, &VAR_3);
 return (VAR_4);
}
