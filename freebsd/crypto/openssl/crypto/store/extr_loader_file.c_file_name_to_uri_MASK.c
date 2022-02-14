
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {char const* uri; } ;
struct TYPE_6__ {TYPE_1__ dir; } ;
struct TYPE_7__ {TYPE_2__ _; } ;
typedef TYPE_3__ OSSL_STORE_LOADER_CTX ;


 int VAR_0 ;
 int FUNC_0 (char*,char const*,long) ;
 char* FUNC_1 (long) ;
 int VAR_1 ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (char const*) ;
 int FUNC_5 (char const*) ;

__attribute__((used)) static int FUNC_6(OSSL_STORE_LOADER_CTX *VAR_2, const char *VAR_3,
                            char **VAR_4)
{
    FUNC_3(VAR_3 != ((void*)0));
    FUNC_3(VAR_4 != ((void*)0));
    {
        const char *VAR_5 = FUNC_4(VAR_2->_.dir.uri) ? "" : "/";
        long VAR_6 = FUNC_5(VAR_2->_.dir.uri) + FUNC_5(VAR_5)
            + FUNC_5(VAR_3) + 1 ;

        *VAR_4 = FUNC_1(VAR_6);
        if (*VAR_4 == ((void*)0)) {
            FUNC_2(VAR_1, VAR_0);
            return 0;
        }

        FUNC_0(*VAR_4, VAR_2->_.dir.uri, VAR_6);
        FUNC_0(*VAR_4, VAR_5, VAR_6);
        FUNC_0(*VAR_4, VAR_3, VAR_6);
    }
    return 1;
}
