
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_char ;
typedef TYPE_1__* gss_OID ;
struct TYPE_3__ {int length; int* elements; } ;
typedef int OM_uint32 ;
typedef int EVP_MD_CTX ;


 int FUNC_0 (int *,int*,int *) ;
 int FUNC_1 (int *,int ,int *) ;
 int FUNC_2 (int *,int*,int) ;
 int * FUNC_3 () ;
 int FUNC_4 () ;
 int VAR_0 ;
 int VAR_1 ;
 void** VAR_2 ;
 int FUNC_5 (char*,char*,int) ;

__attribute__((used)) static OM_uint32
FUNC_6(OM_uint32 *VAR_3, const gss_OID VAR_4, char VAR_5[16])
{
    EVP_MD_CTX *VAR_6;
    char *VAR_7 = VAR_5;
    u_char VAR_8[2], VAR_9[20], *VAR_10 = VAR_9;

    if (VAR_4->length > 127)
        return VAR_0;

    VAR_8[0] = 0x06;
    VAR_8[1] = VAR_4->length;

    VAR_6 = FUNC_3();
    FUNC_1(VAR_6, FUNC_4(), ((void*)0));
    FUNC_2(VAR_6, VAR_8, 2);
    FUNC_2(VAR_6, VAR_4->elements, VAR_4->length);
    FUNC_0(VAR_6, VAR_9, ((void*)0));

    FUNC_5(VAR_7, "GS2-", 4);
    VAR_7 += 4;

    *VAR_7++ = VAR_2[(VAR_10[0] >> 3)];
    *VAR_7++ = VAR_2[((VAR_10[0] & 7) << 2) | (VAR_10[1] >> 6)];
    *VAR_7++ = VAR_2[(VAR_10[1] & 0x3f) >> 1];
    *VAR_7++ = VAR_2[((VAR_10[1] & 1) << 4) | (VAR_10[2] >> 4)];
    *VAR_7++ = VAR_2[((VAR_10[2] & 0xf) << 1) | (VAR_10[3] >> 7)];
    *VAR_7++ = VAR_2[(VAR_10[3] & 0x7f) >> 2];
    *VAR_7++ = VAR_2[((VAR_10[3] & 3) << 3) | (VAR_10[4] >> 5)];
    *VAR_7++ = VAR_2[(VAR_10[4] & 0x1f)];
    *VAR_7++ = VAR_2[(VAR_10[5] >> 3)];
    *VAR_7++ = VAR_2[((VAR_10[5] & 7) << 2) | (VAR_10[6] >> 6)];
    *VAR_7++ = VAR_2[(VAR_10[6] & 0x3f) >> 1];

    *VAR_7 = '\0';

    return VAR_1;
}
