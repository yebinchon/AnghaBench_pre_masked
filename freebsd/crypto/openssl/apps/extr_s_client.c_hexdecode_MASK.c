
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uint8_t ;
typedef int ossl_ssize_t ;


 int FUNC_0 (unsigned char*) ;
 int FUNC_1 (char const) ;
 int FUNC_2 (char const) ;
 unsigned char* FUNC_3 (int,char*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static ossl_ssize_t FUNC_6(const char **VAR_0, void *VAR_1)
{
    unsigned char **VAR_2 = (unsigned char **)VAR_1;
    const char *VAR_3 = *VAR_0;
    unsigned char *VAR_4 = FUNC_3(FUNC_5(VAR_3) / 2, "hexdecode");
    unsigned char *VAR_5 = VAR_4;
    uint8_t VAR_6;
    int VAR_7 = 0;

    if (VAR_4 == ((void*)0))
        return -1;

    for (VAR_6 = 0; *VAR_3; ++VAR_3) {
        int VAR_8;

        if (FUNC_4(FUNC_2(*VAR_3)))
            continue;
        VAR_8 = FUNC_1(*VAR_3);
        if (VAR_8 < 0) {
            FUNC_0(VAR_4);
            return 0;
        }
        VAR_6 |= (char)VAR_8;
        if ((VAR_7 ^= 1) == 0) {
            *VAR_5++ = VAR_6;
            VAR_6 = 0;
        } else {
            VAR_6 <<= 4;
        }
    }
    if (VAR_7 != 0) {
        FUNC_0(VAR_4);
        return 0;
    }
    *VAR_0 = VAR_3;

    return VAR_5 - (*VAR_2 = VAR_4);
}
