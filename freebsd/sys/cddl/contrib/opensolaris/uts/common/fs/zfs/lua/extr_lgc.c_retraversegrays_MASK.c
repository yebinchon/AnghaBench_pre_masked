
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int * ephemeron; int * grayagain; int * weak; } ;
typedef TYPE_1__ global_State ;
typedef int GCObject ;


 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*,int *) ;

__attribute__((used)) static void FUNC_2 (global_State *VAR_0) {
  GCObject *VAR_1 = VAR_0->weak;
  GCObject *VAR_2 = VAR_0->grayagain;
  GCObject *VAR_3 = VAR_0->ephemeron;
  VAR_0->weak = VAR_0->grayagain = VAR_0->ephemeron = ((void*)0);
  FUNC_0(VAR_0);
  FUNC_1(VAR_0, VAR_2);
  FUNC_1(VAR_0, VAR_1);
  FUNC_1(VAR_0, VAR_3);
}
