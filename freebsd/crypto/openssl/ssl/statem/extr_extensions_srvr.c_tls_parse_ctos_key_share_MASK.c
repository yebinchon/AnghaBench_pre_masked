
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


typedef int uint16_t ;
typedef int X509 ;
struct TYPE_9__ {int psk_kex_mode; } ;
struct TYPE_11__ {TYPE_2__* s3; TYPE_1__ ext; scalar_t__ hit; } ;
struct TYPE_10__ {unsigned int group_id; int * peer_tmp; } ;
typedef TYPE_3__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *,int ,scalar_t__) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *,unsigned int*) ;
 scalar_t__ FUNC_5 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_6 (TYPE_3__*,int ,int ,int ) ;
 int VAR_11 ;
 int FUNC_7 (TYPE_3__*,unsigned int,int const*,size_t,int) ;
 int * FUNC_8 (unsigned int) ;
 int FUNC_9 (TYPE_3__*,int const**,size_t*) ;
 int FUNC_10 (TYPE_3__*,int const**,size_t*) ;

int FUNC_11(SSL *VAR_12, PACKET *VAR_13, unsigned int VAR_14, X509 *VAR_15,
                             size_t VAR_16)
{

    unsigned int VAR_17;
    PACKET VAR_18, VAR_19;
    const uint16_t *VAR_20, *VAR_21;
    size_t VAR_22, VAR_23;
    int VAR_24 = 0;

    if (VAR_12->hit && (VAR_12->ext.psk_kex_mode & VAR_11) == 0)
        return 1;


    if (VAR_12->s3->peer_tmp != ((void*)0)) {
        FUNC_6(VAR_12, VAR_3, VAR_5,
                 VAR_0);
        return 0;
    }

    if (!FUNC_1(VAR_13, &VAR_18)) {
        FUNC_6(VAR_12, VAR_1, VAR_5,
                 VAR_8);
        return 0;
    }


    FUNC_10(VAR_12, &VAR_21, &VAR_23);

    FUNC_9(VAR_12, &VAR_20, &VAR_22);
    if (VAR_22 == 0) {





        FUNC_6(VAR_12, VAR_4, VAR_5,
                 VAR_9);
        return 0;
    }

    if (VAR_12->s3->group_id != 0 && FUNC_5(&VAR_18) == 0) {





        FUNC_6(VAR_12, VAR_2, VAR_5,
                 VAR_7);
        return 0;
    }

    while (FUNC_5(&VAR_18) > 0) {
        if (!FUNC_4(&VAR_18, &VAR_17)
                || !FUNC_3(&VAR_18, &VAR_19)
                || FUNC_5(&VAR_19) == 0) {
            FUNC_6(VAR_12, VAR_1, VAR_5,
                     VAR_8);
            return 0;
        }





        if (VAR_24)
            continue;





        if (VAR_12->s3->group_id != 0
                && (VAR_17 != VAR_12->s3->group_id
                    || FUNC_5(&VAR_18) != 0)) {
            FUNC_6(VAR_12, VAR_2,
                     VAR_5, VAR_7);
            return 0;
        }


        if (!FUNC_7(VAR_12, VAR_17, VAR_20, VAR_22, 0)) {
            FUNC_6(VAR_12, VAR_2,
                     VAR_5, VAR_7);
            return 0;
        }


        if (!FUNC_7(VAR_12, VAR_17, VAR_21, VAR_23, 1)) {

            continue;
        }

        if ((VAR_12->s3->peer_tmp = FUNC_8(VAR_17)) == ((void*)0)) {
            FUNC_6(VAR_12, VAR_3, VAR_5,
                   VAR_10);
            return 0;
        }

        VAR_12->s3->group_id = VAR_17;

        if (!FUNC_0(VAR_12->s3->peer_tmp,
                FUNC_2(&VAR_19),
                FUNC_5(&VAR_19))) {
            FUNC_6(VAR_12, VAR_2,
                     VAR_5, VAR_6);
            return 0;
        }

        VAR_24 = 1;
    }


    return 1;
}
