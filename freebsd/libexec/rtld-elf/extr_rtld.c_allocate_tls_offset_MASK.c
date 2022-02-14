
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int tls_done; scalar_t__ tlsalign; size_t tlsoffset; int tlssize; } ;
typedef TYPE_1__ Obj_Entry ;


 size_t FUNC_0 (int ,scalar_t__) ;
 scalar_t__ FUNC_1 (size_t,int ) ;
 size_t FUNC_2 (size_t,int ,int ,scalar_t__) ;
 size_t VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;

bool
FUNC_3(Obj_Entry *VAR_4)
{
    size_t VAR_5;

    if (VAR_4->tls_done)
 return 1;

    if (VAR_4->tlssize == 0) {
 VAR_4->tls_done = 1;
 return 1;
    }

    if (VAR_0 == 0)
 VAR_5 = FUNC_0(VAR_4->tlssize, VAR_4->tlsalign);
    else
 VAR_5 = FUNC_2(VAR_0, VAR_1,
       VAR_4->tlssize, VAR_4->tlsalign);







    if (VAR_3 != 0) {
 if (FUNC_1(VAR_5, VAR_4->tlssize) > VAR_3)
     return 0;
    } else if (VAR_4->tlsalign > VAR_2) {
     VAR_2 = VAR_4->tlsalign;
    }

    VAR_0 = VAR_4->tlsoffset = VAR_5;
    VAR_1 = VAR_4->tlssize;
    VAR_4->tls_done = 1;

    return 1;
}
