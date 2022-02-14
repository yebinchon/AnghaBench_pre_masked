
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int references; } ;
typedef TYPE_1__ X509_STORE ;


 scalar_t__ FUNC_0 (int *,int*,int ) ;
 int FUNC_1 (int) ;
 int FUNC_2 (char*,int ) ;
 int VAR_0 ;

int FUNC_3(X509_STORE *VAR_1)
{
    int VAR_2;

    if (FUNC_0(&VAR_1->references, &VAR_2, VAR_1->lock) <= 0)
        return 0;

    FUNC_2("X509_STORE", VAR_0);
    FUNC_1(VAR_2 < 2);
    return ((VAR_2 > 1) ? 1 : 0);
}
