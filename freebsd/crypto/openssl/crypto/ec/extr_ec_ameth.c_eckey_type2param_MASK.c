
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {unsigned char* data; int length; } ;
typedef int EC_KEY ;
typedef int EC_GROUP ;
typedef TYPE_1__ ASN1_STRING ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int ) ;
 int FUNC_2 (int *,int ) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 () ;
 scalar_t__ FUNC_5 (int *,int *) ;
 int VAR_1 ;
 int FUNC_6 (int ,int ) ;
 int VAR_2 ;
 int FUNC_7 (int const*) ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int * FUNC_8 (int *,unsigned char const**,int) ;

__attribute__((used)) static EC_KEY *FUNC_9(int VAR_6, const void *VAR_7)
{
    EC_KEY *VAR_8 = ((void*)0);
    EC_GROUP *VAR_9 = ((void*)0);

    if (VAR_6 == VAR_5) {
        const ASN1_STRING *VAR_10 = VAR_7;
        const unsigned char *VAR_11 = VAR_10->data;
        int VAR_12 = VAR_10->length;

        if ((VAR_8 = FUNC_8(((void*)0), &VAR_11, VAR_12)) == ((void*)0)) {
            FUNC_6(VAR_0, VAR_1);
            goto ecerr;
        }
    } else if (VAR_6 == VAR_4) {
        const ASN1_OBJECT *VAR_13 = VAR_7;




        if ((VAR_8 = FUNC_4()) == ((void*)0)) {
            FUNC_6(VAR_0, VAR_2);
            goto ecerr;
        }
        VAR_9 = FUNC_1(FUNC_7(VAR_13));
        if (VAR_9 == ((void*)0))
            goto ecerr;
        FUNC_2(VAR_9, VAR_3);
        if (FUNC_5(VAR_8, VAR_9) == 0)
            goto ecerr;
        FUNC_0(VAR_9);
    } else {
        FUNC_6(VAR_0, VAR_1);
        goto ecerr;
    }

    return VAR_8;

 ecerr:
    FUNC_3(VAR_8);
    FUNC_0(VAR_9);
    return ((void*)0);
}
