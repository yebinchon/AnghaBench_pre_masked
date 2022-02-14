
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_11__ {TYPE_4__* cert; TYPE_3__* s3; } ;
struct TYPE_10__ {scalar_t__ psk_identity_hint; } ;
struct TYPE_8__ {TYPE_1__* new_cipher; } ;
struct TYPE_9__ {TYPE_2__ tmp; } ;
struct TYPE_7__ {unsigned long algorithm_mkey; } ;
typedef TYPE_5__ SSL ;


 unsigned long VAR_0 ;
 unsigned long VAR_1 ;
 unsigned long VAR_2 ;
 unsigned long VAR_3 ;
 unsigned long VAR_4 ;
 unsigned long VAR_5 ;
 unsigned long VAR_6 ;
 unsigned long VAR_7 ;

__attribute__((used)) static int FUNC_0(SSL *VAR_8)
{
    unsigned long VAR_9 = VAR_8->s3->tmp.new_cipher->algorithm_mkey;
    if (VAR_9 & (VAR_1 | VAR_3)






        || ((VAR_9 & (VAR_5 | VAR_6))
            && VAR_8->cert->psk_identity_hint)

        || (VAR_9 & (VAR_0 & (VAR_2 | VAR_4)))



        || (VAR_9 & VAR_7)

        ) {
        return 1;
    }

    return 0;
}
