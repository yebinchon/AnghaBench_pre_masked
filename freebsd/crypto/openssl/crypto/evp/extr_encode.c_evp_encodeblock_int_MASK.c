
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ EVP_ENCODE_CTX ;


 int VAR_0 ;
 char FUNC_0 (unsigned long,unsigned char const*) ;
 unsigned char* VAR_1 ;
 unsigned char* VAR_2 ;

__attribute__((used)) static int FUNC_1(EVP_ENCODE_CTX *VAR_3, unsigned char *VAR_4,
                               const unsigned char *VAR_5, int VAR_6)
{
    int VAR_7, VAR_8 = 0;
    unsigned long VAR_9;
    const unsigned char *VAR_10;

    if (VAR_3 != ((void*)0) && (VAR_3->flags & VAR_0) != 0)
        VAR_10 = VAR_2;
    else
        VAR_10 = VAR_1;

    for (VAR_7 = VAR_6; VAR_7 > 0; VAR_7 -= 3) {
        if (VAR_7 >= 3) {
            VAR_9 = (((unsigned long)VAR_5[0]) << 16L) |
                (((unsigned long)VAR_5[1]) << 8L) | VAR_5[2];
            *(VAR_4++) = FUNC_0(VAR_9 >> 18L, VAR_10);
            *(VAR_4++) = FUNC_0(VAR_9 >> 12L, VAR_10);
            *(VAR_4++) = FUNC_0(VAR_9 >> 6L, VAR_10);
            *(VAR_4++) = FUNC_0(VAR_9, VAR_10);
        } else {
            VAR_9 = ((unsigned long)VAR_5[0]) << 16L;
            if (VAR_7 == 2)
                VAR_9 |= ((unsigned long)VAR_5[1] << 8L);

            *(VAR_4++) = FUNC_0(VAR_9 >> 18L, VAR_10);
            *(VAR_4++) = FUNC_0(VAR_9 >> 12L, VAR_10);
            *(VAR_4++) = (VAR_7 == 1) ? '=' : FUNC_0(VAR_9 >> 6L, VAR_10);
            *(VAR_4++) = '=';
        }
        VAR_8 += 4;
        VAR_5 += 3;
    }

    *VAR_4 = '\0';
    return VAR_8;
}
