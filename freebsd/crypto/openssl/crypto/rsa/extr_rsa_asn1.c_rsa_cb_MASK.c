
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ version; } ;
typedef TYPE_1__ RSA ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (TYPE_1__*) ;
 scalar_t__ FUNC_1 () ;
 int FUNC_2 (TYPE_1__*) ;

__attribute__((used)) static int FUNC_3(int VAR_4, ASN1_VALUE **VAR_5, const ASN1_ITEM *VAR_6,
                  void *VAR_7)
{
    if (VAR_4 == VAR_2) {
        *VAR_5 = (ASN1_VALUE *)FUNC_1();
        if (*VAR_5 != ((void*)0))
            return 2;
        return 0;
    } else if (VAR_4 == VAR_1) {
        FUNC_0((RSA *)*VAR_5);
        *VAR_5 = ((void*)0);
        return 2;
    } else if (VAR_4 == VAR_0) {
        if (((RSA *)*VAR_5)->version != VAR_3) {

            return 1;
        }
        return (FUNC_2((RSA *)*VAR_5) == 1) ? 2 : 0;
    }
    return 1;
}
