
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_5__ ;
typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_13__ {TYPE_4__* session; TYPE_3__* s3; } ;
struct TYPE_12__ {int peer; } ;
struct TYPE_10__ {TYPE_1__* new_cipher; } ;
struct TYPE_11__ {TYPE_2__ tmp; int * peer_tmp; } ;
struct TYPE_9__ {int algorithm_auth; } ;
typedef TYPE_5__ SSL ;
typedef int PACKET ;
typedef int EVP_PKEY ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,int ) ;
 unsigned int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,unsigned int*) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned int*) ;
 int FUNC_5 (int *) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_6 (TYPE_5__*,int ,int ,int ) ;
 int * FUNC_7 (int ) ;
 int * FUNC_8 (unsigned int) ;
 int FUNC_9 (TYPE_5__*,unsigned int,int) ;

__attribute__((used)) static int FUNC_10(SSL *VAR_13, PACKET *VAR_14, EVP_PKEY **VAR_15)
{

    PACKET VAR_16;
    unsigned int VAR_17, VAR_18;






    if (!FUNC_2(VAR_14, &VAR_17) || !FUNC_4(VAR_14, &VAR_18)) {
        FUNC_6(VAR_13, VAR_2, VAR_5,
                 VAR_8);
        return 0;
    }




    if (VAR_17 != VAR_1
            || !FUNC_9(VAR_13, VAR_18, 1)) {
        FUNC_6(VAR_13, VAR_3, VAR_5,
                 VAR_10);
        return 0;
    }

    if ((VAR_13->s3->peer_tmp = FUNC_8(VAR_18)) == ((void*)0)) {
        FUNC_6(VAR_13, VAR_4, VAR_5,
                 VAR_9);
        return 0;
    }

    if (!FUNC_3(VAR_14, &VAR_16)) {
        FUNC_6(VAR_13, VAR_2, VAR_5,
                 VAR_7);
        return 0;
    }

    if (!FUNC_0(VAR_13->s3->peer_tmp,
                                        FUNC_1(&VAR_16),
                                        FUNC_5(&VAR_16))) {
        FUNC_6(VAR_13, VAR_3, VAR_5,
                 VAR_6);
        return 0;
    }






    if (VAR_13->s3->tmp.new_cipher->algorithm_auth & VAR_11)
        *VAR_15 = FUNC_7(VAR_13->session->peer);
    else if (VAR_13->s3->tmp.new_cipher->algorithm_auth & VAR_12)
        *VAR_15 = FUNC_7(VAR_13->session->peer);


    return 1;





}
