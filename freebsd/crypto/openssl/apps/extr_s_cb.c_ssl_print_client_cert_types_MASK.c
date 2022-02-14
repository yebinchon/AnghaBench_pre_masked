
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int SSL ;
typedef int BIO ;


 int FUNC_0 (int *,char*,unsigned char) ;
 int FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,unsigned char const**) ;
 int VAR_0 ;
 char* FUNC_3 (int,int ,int *) ;

__attribute__((used)) static void FUNC_4(BIO *VAR_1, SSL *VAR_2)
{
    const unsigned char *VAR_3;
    int VAR_4;
    int VAR_5 = FUNC_2(VAR_2, &VAR_3);
    if (!VAR_5)
        return;
    FUNC_1(VAR_1, "Client Certificate Types: ");
    for (VAR_4 = 0; VAR_4 < VAR_5; VAR_4++) {
        unsigned char VAR_6 = VAR_3[VAR_4];
        const char *VAR_7 = FUNC_3((int)VAR_6, VAR_0, ((void*)0));

        if (VAR_4)
            FUNC_1(VAR_1, ", ");
        if (VAR_7 != ((void*)0))
            FUNC_1(VAR_1, VAR_7);
        else
            FUNC_0(VAR_1, "UNKNOWN (%d),", VAR_6);
    }
    FUNC_1(VAR_1, "\n");
}
