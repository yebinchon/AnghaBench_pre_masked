
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_9__ {TYPE_2__* session; TYPE_1__* s3; } ;
struct TYPE_8__ {int master_key; scalar_t__ master_key_length; } ;
struct TYPE_7__ {int handshake_dgst; } ;
typedef TYPE_3__ SSL ;
typedef int EVP_MD_CTX ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int *,unsigned char*,int *) ;
 scalar_t__ FUNC_1 (int *,char const*,size_t) ;
 int FUNC_2 (int *,int ) ;
 scalar_t__ FUNC_3 (int *,int ,int,int ) ;
 int FUNC_4 (int *) ;
 int * FUNC_5 () ;
 int FUNC_6 (int *) ;
 scalar_t__ FUNC_7 (int ) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_8 (TYPE_3__*,int ,int ,int ) ;
 int FUNC_9 (TYPE_3__*,int ) ;

size_t FUNC_10(SSL *VAR_7, const char *VAR_8, size_t VAR_9,
                             unsigned char *VAR_10)
{
    int VAR_11;
    EVP_MD_CTX *VAR_12 = ((void*)0);

    if (!FUNC_9(VAR_7, 0)) {

        return 0;
    }

    if (FUNC_7(VAR_7->s3->handshake_dgst) != VAR_3) {
        FUNC_8(VAR_7, VAR_4, VAR_5,
                 VAR_6);
        return 0;
    }

    VAR_12 = FUNC_5();
    if (VAR_12 == ((void*)0)) {
        FUNC_8(VAR_7, VAR_4, VAR_5,
                 VAR_1);
        return 0;
    }
    if (!FUNC_2(VAR_12, VAR_7->s3->handshake_dgst)) {
        FUNC_8(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        VAR_11 = 0;
        goto err;
    }

    VAR_11 = FUNC_6(VAR_12);
    if (VAR_11 < 0) {
        FUNC_8(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        VAR_11 = 0;
        goto err;
    }

    if ((VAR_8 != ((void*)0) && FUNC_1(VAR_12, VAR_8, VAR_9) <= 0)
        || FUNC_3(VAR_12, VAR_2,
                           (int)VAR_7->session->master_key_length,
                           VAR_7->session->master_key) <= 0
        || FUNC_0(VAR_12, VAR_10, ((void*)0)) <= 0) {
        FUNC_8(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        VAR_11 = 0;
    }

 err:
    FUNC_4(VAR_12);

    return VAR_11;
}
