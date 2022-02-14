
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int X509 ;
typedef int BIO ;


 int FUNC_0 (int *,char*,char const*,char*) ;
 scalar_t__ FUNC_1 (int *,char const*,int ,int ) ;
 int FUNC_2 (int *,char const*,int ,int ,int *) ;
 scalar_t__ FUNC_3 (int *,char const*,int ) ;

void FUNC_4(BIO *VAR_0, X509 *VAR_1,
                       const char *VAR_2,
                       const char *VAR_3, const char *VAR_4)
{
    if (VAR_1 == ((void*)0))
        return;
    if (VAR_2) {
        FUNC_0(VAR_0, "Hostname %s does%s match certificate\n",
                   VAR_2,
                   FUNC_2(VAR_1, VAR_2, 0, 0, ((void*)0)) == 1
                       ? "" : " NOT");
    }

    if (VAR_3) {
        FUNC_0(VAR_0, "Email %s does%s match certificate\n",
                   VAR_3, FUNC_1(VAR_1, VAR_3, 0, 0)
                   ? "" : " NOT");
    }

    if (VAR_4) {
        FUNC_0(VAR_0, "IP %s does%s match certificate\n",
                   VAR_4, FUNC_3(VAR_1, VAR_4, 0) ? "" : " NOT");
    }
}
