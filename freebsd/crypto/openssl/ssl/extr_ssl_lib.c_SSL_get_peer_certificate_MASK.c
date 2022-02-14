
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {TYPE_1__* session; } ;
struct TYPE_4__ {int * peer; } ;
typedef TYPE_2__ SSL ;


 int FUNC_0 (int *) ;

X509 *FUNC_1(const SSL *VAR_0)
{
    X509 *VAR_1;

    if ((VAR_0 == ((void*)0)) || (VAR_0->session == ((void*)0)))
        VAR_1 = ((void*)0);
    else
        VAR_1 = VAR_0->session->peer;

    if (VAR_1 == ((void*)0))
        return VAR_1;

    FUNC_0(VAR_1);

    return VAR_1;
}
