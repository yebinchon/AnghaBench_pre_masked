
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_7__ {TYPE_1__* s3; } ;
struct TYPE_6__ {int alpn_proposed_len; int * alpn_proposed; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int **,int *) ;
 int FUNC_4 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_5 (TYPE_2__*) ;
 int VAR_4 ;
 int FUNC_6 (TYPE_2__*,int ,int ,int ) ;

int FUNC_7(SSL *VAR_5, PACKET *VAR_6, unsigned int VAR_7, X509 *VAR_8,
                        size_t VAR_9)
{
    PACKET VAR_10, VAR_11, VAR_12;

    if (!FUNC_5(VAR_5))
        return 1;

    if (!FUNC_1(VAR_6, &VAR_10)
        || FUNC_4(&VAR_10) < 2) {
        FUNC_6(VAR_5, VAR_1, VAR_3,
                 VAR_4);
        return 0;
    }

    VAR_11 = VAR_10;
    do {

        if (!FUNC_2(&VAR_10, &VAR_12)
                || FUNC_4(&VAR_12) == 0) {
            FUNC_6(VAR_5, VAR_1, VAR_3,
                     VAR_4);
            return 0;
        }
    } while (FUNC_4(&VAR_10) != 0);

    FUNC_0(VAR_5->s3->alpn_proposed);
    VAR_5->s3->alpn_proposed = ((void*)0);
    VAR_5->s3->alpn_proposed_len = 0;
    if (!FUNC_3(&VAR_11,
                       &VAR_5->s3->alpn_proposed, &VAR_5->s3->alpn_proposed_len)) {
        FUNC_6(VAR_5, VAR_2, VAR_3,
                 VAR_0);
        return 0;
    }

    return 1;
}
