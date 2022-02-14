
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef scalar_t__ l ;
struct TYPE_3__ {int flags; } ;
typedef TYPE_1__ EVP_ENCODE_CTX ;


 scalar_t__ FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (unsigned char const,unsigned char const*) ;
 unsigned char* VAR_2 ;
 unsigned char* VAR_3 ;

__attribute__((used)) static int FUNC_2(EVP_ENCODE_CTX *VAR_4, unsigned char *VAR_5,
                               const unsigned char *VAR_6, int VAR_7)
{
    int VAR_8, VAR_9 = 0, VAR_10, VAR_11, VAR_12, VAR_13;
    unsigned long VAR_14;
    const unsigned char *VAR_15;

    if (VAR_4 != ((void*)0) && (VAR_4->flags & VAR_1) != 0)
        VAR_15 = VAR_3;
    else
        VAR_15 = VAR_2;


    while ((FUNC_1(*VAR_6, VAR_15) == VAR_0) && (VAR_7 > 0)) {
        VAR_6++;
        VAR_7--;
    }





    while ((VAR_7 > 3) && (FUNC_0(FUNC_1(VAR_6[VAR_7 - 1], VAR_15))))
        VAR_7--;

    if (VAR_7 % 4 != 0)
        return -1;

    for (VAR_8 = 0; VAR_8 < VAR_7; VAR_8 += 4) {
        VAR_10 = FUNC_1(*(VAR_6++), VAR_15);
        VAR_11 = FUNC_1(*(VAR_6++), VAR_15);
        VAR_12 = FUNC_1(*(VAR_6++), VAR_15);
        VAR_13 = FUNC_1(*(VAR_6++), VAR_15);
        if ((VAR_10 & 0x80) || (VAR_11 & 0x80) || (VAR_12 & 0x80) || (VAR_13 & 0x80))
            return -1;
        VAR_14 = ((((unsigned long)VAR_10) << 18L) |
             (((unsigned long)VAR_11) << 12L) |
             (((unsigned long)VAR_12) << 6L) | (((unsigned long)VAR_13)));
        *(VAR_5++) = (unsigned char)(VAR_14 >> 16L) & 0xff;
        *(VAR_5++) = (unsigned char)(VAR_14 >> 8L) & 0xff;
        *(VAR_5++) = (unsigned char)(VAR_14) & 0xff;
        VAR_9 += 3;
    }
    return VAR_9;
}
