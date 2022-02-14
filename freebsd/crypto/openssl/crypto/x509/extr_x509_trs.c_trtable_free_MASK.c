
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int flags; struct TYPE_4__* name; } ;
typedef TYPE_1__ X509_TRUST ;


 int FUNC_0 (TYPE_1__*) ;
 int VAR_0 ;
 int VAR_1 ;

__attribute__((used)) static void FUNC_1(X509_TRUST *VAR_2)
{
    if (!VAR_2)
        return;
    if (VAR_2->flags & VAR_0) {
        if (VAR_2->flags & VAR_1)
            FUNC_0(VAR_2->name);
        FUNC_0(VAR_2);
    }
}
