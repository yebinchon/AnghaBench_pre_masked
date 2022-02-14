
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int * h; scalar_t__ buflen; scalar_t__ buf; } ;
typedef TYPE_1__ BLAKE2S_CTX ;


 int FUNC_0 (TYPE_1__*,int) ;
 int FUNC_1 (TYPE_1__*,scalar_t__,scalar_t__) ;
 int FUNC_2 (TYPE_1__*) ;
 int FUNC_3 (scalar_t__,int ,scalar_t__) ;
 int FUNC_4 (unsigned char*,int ) ;

int FUNC_5(unsigned char *VAR_0, BLAKE2S_CTX *VAR_1)
{
    int VAR_2;

    FUNC_2(VAR_1);

    FUNC_3(VAR_1->buf + VAR_1->buflen, 0, sizeof(VAR_1->buf) - VAR_1->buflen);
    FUNC_1(VAR_1, VAR_1->buf, VAR_1->buflen);


    for (VAR_2 = 0; VAR_2 < 8; ++VAR_2) {
        FUNC_4(VAR_0 + sizeof(VAR_1->h[VAR_2]) * VAR_2, VAR_1->h[VAR_2]);
    }

    FUNC_0(VAR_1, sizeof(BLAKE2S_CTX));
    return 1;
}
