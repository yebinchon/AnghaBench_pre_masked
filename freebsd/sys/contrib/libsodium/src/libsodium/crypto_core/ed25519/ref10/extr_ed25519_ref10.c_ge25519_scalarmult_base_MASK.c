
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ge25519_precomp ;
typedef int ge25519_p3 ;
typedef int ge25519_p2 ;
typedef int ge25519_p1p1 ;


 int FUNC_0 (int *,int *,int *) ;
 int FUNC_1 (int *,int *) ;
 int FUNC_2 (int *,int *) ;
 int FUNC_3 (int *,int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 int FUNC_6 (int *,int,char) ;

void
FUNC_7(ge25519_p3 *VAR_0, const unsigned char *VAR_1)
{
    signed char VAR_2[64];
    signed char VAR_3;
    ge25519_p1p1 VAR_4;
    ge25519_p2 VAR_5;
    ge25519_precomp VAR_6;
    int VAR_7;

    for (VAR_7 = 0; VAR_7 < 32; ++VAR_7) {
        VAR_2[2 * VAR_7 + 0] = (VAR_1[VAR_7] >> 0) & 15;
        VAR_2[2 * VAR_7 + 1] = (VAR_1[VAR_7] >> 4) & 15;
    }



    VAR_3 = 0;
    for (VAR_7 = 0; VAR_7 < 63; ++VAR_7) {
        VAR_2[VAR_7] += VAR_3;
        VAR_3 = VAR_2[VAR_7] + 8;
        VAR_3 >>= 4;
        VAR_2[VAR_7] -= VAR_3 * ((signed char) 1 << 4);
    }
    VAR_2[63] += VAR_3;


    FUNC_4(VAR_0);

    for (VAR_7 = 1; VAR_7 < 64; VAR_7 += 2) {
        FUNC_6(&VAR_6, VAR_7 / 2, VAR_2[VAR_7]);
        FUNC_0(&VAR_4, VAR_0, &VAR_6);
        FUNC_2(VAR_0, &VAR_4);
    }

    FUNC_5(&VAR_4, VAR_0);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_3(&VAR_4, &VAR_5);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_3(&VAR_4, &VAR_5);
    FUNC_1(&VAR_5, &VAR_4);
    FUNC_3(&VAR_4, &VAR_5);
    FUNC_2(VAR_0, &VAR_4);

    for (VAR_7 = 0; VAR_7 < 64; VAR_7 += 2) {
        FUNC_6(&VAR_6, VAR_7 / 2, VAR_2[VAR_7]);
        FUNC_0(&VAR_4, VAR_0, &VAR_6);
        FUNC_2(VAR_0, &VAR_4);
    }
}
