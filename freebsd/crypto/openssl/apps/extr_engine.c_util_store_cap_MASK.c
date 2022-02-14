
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct util_store_cap_data {scalar_t__ engine; scalar_t__ ok; int cap_size; int cap_buf; } ;
typedef int buf ;
typedef int OSSL_STORE_LOADER ;


 int FUNC_0 (char*,int,char*,int ) ;
 scalar_t__ FUNC_1 (int const*) ;
 int FUNC_2 (int const*) ;
 int FUNC_3 (int ,int ,char*) ;

__attribute__((used)) static void FUNC_4(const OSSL_STORE_LOADER *VAR_0, void *VAR_1)
{
    struct util_store_cap_data *VAR_2 = VAR_1;

    if (FUNC_1(VAR_0) == VAR_2->engine) {
        char VAR_3[256];
        FUNC_0(VAR_3, sizeof(VAR_3), "STORE(%s)",
                     FUNC_2(VAR_0));
        if (!FUNC_3(VAR_2->cap_buf, VAR_2->cap_size, VAR_3))
            VAR_2->ok = 0;
    }
}
