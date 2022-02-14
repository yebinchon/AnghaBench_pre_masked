
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ version; int sig_alg; int hash_alg; } ;
typedef TYPE_1__ SCT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ FUNC_1 (TYPE_1__*) ;
 int FUNC_2 (TYPE_1__*,unsigned char const*,size_t) ;
 int FUNC_3 (unsigned char const*,size_t) ;

int FUNC_4(SCT *VAR_5, const unsigned char **VAR_6, size_t VAR_7)
{
    size_t VAR_8;
    size_t VAR_9 = VAR_7;
    const unsigned char *VAR_10;

    if (VAR_5->version != VAR_4) {
        FUNC_0(VAR_0, VAR_2);
        return -1;
    }







    if (VAR_7 <= 4) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    VAR_10 = *VAR_6;

    VAR_5->hash_alg = *VAR_10++;
    VAR_5->sig_alg = *VAR_10++;
    if (FUNC_1(VAR_5) == VAR_3) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    FUNC_3(VAR_10, VAR_8);
    VAR_9 -= (VAR_10 - *VAR_6);
    if (VAR_8 > VAR_9) {
        FUNC_0(VAR_0, VAR_1);
        return -1;
    }

    if (FUNC_2(VAR_5, VAR_10, VAR_8) != 1)
        return -1;
    VAR_9 -= VAR_8;
    *VAR_6 = VAR_10 + VAR_8;

    return VAR_7 - VAR_9;
}
