
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_6__ {int login; int * A; } ;
struct TYPE_8__ {TYPE_2__* session; TYPE_1__ srp_ctx; } ;
struct TYPE_7__ {int * srp_username; } ;
typedef TYPE_3__ SSL ;


 int FUNC_0 (int *,unsigned char*) ;
 int FUNC_1 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (int *) ;
 int * FUNC_3 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_5 (int *,int ,unsigned char**) ;

__attribute__((used)) static int FUNC_6(SSL *VAR_4, WPACKET *VAR_5)
{

    unsigned char *VAR_6 = ((void*)0);

    if (VAR_4->srp_ctx.A == ((void*)0)
            || !FUNC_5(VAR_5, FUNC_1(VAR_4->srp_ctx.A),
                                               &VAR_6)) {
        FUNC_4(VAR_4, VAR_2, VAR_3,
                 VAR_0);
        return 0;
    }
    FUNC_0(VAR_4->srp_ctx.A, VAR_6);

    FUNC_2(VAR_4->session->srp_username);
    VAR_4->session->srp_username = FUNC_3(VAR_4->srp_ctx.login);
    if (VAR_4->session->srp_username == ((void*)0)) {
        FUNC_4(VAR_4, VAR_2, VAR_3,
                 VAR_1);
        return 0;
    }

    return 1;





}
