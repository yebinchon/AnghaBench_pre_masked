
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int* d; scalar_t__ p; } ;
struct TYPE_6__ {size_t num; int Nh; int Nl; int md_len; int* h; TYPE_1__ u; } ;
typedef int SHA_LONG64 ;
typedef TYPE_2__ SHA512_CTX ;






 int VAR_0 ;
 int FUNC_0 (unsigned char*,int ,int) ;
 int FUNC_1 (TYPE_2__*,unsigned char*,int) ;

int FUNC_2(unsigned char *VAR_1, SHA512_CTX *VAR_2)
{
    unsigned char *VAR_3 = (unsigned char *)VAR_2->u.p;
    size_t VAR_4 = VAR_2->num;

    VAR_3[VAR_4] = 0x80;
    VAR_4++;
    if (VAR_4 > (sizeof(VAR_2->u) - 16)) {
        FUNC_0(VAR_3 + VAR_4, 0, sizeof(VAR_2->u) - VAR_4);
        VAR_4 = 0;
        FUNC_1(VAR_2, VAR_3, 1);
    }

    FUNC_0(VAR_3 + VAR_4, 0, sizeof(VAR_2->u) - 16 - VAR_4);




    VAR_3[sizeof(VAR_2->u) - 1] = (unsigned char)(VAR_2->Nl);
    VAR_3[sizeof(VAR_2->u) - 2] = (unsigned char)(VAR_2->Nl >> 8);
    VAR_3[sizeof(VAR_2->u) - 3] = (unsigned char)(VAR_2->Nl >> 16);
    VAR_3[sizeof(VAR_2->u) - 4] = (unsigned char)(VAR_2->Nl >> 24);
    VAR_3[sizeof(VAR_2->u) - 5] = (unsigned char)(VAR_2->Nl >> 32);
    VAR_3[sizeof(VAR_2->u) - 6] = (unsigned char)(VAR_2->Nl >> 40);
    VAR_3[sizeof(VAR_2->u) - 7] = (unsigned char)(VAR_2->Nl >> 48);
    VAR_3[sizeof(VAR_2->u) - 8] = (unsigned char)(VAR_2->Nl >> 56);
    VAR_3[sizeof(VAR_2->u) - 9] = (unsigned char)(VAR_2->Nh);
    VAR_3[sizeof(VAR_2->u) - 10] = (unsigned char)(VAR_2->Nh >> 8);
    VAR_3[sizeof(VAR_2->u) - 11] = (unsigned char)(VAR_2->Nh >> 16);
    VAR_3[sizeof(VAR_2->u) - 12] = (unsigned char)(VAR_2->Nh >> 24);
    VAR_3[sizeof(VAR_2->u) - 13] = (unsigned char)(VAR_2->Nh >> 32);
    VAR_3[sizeof(VAR_2->u) - 14] = (unsigned char)(VAR_2->Nh >> 40);
    VAR_3[sizeof(VAR_2->u) - 15] = (unsigned char)(VAR_2->Nh >> 48);
    VAR_3[sizeof(VAR_2->u) - 16] = (unsigned char)(VAR_2->Nh >> 56);


    FUNC_1(VAR_2, VAR_3, 1);

    if (VAR_1 == 0)
        return 0;

    switch (VAR_2->md_len) {

    case 131:
        for (VAR_4 = 0; VAR_4 < 131 / 8; VAR_4++) {
            SHA_LONG64 VAR_5 = VAR_2->h[VAR_4];

            *(VAR_1++) = (unsigned char)(VAR_5 >> 56);
            *(VAR_1++) = (unsigned char)(VAR_5 >> 48);
            *(VAR_1++) = (unsigned char)(VAR_5 >> 40);
            *(VAR_1++) = (unsigned char)(VAR_5 >> 32);
            *(VAR_1++) = (unsigned char)(VAR_5 >> 24);
            *(VAR_1++) = (unsigned char)(VAR_5 >> 16);
            *(VAR_1++) = (unsigned char)(VAR_5 >> 8);
            *(VAR_1++) = (unsigned char)(VAR_5);
        }




        {
            SHA_LONG64 VAR_6 = VAR_2->h[131 / 8];

            *(VAR_1++) = (unsigned char)(VAR_6 >> 56);
            *(VAR_1++) = (unsigned char)(VAR_6 >> 48);
            *(VAR_1++) = (unsigned char)(VAR_6 >> 40);
            *(VAR_1++) = (unsigned char)(VAR_6 >> 32);
        }
        break;
    case 130:
        for (VAR_4 = 0; VAR_4 < 130 / 8; VAR_4++) {
            SHA_LONG64 VAR_7 = VAR_2->h[VAR_4];

            *(VAR_1++) = (unsigned char)(VAR_7 >> 56);
            *(VAR_1++) = (unsigned char)(VAR_7 >> 48);
            *(VAR_1++) = (unsigned char)(VAR_7 >> 40);
            *(VAR_1++) = (unsigned char)(VAR_7 >> 32);
            *(VAR_1++) = (unsigned char)(VAR_7 >> 24);
            *(VAR_1++) = (unsigned char)(VAR_7 >> 16);
            *(VAR_1++) = (unsigned char)(VAR_7 >> 8);
            *(VAR_1++) = (unsigned char)(VAR_7);
        }
        break;
    case 129:
        for (VAR_4 = 0; VAR_4 < 129 / 8; VAR_4++) {
            SHA_LONG64 VAR_8 = VAR_2->h[VAR_4];

            *(VAR_1++) = (unsigned char)(VAR_8 >> 56);
            *(VAR_1++) = (unsigned char)(VAR_8 >> 48);
            *(VAR_1++) = (unsigned char)(VAR_8 >> 40);
            *(VAR_1++) = (unsigned char)(VAR_8 >> 32);
            *(VAR_1++) = (unsigned char)(VAR_8 >> 24);
            *(VAR_1++) = (unsigned char)(VAR_8 >> 16);
            *(VAR_1++) = (unsigned char)(VAR_8 >> 8);
            *(VAR_1++) = (unsigned char)(VAR_8);
        }
        break;
    case 128:
        for (VAR_4 = 0; VAR_4 < 128 / 8; VAR_4++) {
            SHA_LONG64 VAR_9 = VAR_2->h[VAR_4];

            *(VAR_1++) = (unsigned char)(VAR_9 >> 56);
            *(VAR_1++) = (unsigned char)(VAR_9 >> 48);
            *(VAR_1++) = (unsigned char)(VAR_9 >> 40);
            *(VAR_1++) = (unsigned char)(VAR_9 >> 32);
            *(VAR_1++) = (unsigned char)(VAR_9 >> 24);
            *(VAR_1++) = (unsigned char)(VAR_9 >> 16);
            *(VAR_1++) = (unsigned char)(VAR_9 >> 8);
            *(VAR_1++) = (unsigned char)(VAR_9);
        }
        break;

    default:
        return 0;
    }

    return 1;
}
