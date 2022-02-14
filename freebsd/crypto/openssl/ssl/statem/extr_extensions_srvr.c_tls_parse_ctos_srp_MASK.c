
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {int login; } ;
struct TYPE_6__ {TYPE_1__ srp_ctx; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (int *,int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;

int FUNC_4(SSL *VAR_5, PACKET *VAR_6, unsigned int VAR_7, X509 *VAR_8,
                       size_t VAR_9)
{
    PACKET VAR_10;

    if (!FUNC_0(VAR_6, &VAR_10)
            || FUNC_1(&VAR_10)) {
        FUNC_3(VAR_5, VAR_1,
                 VAR_3,
                 VAR_4);
        return 0;
    }





    if (!FUNC_2(&VAR_10, &VAR_5->srp_ctx.login)) {
        FUNC_3(VAR_5, VAR_2, VAR_3,
                 VAR_0);
        return 0;
    }

    return 1;
}
