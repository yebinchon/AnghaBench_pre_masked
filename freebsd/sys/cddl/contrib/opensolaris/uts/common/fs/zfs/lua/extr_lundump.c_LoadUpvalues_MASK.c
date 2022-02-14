
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {void* idx; void* instack; int * name; } ;
struct TYPE_9__ {int L; } ;
struct TYPE_8__ {int sizeupvalues; TYPE_3__* upvalues; } ;
typedef TYPE_1__ Proto ;
typedef TYPE_2__ LoadState ;


 void* FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (TYPE_2__*) ;
 int VAR_0 ;
 TYPE_3__* FUNC_2 (int ,int,int ) ;

__attribute__((used)) static void FUNC_3(LoadState* VAR_1, Proto* VAR_2)
{
 int VAR_3,VAR_4;
 VAR_4=FUNC_1(VAR_1);
 VAR_2->upvalues=FUNC_2(VAR_1->L,VAR_4,VAR_0);
 VAR_2->sizeupvalues=VAR_4;
 for (VAR_3=0; VAR_3<VAR_4; VAR_3++) VAR_2->upvalues[VAR_3].name=((void*)0);
 for (VAR_3=0; VAR_3<VAR_4; VAR_3++)
 {
  VAR_2->upvalues[VAR_3].instack=FUNC_0(VAR_1);
  VAR_2->upvalues[VAR_3].idx=FUNC_0(VAR_1);
 }
}
