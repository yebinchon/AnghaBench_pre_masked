
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int * session; } ;
typedef int SSL_SESSION ;
typedef TYPE_1__ SSL ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int *) ;

SSL_SESSION *FUNC_3(SSL *VAR_0)

{
    SSL_SESSION *VAR_1;





    FUNC_0(VAR_0->lock);
    VAR_1 = VAR_0->session;
    if (VAR_1)
        FUNC_2(VAR_1);
    FUNC_1(VAR_0->lock);
    return VAR_1;
}
