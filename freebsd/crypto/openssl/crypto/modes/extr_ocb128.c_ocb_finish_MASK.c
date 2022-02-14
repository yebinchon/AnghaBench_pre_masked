
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct TYPE_11__ {int c; } ;
struct TYPE_10__ {TYPE_2__ sum; TYPE_2__ offset; TYPE_2__ checksum; } ;
struct TYPE_12__ {TYPE_1__ sess; int keyenc; int (* encrypt ) (int ,int ,int ) ;TYPE_2__ l_dollar; } ;
typedef TYPE_2__ OCB_BLOCK ;
typedef TYPE_3__ OCB128_CONTEXT ;


 int FUNC_0 (TYPE_2__*,unsigned char*,size_t) ;
 int FUNC_1 (unsigned char*,TYPE_2__*,size_t) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 int FUNC_3 (int ,int ,int ) ;

__attribute__((used)) static int FUNC_4(OCB128_CONTEXT *VAR_0, unsigned char *VAR_1, size_t VAR_2,
                      int VAR_3)
{
    OCB_BLOCK VAR_4;

    if (VAR_2 > 16 || VAR_2 < 1) {
        return -1;
    }




    FUNC_2(&VAR_0->sess.checksum, &VAR_0->sess.offset, &VAR_4);
    FUNC_2(&VAR_0->l_dollar, &VAR_4, &VAR_4);
    VAR_0->encrypt(VAR_4.c, VAR_4.c, VAR_0->keyenc);
    FUNC_2(&VAR_4, &VAR_0->sess.sum, &VAR_4);

    if (VAR_3) {
        FUNC_1(VAR_1, &VAR_4, VAR_2);
        return 1;
    } else {
        return FUNC_0(&VAR_4, VAR_1, VAR_2);
    }
}
