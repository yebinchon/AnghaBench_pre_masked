
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_5__ ;
typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_13__ {unsigned char npn_len; int * npn; } ;
struct TYPE_15__ {TYPE_4__* s3; TYPE_3__ ext; TYPE_2__* ctx; } ;
struct TYPE_14__ {int npn_seen; } ;
struct TYPE_11__ {scalar_t__ (* npn_select_cb ) (TYPE_5__*,unsigned char**,unsigned char*,int ,int ,int ) ;int npn_select_cb_arg; } ;
struct TYPE_12__ {TYPE_1__ ext; } ;
typedef TYPE_5__ SSL ;
typedef int PACKET ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (unsigned char) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_4 (TYPE_5__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_5 (TYPE_5__*,int ,int ,int ) ;
 int FUNC_6 (int *,unsigned char*,unsigned char) ;
 int FUNC_7 (TYPE_5__*,int *) ;
 scalar_t__ FUNC_8 (TYPE_5__*,unsigned char**,unsigned char*,int ,int ,int ) ;

int FUNC_9(SSL *VAR_7, PACKET *VAR_8, unsigned int VAR_9, X509 *VAR_10,
                       size_t VAR_11)
{
    unsigned char *VAR_12;
    unsigned char VAR_13;
    PACKET VAR_14;


    if (!FUNC_4(VAR_7))
        return 1;


    if (VAR_7->ctx->ext.npn_select_cb == ((void*)0)) {
        FUNC_5(VAR_7, VAR_3, VAR_4,
                 VAR_5);
        return 0;
    }


    VAR_14 = *VAR_8;
    if (!FUNC_7(VAR_7, &VAR_14)) {

        return 0;
    }
    if (VAR_7->ctx->ext.npn_select_cb(VAR_7, &VAR_12, &VAR_13,
                                  FUNC_2(VAR_8),
                                  FUNC_3(VAR_8),
                                  VAR_7->ctx->ext.npn_select_cb_arg) !=
             VAR_6) {
        FUNC_5(VAR_7, VAR_1, VAR_4,
                 VAR_5);
        return 0;
    }





    FUNC_0(VAR_7->ext.npn);
    VAR_7->ext.npn = FUNC_1(VAR_13);
    if (VAR_7->ext.npn == ((void*)0)) {
        FUNC_5(VAR_7, VAR_2, VAR_4,
                 VAR_0);
        return 0;
    }

    FUNC_6(VAR_7->ext.npn, VAR_12, VAR_13);
    VAR_7->ext.npn_len = VAR_13;
    VAR_7->s3->npn_seen = 1;

    return 1;
}
