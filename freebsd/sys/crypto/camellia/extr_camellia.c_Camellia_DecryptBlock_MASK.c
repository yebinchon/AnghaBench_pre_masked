
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint32_t ;


 int FUNC_0 (unsigned char const*) ;
 int FUNC_1 (unsigned char*,int ) ;
 int FUNC_2 (int const*,int *) ;
 int FUNC_3 (int const*,int *) ;

void
FUNC_4(const int VAR_0,
        const unsigned char *VAR_1,
        const uint32_t *VAR_2,
        unsigned char *VAR_3)
{
    uint32_t VAR_4[4];

    VAR_4[0] = FUNC_0(VAR_1);
    VAR_4[1] = FUNC_0(VAR_1 + 4);
    VAR_4[2] = FUNC_0(VAR_1 + 8);
    VAR_4[3] = FUNC_0(VAR_1 + 12);

    switch (VAR_0) {
    case 128:
 FUNC_2(VAR_2, VAR_4);
 break;
    case 192:

    case 256:
 FUNC_3(VAR_2, VAR_4);
 break;
    default:
 break;
    }

    FUNC_1(VAR_3, VAR_4[0]);
    FUNC_1(VAR_3+4, VAR_4[1]);
    FUNC_1(VAR_3+8, VAR_4[2]);
    FUNC_1(VAR_3+12, VAR_4[3]);
}
