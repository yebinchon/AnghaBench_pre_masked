
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct v3_ext_method {int dummy; } ;
typedef int objbuf ;
struct TYPE_2__ {int * namingAuthorityUrl; int * namingAuthorityText; int * namingAuthorityId; } ;
typedef TYPE_1__ NAMING_AUTHORITY ;
typedef int BIO ;


 scalar_t__ FUNC_0 (int *,int *) ;
 scalar_t__ FUNC_1 (int *,char*,...) ;
 char* FUNC_2 (int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (char*,int,int *,int) ;

__attribute__((used)) static int FUNC_5(const struct v3_ext_method *VAR_0, void *VAR_1,
                                BIO *VAR_2, int VAR_3)
{
    NAMING_AUTHORITY * VAR_4 = (NAMING_AUTHORITY*) VAR_1;

    if (VAR_4 == ((void*)0))
        return 0;

    if (VAR_4->namingAuthorityId == ((void*)0)
        && VAR_4->namingAuthorityText == ((void*)0)
        && VAR_4->namingAuthorityUrl == ((void*)0))
        return 0;

    if (FUNC_1(VAR_2, "%*snamingAuthority: ", VAR_3, "") <= 0)
        goto err;

    if (VAR_4->namingAuthorityId != ((void*)0)) {
        char VAR_5[128];
        const char *VAR_6 = FUNC_2(FUNC_3(VAR_4->namingAuthorityId));

        if (FUNC_1(VAR_2, "%*s  admissionAuthorityId: ", VAR_3, "") <= 0)
            goto err;

        FUNC_4(VAR_5, sizeof(VAR_5), VAR_4->namingAuthorityId, 1);

        if (FUNC_1(VAR_2, "%s%s%s%s\n", VAR_6 ? VAR_6 : "",
                       VAR_6 ? " (" : "", VAR_5, VAR_6 ? ")" : "") <= 0)
            goto err;
    }
    if (VAR_4->namingAuthorityText != ((void*)0)) {
        if (FUNC_1(VAR_2, "%*s  namingAuthorityText: ", VAR_3, "") <= 0
            || FUNC_0(VAR_2, VAR_4->namingAuthorityText) <= 0
            || FUNC_1(VAR_2, "\n") <= 0)
            goto err;
    }
    if (VAR_4->namingAuthorityUrl != ((void*)0) ) {
        if (FUNC_1(VAR_2, "%*s  namingAuthorityUrl: ", VAR_3, "") <= 0
            || FUNC_0(VAR_2, VAR_4->namingAuthorityUrl) <= 0
            || FUNC_1(VAR_2, "\n") <= 0)
            goto err;
    }
    return 1;

err:
    return 0;
}
