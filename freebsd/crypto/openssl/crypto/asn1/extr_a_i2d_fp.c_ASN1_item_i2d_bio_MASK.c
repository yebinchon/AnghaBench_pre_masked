
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int BIO ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 (void*,unsigned char**,int const*) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,unsigned char*,int) ;
 int VAR_1 ;
 int FUNC_3 (unsigned char*) ;

int FUNC_4(const ASN1_ITEM *VAR_2, BIO *VAR_3, void *VAR_4)
{
    unsigned char *VAR_5 = ((void*)0);
    int VAR_6, VAR_7 = 0, VAR_8, VAR_9 = 1;

    VAR_8 = FUNC_0(VAR_4, &VAR_5, VAR_2);
    if (VAR_5 == ((void*)0)) {
        FUNC_1(VAR_0, VAR_1);
        return 0;
    }

    for (;;) {
        VAR_6 = FUNC_2(VAR_3, &(VAR_5[VAR_7]), VAR_8);
        if (VAR_6 == VAR_8)
            break;
        if (VAR_6 <= 0) {
            VAR_9 = 0;
            break;
        }
        VAR_7 += VAR_6;
        VAR_8 -= VAR_6;
    }
    FUNC_3(VAR_5);
    return VAR_9;
}
