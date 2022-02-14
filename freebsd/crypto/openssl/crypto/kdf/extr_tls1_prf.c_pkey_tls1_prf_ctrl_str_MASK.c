
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* data; } ;
struct TYPE_6__ {int const* md; } ;
typedef TYPE_1__ TLS1_PRF_PKEY_CTX ;
typedef TYPE_2__ EVP_PKEY_CTX ;
typedef int EVP_MD ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (TYPE_2__*,int ,char const*) ;
 int FUNC_1 (TYPE_2__*,int ,char const*) ;
 int * FUNC_2 (char const*) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_3 (int ,int ) ;
 scalar_t__ FUNC_4 (char const*,char*) ;

__attribute__((used)) static int FUNC_5(EVP_PKEY_CTX *VAR_6,
                                  const char *VAR_7, const char *VAR_8)
{
    if (VAR_8 == ((void*)0)) {
        FUNC_3(VAR_2, VAR_5);
        return 0;
    }
    if (FUNC_4(VAR_7, "md") == 0) {
        TLS1_PRF_PKEY_CTX *VAR_9 = VAR_6->data;

        const EVP_MD *VAR_10 = FUNC_2(VAR_8);
        if (VAR_10 == ((void*)0)) {
            FUNC_3(VAR_2, VAR_3);
            return 0;
        }
        VAR_9->md = VAR_10;
        return 1;
    }
    if (FUNC_4(VAR_7, "secret") == 0)
        return FUNC_1(VAR_6, VAR_0, VAR_8);
    if (FUNC_4(VAR_7, "hexsecret") == 0)
        return FUNC_0(VAR_6, VAR_0, VAR_8);
    if (FUNC_4(VAR_7, "seed") == 0)
        return FUNC_1(VAR_6, VAR_1, VAR_8);
    if (FUNC_4(VAR_7, "hexseed") == 0)
        return FUNC_0(VAR_6, VAR_1, VAR_8);

    FUNC_3(VAR_2, VAR_4);
    return -2;
}
