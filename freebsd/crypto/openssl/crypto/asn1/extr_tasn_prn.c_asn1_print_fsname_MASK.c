
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int spaces ;
struct TYPE_3__ {int flags; } ;
typedef int BIO ;
typedef TYPE_1__ ASN1_PCTX ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int *,char*,char const*) ;
 scalar_t__ FUNC_1 (int *,char const*) ;
 int FUNC_2 (int *,char const*,int const) ;

__attribute__((used)) static int FUNC_3(BIO *VAR_2, int VAR_3,
                             const char *VAR_4, const char *VAR_5,
                             const ASN1_PCTX *VAR_6)
{
    static const char VAR_7[] = "                    ";
    static const int VAR_8 = sizeof(VAR_7) - 1;

    while (VAR_3 > VAR_8) {
        if (FUNC_2(VAR_2, VAR_7, VAR_8) != VAR_8)
            return 0;
        VAR_3 -= VAR_8;
    }
    if (FUNC_2(VAR_2, VAR_7, VAR_3) != VAR_3)
        return 0;
    if (VAR_6->flags & VAR_1)
        VAR_5 = ((void*)0);
    if (VAR_6->flags & VAR_0)
        VAR_4 = ((void*)0);
    if (!VAR_5 && !VAR_4)
        return 1;
    if (VAR_4) {
        if (FUNC_1(VAR_2, VAR_4) <= 0)
            return 0;
    }
    if (VAR_5) {
        if (VAR_4) {
            if (FUNC_0(VAR_2, " (%s)", VAR_5) <= 0)
                return 0;
        } else {
            if (FUNC_1(VAR_2, VAR_5) <= 0)
                return 0;
        }
    }
    if (FUNC_2(VAR_2, ": ", 2) != 2)
        return 0;
    return 1;
}
