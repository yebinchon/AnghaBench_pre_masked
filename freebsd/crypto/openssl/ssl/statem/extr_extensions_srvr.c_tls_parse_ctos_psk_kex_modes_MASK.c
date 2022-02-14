
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int X509 ;
struct TYPE_5__ {int psk_kex_mode; } ;
struct TYPE_6__ {int options; TYPE_1__ ext; } ;
typedef TYPE_2__ SSL ;
typedef int PACKET ;


 int FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,unsigned int*) ;
 scalar_t__ FUNC_2 (int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_3 (TYPE_2__*,int ,int ,int ) ;
 int VAR_4 ;
 int VAR_5 ;
 unsigned int VAR_6 ;
 unsigned int VAR_7 ;

int FUNC_4(SSL *VAR_8, PACKET *VAR_9, unsigned int VAR_10,
                                 X509 *VAR_11, size_t VAR_12)
{

    PACKET VAR_13;
    unsigned int VAR_14;

    if (!FUNC_0(VAR_9, &VAR_13)
            || FUNC_2(&VAR_13) == 0) {
        FUNC_3(VAR_8, VAR_0, VAR_1,
                 VAR_3);
        return 0;
    }

    while (FUNC_1(&VAR_13, &VAR_14)) {
        if (VAR_14 == VAR_7)
            VAR_8->ext.psk_kex_mode |= VAR_5;
        else if (VAR_14 == VAR_6
                && (VAR_8->options & VAR_2) != 0)
            VAR_8->ext.psk_kex_mode |= VAR_4;
    }


    return 1;
}
