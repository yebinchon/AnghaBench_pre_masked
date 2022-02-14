
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
typedef int WPACKET ;
struct TYPE_5__ {int psk_kex_mode; } ;
struct TYPE_6__ {int options; TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int EXT_RETURN ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (TYPE_2__*,int ,int ,int ) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *,int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

EXT_RETURN FUNC_6(SSL *VAR_11, WPACKET *VAR_12,
                                            unsigned int VAR_13, X509 *VAR_14,
                                            size_t VAR_15)
{

    int VAR_16 = VAR_11->options & VAR_5;

    if (!FUNC_2(VAR_12, VAR_10)
            || !FUNC_4(VAR_12)
            || !FUNC_5(VAR_12)
            || !FUNC_3(VAR_12, VAR_9)
            || (VAR_16 && !FUNC_3(VAR_12, VAR_8))
            || !FUNC_1(VAR_12)
            || !FUNC_1(VAR_12)) {
        FUNC_0(VAR_11, VAR_3,
                 VAR_4, VAR_0);
        return VAR_1;
    }

    VAR_11->ext.psk_kex_mode = VAR_7;
    if (VAR_16)
        VAR_11->ext.psk_kex_mode |= VAR_6;


    return VAR_2;
}
