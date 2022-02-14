
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ tlssize; int tlsoffset; } ;
typedef TYPE_1__ Obj_Entry ;


 scalar_t__ FUNC_0 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ VAR_1 ;

void
FUNC_1(Obj_Entry *VAR_2)
{







    if (FUNC_0(VAR_2->tlsoffset, VAR_2->tlssize)
 == FUNC_0(VAR_0, VAR_1)) {
 VAR_0 -= VAR_2->tlssize;
 VAR_1 = 0;
    }
}
