
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
struct TYPE_12__ {size_t client_sigalgslen; size_t conf_sigalgslen; int * conf_sigalgs; int * client_sigalgs; } ;
struct TYPE_11__ {size_t shared_sigalgslen; int options; int const** shared_sigalgs; TYPE_2__* s3; int server; TYPE_4__* cert; } ;
struct TYPE_9__ {size_t peer_sigalgslen; int * peer_sigalgs; } ;
struct TYPE_10__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL ;
typedef int SIGALG_LOOKUP ;
typedef TYPE_4__ CERT ;


 int VAR_0 ;
 int FUNC_0 (int const**) ;
 int ** FUNC_1 (size_t) ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_2 (int ,int ) ;
 size_t FUNC_3 (TYPE_3__*,int ,int const**) ;
 size_t FUNC_4 (TYPE_3__*,int const**,int const*,size_t,int const*,size_t) ;
 unsigned int FUNC_5 (TYPE_3__*) ;

__attribute__((used)) static int FUNC_6(SSL *VAR_3)
{
    const uint16_t *VAR_4, *VAR_5, *VAR_6;
    size_t VAR_7, VAR_8, VAR_9;
    size_t VAR_10;
    const SIGALG_LOOKUP **VAR_11 = ((void*)0);
    CERT *VAR_12 = VAR_3->cert;
    unsigned int VAR_13 = FUNC_5(VAR_3);

    FUNC_0(VAR_3->shared_sigalgs);
    VAR_3->shared_sigalgs = ((void*)0);
    VAR_3->shared_sigalgslen = 0;

    if (!VAR_3->server && VAR_12->client_sigalgs && !VAR_13) {
        VAR_6 = VAR_12->client_sigalgs;
        VAR_9 = VAR_12->client_sigalgslen;
    } else if (VAR_12->conf_sigalgs && !VAR_13) {
        VAR_6 = VAR_12->conf_sigalgs;
        VAR_9 = VAR_12->conf_sigalgslen;
    } else
        VAR_9 = FUNC_3(VAR_3, 0, &VAR_6);
    if (VAR_3->options & VAR_2 || VAR_13) {
        VAR_4 = VAR_6;
        VAR_7 = VAR_9;
        VAR_5 = VAR_3->s3->tmp.peer_sigalgs;
        VAR_8 = VAR_3->s3->tmp.peer_sigalgslen;
    } else {
        VAR_5 = VAR_6;
        VAR_8 = VAR_9;
        VAR_4 = VAR_3->s3->tmp.peer_sigalgs;
        VAR_7 = VAR_3->s3->tmp.peer_sigalgslen;
    }
    VAR_10 = FUNC_4(VAR_3, ((void*)0), VAR_4, VAR_7, VAR_5, VAR_8);
    if (VAR_10) {
        if ((VAR_11 = FUNC_1(VAR_10 * sizeof(*VAR_11))) == ((void*)0)) {
            FUNC_2(VAR_1, VAR_0);
            return 0;
        }
        VAR_10 = FUNC_4(VAR_3, VAR_11, VAR_4, VAR_7, VAR_5, VAR_8);
    } else {
        VAR_11 = ((void*)0);
    }
    VAR_3->shared_sigalgs = VAR_11;
    VAR_3->shared_sigalgslen = VAR_10;
    return 1;
}
