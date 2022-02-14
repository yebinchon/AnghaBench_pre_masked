
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef scalar_t__ u64 ;
struct TYPE_11__ {int* c; } ;
struct TYPE_10__ {scalar_t__ blocks_hashed; TYPE_2__ sum; TYPE_2__ offset_aad; } ;
struct TYPE_12__ {TYPE_1__ sess; int keyenc; int (* encrypt ) (int*,int*,int ) ;TYPE_2__ l_star; } ;
typedef TYPE_2__ OCB_BLOCK ;
typedef TYPE_3__ OCB128_CONTEXT ;


 int FUNC_0 (int*,unsigned char const*,size_t) ;
 int FUNC_1 (int*,int ,int) ;
 int FUNC_2 (TYPE_2__*,TYPE_2__*,TYPE_2__*) ;
 TYPE_2__* FUNC_3 (TYPE_3__*,int ) ;
 int FUNC_4 (scalar_t__) ;
 int FUNC_5 (int*,int*,int ) ;
 int FUNC_6 (int*,int*,int ) ;

int FUNC_7(OCB128_CONTEXT *VAR_0, const unsigned char *VAR_1,
                      size_t VAR_2)
{
    u64 VAR_3, VAR_4;
    size_t VAR_5, VAR_6;
    OCB_BLOCK VAR_7;


    VAR_5 = VAR_2 / 16;
    VAR_4 = VAR_5 + VAR_0->sess.blocks_hashed;


    for (VAR_3 = VAR_0->sess.blocks_hashed + 1; VAR_3 <= VAR_4; VAR_3++) {
        OCB_BLOCK *VAR_8;


        VAR_8 = FUNC_3(VAR_0, FUNC_4(VAR_3));
        if (VAR_8 == ((void*)0))
            return 0;
        FUNC_2(&VAR_0->sess.offset_aad, VAR_8, &VAR_0->sess.offset_aad);

        FUNC_0(VAR_7.c, VAR_1, 16);
        VAR_1 += 16;


        FUNC_2(&VAR_0->sess.offset_aad, &VAR_7, &VAR_7);
        VAR_0->encrypt(VAR_7.c, VAR_7.c, VAR_0->keyenc);
        FUNC_2(&VAR_7, &VAR_0->sess.sum, &VAR_0->sess.sum);
    }





    VAR_6 = VAR_2 % 16;

    if (VAR_6 > 0) {

        FUNC_2(&VAR_0->sess.offset_aad, &VAR_0->l_star,
                        &VAR_0->sess.offset_aad);


        FUNC_1(VAR_7.c, 0, 16);
        FUNC_0(VAR_7.c, VAR_1, VAR_6);
        VAR_7.c[VAR_6] = 0x80;
        FUNC_2(&VAR_0->sess.offset_aad, &VAR_7, &VAR_7);


        VAR_0->encrypt(VAR_7.c, VAR_7.c, VAR_0->keyenc);
        FUNC_2(&VAR_7, &VAR_0->sess.sum, &VAR_0->sess.sum);
    }

    VAR_0->sess.blocks_hashed = VAR_4;

    return 1;
}
