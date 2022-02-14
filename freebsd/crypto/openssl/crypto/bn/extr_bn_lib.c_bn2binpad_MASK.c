
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int i ;
typedef scalar_t__ endianess_t ;
struct TYPE_5__ {size_t dmax; size_t top; int* d; } ;
typedef int BN_ULONG ;
typedef TYPE_1__ const BIGNUM ;


 size_t VAR_0 ;
 int FUNC_0 (TYPE_1__ const*) ;
 int FUNC_1 (unsigned char*,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_2 (TYPE_1__ const*) ;

__attribute__((used)) static
int FUNC_3(const BIGNUM *VAR_2, unsigned char *VAR_3, int VAR_4, endianess_t VAR_5)
{
    int VAR_6;
    size_t VAR_7, VAR_8, VAR_9, VAR_10, VAR_11;
    BN_ULONG VAR_12;






    VAR_6 = FUNC_0(VAR_2);
    if (VAR_4 == -1) {
        VAR_4 = VAR_6;
    } else if (VAR_4 < VAR_6) {
        BIGNUM VAR_13 = *VAR_2;

        FUNC_2(&VAR_13);
        VAR_6 = FUNC_0(&VAR_13);
        if (VAR_4 < VAR_6)
            return -1;
    }


    VAR_10 = VAR_2->dmax * VAR_0;
    if (VAR_10 == 0) {
        FUNC_1(VAR_3, VAR_4);
        return VAR_4;
    }

    VAR_8 = VAR_10 - 1;
    VAR_10 = VAR_2->top * VAR_0;
    if (VAR_5 == VAR_1)
        VAR_3 += VAR_4;
    for (VAR_7 = 0, VAR_9 = 0; VAR_9 < (size_t)VAR_4; VAR_9++) {
        unsigned char VAR_14;
        VAR_12 = VAR_2->d[VAR_7 / VAR_0];
        VAR_11 = 0 - ((VAR_9 - VAR_10) >> (8 * sizeof(VAR_7) - 1));
        VAR_14 = (unsigned char)(VAR_12 >> (8 * (VAR_7 % VAR_0)) & VAR_11);
        if (VAR_5 == VAR_1)
            *--VAR_3 = VAR_14;
        else
            *VAR_3++ = VAR_14;
        VAR_7 += (VAR_7 - VAR_8) >> (8 * sizeof(VAR_7) - 1);
    }

    return VAR_4;
}
