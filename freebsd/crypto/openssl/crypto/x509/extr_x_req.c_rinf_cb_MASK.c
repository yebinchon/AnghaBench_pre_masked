
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int attributes; } ;
typedef TYPE_1__ X509_REQ_INFO ;
typedef int ASN1_VALUE ;
typedef int ASN1_ITEM ;


 int VAR_0 ;
 int FUNC_0 () ;

__attribute__((used)) static int FUNC_1(int VAR_1, ASN1_VALUE **VAR_2, const ASN1_ITEM *VAR_3,
                   void *VAR_4)
{
    X509_REQ_INFO *VAR_5 = (X509_REQ_INFO *)*VAR_2;

    if (VAR_1 == VAR_0) {
        VAR_5->attributes = FUNC_0();
        if (!VAR_5->attributes)
            return 0;
    }
    return 1;
}
