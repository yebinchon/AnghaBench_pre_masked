
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ st_value; int st_info; } ;
struct TYPE_9__ {scalar_t__ relocbase; } ;
struct TYPE_8__ {TYPE_5__* sym_out; TYPE_4__* defobj_out; int * lockstate; } ;
typedef TYPE_1__ SymLook ;
typedef int RtldLockState ;
typedef int DoneList ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_5__*,TYPE_4__*) ;
 scalar_t__ FUNC_3 (TYPE_4__*,TYPE_5__*) ;
 scalar_t__ FUNC_4 (TYPE_1__*,int *) ;
 int FUNC_5 (TYPE_1__*,char const*) ;

__attribute__((used)) static const void **
FUNC_6(const char *VAR_2, RtldLockState *VAR_3)
{
    SymLook VAR_4;
    DoneList VAR_5;

    FUNC_5(&VAR_4, VAR_2);
    VAR_4.lockstate = VAR_3;
    FUNC_1(&VAR_5);
    if (FUNC_4(&VAR_4, &VAR_5) != 0)
 return (((void*)0));
    if (FUNC_0(VAR_4.sym_out->st_info) == VAR_0)
 return ((const void **)FUNC_2(VAR_4.sym_out,
   VAR_4.defobj_out));
    else if (FUNC_0(VAR_4.sym_out->st_info) == VAR_1)
 return ((const void **)FUNC_3(VAR_4.defobj_out, VAR_4.sym_out));
    else
 return ((const void **)(VAR_4.defobj_out->relocbase +
   VAR_4.sym_out->st_value));
}
