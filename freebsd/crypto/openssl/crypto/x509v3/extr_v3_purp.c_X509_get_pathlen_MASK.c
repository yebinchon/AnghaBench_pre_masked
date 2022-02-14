
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int ex_flags; long ex_pathlen; } ;
typedef TYPE_1__ X509 ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int,int) ;

long FUNC_1(X509 *VAR_1)
{

    if (FUNC_0(VAR_1, -1, -1) != 1
            || (VAR_1->ex_flags & VAR_0) == 0)
        return -1;
    return VAR_1->ex_pathlen;
}
