
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int objbuf ;
typedef int BIO ;
typedef int ASN1_OBJECT ;


 scalar_t__ FUNC_0 (int *,char*,char const*,char*) ;
 char* FUNC_1 (int ) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (char*,int,int const*,int) ;

__attribute__((used)) static int FUNC_4(BIO *VAR_0, const ASN1_OBJECT *VAR_1)
{
    char VAR_2[80];
    const char *VAR_3;
    VAR_3 = FUNC_1(FUNC_2(VAR_1));
    if (!VAR_3)
        VAR_3 = "";
    FUNC_3(VAR_2, sizeof(VAR_2), VAR_1, 1);
    if (FUNC_0(VAR_0, "%s (%s)", VAR_3, VAR_2) <= 0)
        return 0;
    return 1;
}
