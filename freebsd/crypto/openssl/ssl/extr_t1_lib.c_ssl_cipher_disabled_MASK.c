
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_4__ ;
typedef struct TYPE_11__ TYPE_3__ ;
typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_12__ {TYPE_2__* s3; } ;
struct TYPE_11__ {int algorithm_mkey; int algorithm_auth; int min_tls; scalar_t__ max_tls; int strength_bits; int max_dtls; int min_dtls; } ;
struct TYPE_9__ {int mask_k; int mask_a; scalar_t__ max_ver; scalar_t__ min_ver; } ;
struct TYPE_10__ {TYPE_1__ tmp; } ;
typedef TYPE_3__ SSL_CIPHER ;
typedef TYPE_4__ SSL ;


 scalar_t__ FUNC_0 (int ,int) ;
 scalar_t__ FUNC_1 (int ,scalar_t__) ;
 int VAR_0 ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_4__*,int,int ,int ,void*) ;

int FUNC_4(SSL *VAR_4, const SSL_CIPHER *VAR_5, int VAR_6, int VAR_7)
{
    if (VAR_5->algorithm_mkey & VAR_4->s3->tmp.mask_k
        || VAR_5->algorithm_auth & VAR_4->s3->tmp.mask_a)
        return 1;
    if (VAR_4->s3->tmp.max_ver == 0)
        return 1;
    if (!FUNC_2(VAR_4)) {
        int VAR_8 = VAR_5->min_tls;





        if (VAR_8 == VAR_3 && VAR_7
                && (VAR_5->algorithm_mkey & (VAR_1 | VAR_2)) != 0)
            VAR_8 = VAR_0;

        if ((VAR_8 > VAR_4->s3->tmp.max_ver) || (VAR_5->max_tls < VAR_4->s3->tmp.min_ver))
            return 1;
    }
    if (FUNC_2(VAR_4) && (FUNC_0(VAR_5->min_dtls, VAR_4->s3->tmp.max_ver)
                           || FUNC_1(VAR_5->max_dtls, VAR_4->s3->tmp.min_ver)))
        return 1;

    return !FUNC_3(VAR_4, VAR_6, VAR_5->strength_bits, 0, (void *)VAR_5);
}
