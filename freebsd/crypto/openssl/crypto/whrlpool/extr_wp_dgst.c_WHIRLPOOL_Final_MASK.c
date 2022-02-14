
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int c; } ;
struct TYPE_7__ {unsigned int bitoff; int* data; size_t* bitlen; TYPE_1__ H; } ;
typedef TYPE_2__ WHIRLPOOL_CTX ;


 int FUNC_0 (TYPE_2__*,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (unsigned char*,int ,int ) ;
 int FUNC_2 (int*,int ,int) ;
 int FUNC_3 (TYPE_2__*,int*,int) ;

int FUNC_4(unsigned char *VAR_3, WHIRLPOOL_CTX *VAR_4)
{
    unsigned int VAR_5 = VAR_4->bitoff, VAR_6 = VAR_5 / 8;
    size_t VAR_7, VAR_8, VAR_9;
    unsigned char *VAR_10;

    VAR_5 %= 8;
    if (VAR_5)
        VAR_4->data[VAR_6] |= 0x80 >> VAR_5;
    else
        VAR_4->data[VAR_6] = 0x80;
    VAR_6++;


    if (VAR_6 > (VAR_0 / 8 - VAR_1)) {
        if (VAR_6 < VAR_0 / 8)
            FUNC_2(&VAR_4->data[VAR_6], 0, VAR_0 / 8 - VAR_6);
        FUNC_3(VAR_4, VAR_4->data, 1);
        VAR_6 = 0;
    }
    if (VAR_6 < (VAR_0 / 8 - VAR_1))
        FUNC_2(&VAR_4->data[VAR_6], 0,
               (VAR_0 / 8 - VAR_1) - VAR_6);

    VAR_10 = &VAR_4->data[VAR_0 / 8 - 1];
    for (VAR_7 = 0; VAR_7 < VAR_1 / sizeof(size_t); VAR_7++)
        for (VAR_9 = VAR_4->bitlen[VAR_7], VAR_8 = 0; VAR_8 < sizeof(size_t); VAR_8++, VAR_9 >>= 8)
            *VAR_10-- = (unsigned char)(VAR_9 & 0xff);

    FUNC_3(VAR_4, VAR_4->data, 1);

    if (VAR_3) {
        FUNC_1(VAR_3, VAR_4->H.c, VAR_2);
        FUNC_0(VAR_4, sizeof(*VAR_4));
        return 1;
    }
    return 0;
}
