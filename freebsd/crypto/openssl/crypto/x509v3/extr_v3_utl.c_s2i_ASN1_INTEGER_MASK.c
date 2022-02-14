
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int X509V3_EXT_METHOD ;
struct TYPE_4__ {int type; } ;
typedef int BIGNUM ;
typedef TYPE_1__ ASN1_INTEGER ;


 int FUNC_0 (int **,char const*) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int **,char const*) ;
 scalar_t__ FUNC_3 (int *) ;
 int * FUNC_4 () ;
 TYPE_1__* FUNC_5 (int *,int *) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_6 (int ,int ) ;

ASN1_INTEGER *FUNC_7(X509V3_EXT_METHOD *VAR_6, const char *VAR_7)
{
    BIGNUM *VAR_8 = ((void*)0);
    ASN1_INTEGER *VAR_9;
    int VAR_10, VAR_11;
    int VAR_12;
    if (VAR_7 == ((void*)0)) {
        FUNC_6(VAR_2, VAR_5);
        return ((void*)0);
    }
    VAR_8 = FUNC_4();
    if (VAR_8 == ((void*)0)) {
        FUNC_6(VAR_2, VAR_0);
        return ((void*)0);
    }
    if (VAR_7[0] == '-') {
        VAR_7++;
        VAR_10 = 1;
    } else
        VAR_10 = 0;

    if (VAR_7[0] == '0' && ((VAR_7[1] == 'x') || (VAR_7[1] == 'X'))) {
        VAR_7 += 2;
        VAR_11 = 1;
    } else
        VAR_11 = 0;

    if (VAR_11)
        VAR_12 = FUNC_2(&VAR_8, VAR_7);
    else
        VAR_12 = FUNC_0(&VAR_8, VAR_7);

    if (!VAR_12 || VAR_7[VAR_12]) {
        FUNC_1(VAR_8);
        FUNC_6(VAR_2, VAR_3);
        return ((void*)0);
    }

    if (VAR_10 && FUNC_3(VAR_8))
        VAR_10 = 0;

    VAR_9 = FUNC_5(VAR_8, ((void*)0));
    FUNC_1(VAR_8);
    if (!VAR_9) {
        FUNC_6(VAR_2,
                  VAR_4);
        return ((void*)0);
    }
    if (VAR_10)
        VAR_9->type |= VAR_1;
    return VAR_9;
}
