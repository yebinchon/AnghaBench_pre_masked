
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_11__ {TYPE_3__* s3; TYPE_2__* ctx; } ;
struct TYPE_10__ {int npn_seen; } ;
struct TYPE_8__ {int (* npn_advertised_cb ) (TYPE_4__*,unsigned char const**,unsigned int*,int ) ;int npn_advertised_cb_arg; } ;
struct TYPE_9__ {TYPE_1__ ext; } ;
typedef TYPE_4__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (TYPE_4__*,int ,int ,int ) ;
 int VAR_7 ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,unsigned char const*,unsigned int) ;
 int FUNC_3 (TYPE_4__*,unsigned char const**,unsigned int*,int ) ;

EXT_RETURN FUNC_4(SSL *VAR_8, WPACKET *VAR_9,
                                             unsigned int VAR_10, X509 *VAR_11,
                                             size_t VAR_12)
{
    const unsigned char *VAR_13;
    unsigned int VAR_14;
    int VAR_15;
    int VAR_16 = VAR_8->s3->npn_seen;

    VAR_8->s3->npn_seen = 0;
    if (!VAR_16 || VAR_8->ctx->ext.npn_advertised_cb == ((void*)0))
        return VAR_2;

    VAR_15 = VAR_8->ctx->ext.npn_advertised_cb(VAR_8, &VAR_13, &VAR_14,
                                        VAR_8->ctx->ext.npn_advertised_cb_arg);
    if (VAR_15 == VAR_6) {
        if (!FUNC_1(VAR_9, VAR_7)
                || !FUNC_2(VAR_9, VAR_13, VAR_14)) {
            FUNC_0(VAR_8, VAR_4,
                     VAR_5,
                     VAR_0);
            return VAR_1;
        }
        VAR_8->s3->npn_seen = 1;
    }

    return VAR_3;
}
