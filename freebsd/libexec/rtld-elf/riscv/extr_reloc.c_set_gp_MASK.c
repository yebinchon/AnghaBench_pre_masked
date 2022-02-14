
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int uint64_t ;
struct TYPE_6__ {TYPE_1__* sym_out; int flags; int * ventry; } ;
struct TYPE_5__ {int st_value; } ;
typedef TYPE_2__ SymLook ;
typedef int Obj_Entry ;


 int VAR_0 ;
 int FUNC_0 (TYPE_2__*,char*) ;
 int FUNC_1 (TYPE_2__*,int *) ;

uint64_t
FUNC_2(Obj_Entry *VAR_1)
{
 uint64_t VAR_2;
 SymLook VAR_3;
 uint64_t VAR_4;
 int VAR_5;

 __asm __volatile("mv    %0, gp" : "=r"(VAR_2));

 FUNC_0(&VAR_3, "__global_pointer$");
 VAR_3.ventry = ((void*)0);
 VAR_3.flags = VAR_0;
 VAR_5 = FUNC_1(&VAR_3, VAR_1);

 if (VAR_5 == 0) {
  VAR_4 = VAR_3.sym_out->st_value;
  __asm __volatile("mv    gp, %0" :: "r"(VAR_4));
 }

 return (VAR_2);
}
