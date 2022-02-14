
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_6__ ;
typedef struct TYPE_12__ TYPE_5__ ;
typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_13__ {TYPE_3__* s3; TYPE_2__* method; } ;
struct TYPE_12__ {long algorithm2; int algorithm_mkey; } ;
struct TYPE_11__ {TYPE_5__* new_cipher; } ;
struct TYPE_10__ {TYPE_4__ tmp; } ;
struct TYPE_9__ {TYPE_1__* ssl3_enc; } ;
struct TYPE_8__ {int enc_flags; } ;
typedef TYPE_6__ SSL ;


 int VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 int VAR_4 ;
 long VAR_5 ;
 long VAR_6 ;
 long VAR_7 ;

long FUNC_0(SSL *VAR_8)
{
    long VAR_9;
    if (VAR_8->s3 == ((void*)0) || VAR_8->s3->tmp.new_cipher == ((void*)0))
        return -1;
    VAR_9 = VAR_8->s3->tmp.new_cipher->algorithm2;
    if (VAR_8->method->ssl3_enc->enc_flags & VAR_0) {
        if (VAR_9 == (VAR_1 | VAR_5))
            return VAR_2 | VAR_6;
    } else if (VAR_8->s3->tmp.new_cipher->algorithm_mkey & VAR_4) {
        if (VAR_9 == (VAR_3 | VAR_7))
            return VAR_1 | VAR_5;
    }
    return VAR_9;
}
