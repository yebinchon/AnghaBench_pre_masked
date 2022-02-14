
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef unsigned int uint16_t ;
struct TYPE_12__ {int psk_kex_mode; int cookieok; } ;
struct TYPE_13__ {scalar_t__ hello_retry_request; TYPE_2__ ext; TYPE_1__* s3; int hit; scalar_t__ server; } ;
struct TYPE_11__ {int flags; unsigned int group_id; int * peer_tmp; } ;
typedef TYPE_3__ SSL ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 unsigned int VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 int FUNC_0 (TYPE_3__*) ;
 int VAR_9 ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 scalar_t__ FUNC_2 (TYPE_3__*,unsigned int,unsigned int const*,size_t,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (TYPE_3__*,int *,int ) ;
 int FUNC_5 (TYPE_3__*,unsigned int const**,size_t*) ;
 int FUNC_6 (TYPE_3__*,unsigned int const**,size_t*) ;

__attribute__((used)) static int FUNC_7(SSL *VAR_13, unsigned int VAR_14, int VAR_15)
{
    if (!FUNC_0(VAR_13))
        return 1;


    if ((VAR_14 & VAR_4) != 0)
        return 1;
    if (!VAR_13->server
            && !VAR_15
            && (!VAR_13->hit
                || (VAR_13->ext.psk_kex_mode & VAR_11) == 0)) {

        FUNC_1(VAR_13, VAR_3, VAR_5,
                 VAR_9);
        return 0;
    }
    if (VAR_13->server) {
        if (VAR_13->s3->peer_tmp != ((void*)0)) {

            if ((VAR_13->s3->flags & VAR_10) != 0
                    && !VAR_13->ext.cookieok) {
                if (!FUNC_3(VAR_13->hello_retry_request == VAR_7)) {





                    FUNC_1(VAR_13, VAR_2, VAR_5,
                             VAR_0);
                    return 0;
                }
                VAR_13->hello_retry_request = VAR_8;
                return 1;
            }
        } else {

            if (VAR_13->hello_retry_request == VAR_7 && VAR_15
                    && (!VAR_13->hit
                        || (VAR_13->ext.psk_kex_mode & VAR_12)
                           != 0)) {
                const uint16_t *VAR_16, *VAR_17;
                size_t VAR_18, VAR_19, VAR_20;
                unsigned int VAR_21 = 0;




                FUNC_5(VAR_13, &VAR_17, &VAR_19);
                FUNC_6(VAR_13, &VAR_16, &VAR_18);




                for (VAR_20 = 0; VAR_20 < VAR_18; VAR_20++) {
                    VAR_21 = VAR_16[VAR_20];

                    if (FUNC_2(VAR_13, VAR_21, VAR_17, VAR_19,
                                      1))
                        break;
                }

                if (VAR_20 < VAR_18) {

                    VAR_13->s3->group_id = VAR_21;
                    VAR_13->hello_retry_request = VAR_8;
                    return 1;
                }
            }
            if (!VAR_13->hit
                    || (VAR_13->ext.psk_kex_mode & VAR_11) == 0) {

                FUNC_1(VAR_13, VAR_15 ? VAR_1
                                 : VAR_3,
                         VAR_5, VAR_9);
                return 0;
            }

            if ((VAR_13->s3->flags & VAR_10) != 0
                    && !VAR_13->ext.cookieok) {
                if (!FUNC_3(VAR_13->hello_retry_request == VAR_7)) {





                    FUNC_1(VAR_13, VAR_2, VAR_5,
                             VAR_0);
                    return 0;
                }
                VAR_13->hello_retry_request = VAR_8;
                return 1;
            }
        }





        if (VAR_13->hello_retry_request == VAR_8)
            VAR_13->hello_retry_request = VAR_6;
    } else {





        if (!VAR_15 && !FUNC_4(VAR_13, ((void*)0), 0)) {
            FUNC_1(VAR_13, VAR_2, VAR_5,
                     VAR_0);
            return 0;
        }
    }

    return 1;
}
