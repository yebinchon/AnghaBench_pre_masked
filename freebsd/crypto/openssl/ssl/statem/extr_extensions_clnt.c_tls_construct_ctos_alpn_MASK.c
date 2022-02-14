
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_8__ {int alpn_len; int * alpn; } ;
struct TYPE_9__ {TYPE_1__* s3; TYPE_2__ ext; } ;
struct TYPE_7__ {int alpn_sent; } ;
typedef TYPE_3__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_3__*) ;
 int FUNC_1 (TYPE_3__*,int ,int ,int ) ;
 int VAR_6 ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *,int ) ;

EXT_RETURN FUNC_6(SSL *VAR_7, WPACKET *VAR_8, unsigned int VAR_9,
                                   X509 *VAR_10, size_t VAR_11)
{
    VAR_7->s3->alpn_sent = 0;

    if (VAR_7->ext.alpn == ((void*)0) || !FUNC_0(VAR_7))
        return VAR_2;

    if (!FUNC_3(VAR_8,
                VAR_6)

            || !FUNC_4(VAR_8)
            || !FUNC_5(VAR_8, VAR_7->ext.alpn, VAR_7->ext.alpn_len)
            || !FUNC_2(VAR_8)) {
        FUNC_1(VAR_7, VAR_4, VAR_5,
                 VAR_0);
        return VAR_1;
    }
    VAR_7->s3->alpn_sent = 1;

    return VAR_3;
}
