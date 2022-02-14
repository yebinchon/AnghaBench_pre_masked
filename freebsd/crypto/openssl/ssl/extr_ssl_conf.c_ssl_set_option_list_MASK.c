
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int ssl_flag_tbl ;
struct TYPE_3__ {size_t ntbl; int * tbl; } ;
typedef TYPE_1__ SSL_CONF_CTX ;


 scalar_t__ FUNC_0 (TYPE_1__*,int const*,char const*,int,int) ;

__attribute__((used)) static int FUNC_1(const char *VAR_0, int VAR_1, void *VAR_2)
{
    SSL_CONF_CTX *VAR_3 = VAR_2;
    size_t VAR_4;
    const ssl_flag_tbl *VAR_5;
    int VAR_6 = 1;




    if (VAR_0 == ((void*)0))
        return 0;
    if (VAR_1 != -1) {
        if (*VAR_0 == '+') {
            VAR_0++;
            VAR_1--;
            VAR_6 = 1;
        } else if (*VAR_0 == '-') {
            VAR_0++;
            VAR_1--;
            VAR_6 = 0;
        }
    }
    for (VAR_4 = 0, VAR_5 = VAR_3->tbl; VAR_4 < VAR_3->ntbl; VAR_4++, VAR_5++) {
        if (FUNC_0(VAR_3, VAR_5, VAR_0, VAR_1, VAR_6))
            return 1;
    }
    return 0;
}
