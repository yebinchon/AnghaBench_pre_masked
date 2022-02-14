
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL_CIPHER ;
typedef int SSL ;


 int FUNC_0 (int ,char*,unsigned char const) ;
 int FUNC_1 (int ,char*) ;
 int FUNC_2 (int) ;
 int * FUNC_3 (int *,unsigned char const*) ;
 char* FUNC_4 (int const*) ;
 size_t FUNC_5 (int *,unsigned char const**) ;
 int FUNC_6 (int *) ;
 int VAR_0 ;
 scalar_t__ FUNC_7 (unsigned char const*,unsigned char const*,size_t) ;

__attribute__((used)) static void FUNC_8(SSL *VAR_1)
{
    const unsigned char *VAR_2;
    static const unsigned char VAR_3[] = { 0, 0xFF };
    size_t VAR_4, VAR_5, VAR_6;
    if (!FUNC_6(VAR_1))
        return;
    VAR_6 = FUNC_5(VAR_1, ((void*)0));
    FUNC_2(VAR_6 == 2);
    VAR_5 = FUNC_5(VAR_1, &VAR_2);
    FUNC_1(VAR_0, "Client cipher list: ");
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4 += VAR_6, VAR_2 += VAR_6) {
        const SSL_CIPHER *VAR_7 = FUNC_3(VAR_1, VAR_2);
        if (VAR_4)
            FUNC_1(VAR_0, ":");
        if (VAR_7 != ((void*)0)) {
            FUNC_1(VAR_0, FUNC_4(VAR_7));
        } else if (FUNC_7(VAR_2, VAR_3, VAR_6) == 0) {
            FUNC_1(VAR_0, "SCSV");
        } else {
            size_t VAR_8;
            FUNC_1(VAR_0, "0x");
            for (VAR_8 = 0; VAR_8 < VAR_6; VAR_8++)
                FUNC_0(VAR_0, "%02X", VAR_2[VAR_8]);
        }
    }
    FUNC_1(VAR_0, "\n");
}
