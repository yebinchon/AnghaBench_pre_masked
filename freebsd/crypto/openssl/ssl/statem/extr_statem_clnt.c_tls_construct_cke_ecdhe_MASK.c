
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int WPACKET ;
struct TYPE_7__ {TYPE_1__* s3; } ;
struct TYPE_6__ {int * peer_tmp; } ;
typedef TYPE_2__ SSL ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 size_t FUNC_1 (int *,unsigned char**) ;
 int FUNC_2 (unsigned char*) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int FUNC_4 (int *,unsigned char*,size_t) ;
 scalar_t__ FUNC_5 (TYPE_2__*,int *,int *,int ) ;
 int * FUNC_6 (int *) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_5, WPACKET *VAR_6)
{

    unsigned char *VAR_7 = ((void*)0);
    size_t VAR_8 = 0;
    EVP_PKEY *VAR_9 = ((void*)0), *VAR_10 = ((void*)0);
    int VAR_11 = 0;

    VAR_10 = VAR_5->s3->peer_tmp;
    if (VAR_10 == ((void*)0)) {
        FUNC_3(VAR_5, VAR_3, VAR_4,
                 VAR_1);
        return 0;
    }

    VAR_9 = FUNC_6(VAR_10);
    if (VAR_9 == ((void*)0)) {
        FUNC_3(VAR_5, VAR_3, VAR_4,
                 VAR_2);
        goto err;
    }

    if (FUNC_5(VAR_5, VAR_9, VAR_10, 0) == 0) {

        goto err;
    }


    VAR_8 = FUNC_1(VAR_9, &VAR_7);

    if (VAR_8 == 0) {
        FUNC_3(VAR_5, VAR_3, VAR_4,
                 VAR_0);
        goto err;
    }

    if (!FUNC_4(VAR_6, VAR_7, VAR_8)) {
        FUNC_3(VAR_5, VAR_3, VAR_4,
                 VAR_1);
        goto err;
    }

    VAR_11 = 1;
 err:
    FUNC_2(VAR_7);
    FUNC_0(VAR_9);
    return VAR_11;





}
