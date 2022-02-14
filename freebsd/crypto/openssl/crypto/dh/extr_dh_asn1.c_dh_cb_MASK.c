
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int DH ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 () ;

__attribute__((used)) static int FUNC_2(int VAR_2, ASN1_VALUE **VAR_3, const ASN1_ITEM *VAR_4,
                 void *VAR_5)
{
    if (VAR_2 == VAR_1) {
        *VAR_3 = (ASN1_VALUE *)FUNC_1();
        if (*VAR_3 != ((void*)0))
            return 2;
        return 0;
    } else if (VAR_2 == VAR_0) {
        FUNC_0((DH *)*VAR_3);
        *VAR_3 = ((void*)0);
        return 2;
    }
    return 1;
}
