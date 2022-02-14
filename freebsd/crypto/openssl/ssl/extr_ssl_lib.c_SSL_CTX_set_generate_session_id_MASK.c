
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int lock; int generate_session_id; } ;
typedef TYPE_1__ SSL_CTX ;
typedef int GEN_SESSION_CB ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;

int FUNC_2(SSL_CTX *VAR_0, GEN_SESSION_CB VAR_1)
{
    FUNC_1(VAR_0->lock);
    VAR_0->generate_session_id = VAR_1;
    FUNC_0(VAR_0->lock);
    return 1;
}
