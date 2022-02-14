
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int ks ;
typedef int DES_key_schedule ;
typedef unsigned char* DES_cblock ;


 int FUNC_0 (unsigned char const*,unsigned char**,int,int *,unsigned char**) ;
 int FUNC_1 (unsigned char**,int *) ;
 int FUNC_2 (unsigned char**) ;
 int FUNC_3 (int *,int) ;
 int FUNC_4 (unsigned char**,int ,int) ;
 int FUNC_5 (char const*) ;

void FUNC_6(const char *VAR_0, DES_cblock *VAR_1)
{
    DES_key_schedule VAR_2;
    int VAR_3, VAR_4;

    FUNC_4(VAR_1, 0, 8);
    VAR_4 = FUNC_5(VAR_0);
    for (VAR_3 = 0; VAR_3 < VAR_4; VAR_3++) {
        register unsigned char VAR_5 = VAR_0[VAR_3];

        if ((VAR_3 % 16) < 8)
            (*VAR_1)[VAR_3 % 8] ^= (VAR_5 << 1);
        else {

            VAR_5 = ((VAR_5 << 4) & 0xf0) | ((VAR_5 >> 4) & 0x0f);
            VAR_5 = ((VAR_5 << 2) & 0xcc) | ((VAR_5 >> 2) & 0x33);
            VAR_5 = ((VAR_5 << 1) & 0xaa) | ((VAR_5 >> 1) & 0x55);
            (*VAR_1)[7 - (VAR_3 % 8)] ^= VAR_5;
        }
    }
    FUNC_2(VAR_1);
    FUNC_1(VAR_1, &VAR_2);
    FUNC_0((const unsigned char *)VAR_0, VAR_1, VAR_4, &VAR_2, VAR_1);
    FUNC_3(&VAR_2, sizeof(VAR_2));
    FUNC_2(VAR_1);
}
