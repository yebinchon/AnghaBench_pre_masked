
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int ticket_expected; } ;
struct TYPE_6__ {TYPE_1__ ext; } ;
typedef int SSL_TICKET_STATUS ;
typedef int SSL_SESSION ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;

 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int * FUNC_2 (TYPE_2__*,int ,int const) ;

__attribute__((used)) static SSL_TICKET_STATUS FUNC_3(SSL *VAR_3, PACKET *VAR_4,
                                                 SSL_SESSION **VAR_5)
{
    SSL_SESSION *VAR_6 = ((void*)0);

    VAR_3->ext.ticket_expected = 1;

    switch (FUNC_1(VAR_4)) {
        case 0:
            return VAR_0;

        case 128:
            break;

        default:
            return VAR_1;
    }

    VAR_6 = FUNC_2(VAR_3, FUNC_0(VAR_4),
                                   128);

    if (VAR_6 == ((void*)0))
        return VAR_1;

    *VAR_5 = VAR_6;
    return VAR_2;
}
