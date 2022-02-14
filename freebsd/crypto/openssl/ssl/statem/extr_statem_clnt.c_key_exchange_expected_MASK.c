
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_9__ {TYPE_3__* s3; } ;
struct TYPE_7__ {TYPE_1__* new_cipher; } ;
struct TYPE_8__ {TYPE_2__ tmp; } ;
struct TYPE_6__ {long algorithm_mkey; } ;
typedef TYPE_4__ SSL ;


 long VAR_0 ;
 long VAR_1 ;
 long VAR_2 ;
 long VAR_3 ;
 long VAR_4 ;

__attribute__((used)) static int FUNC_0(SSL *VAR_5)
{
    long VAR_6 = VAR_5->s3->tmp.new_cipher->algorithm_mkey;





    if (VAR_6 & (VAR_0 | VAR_2 | VAR_1 | VAR_3
                 | VAR_4)) {
        return 1;
    }

    return 0;
}
