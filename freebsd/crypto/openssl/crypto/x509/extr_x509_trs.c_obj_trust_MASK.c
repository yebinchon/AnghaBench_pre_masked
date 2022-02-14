
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {scalar_t__ trust; scalar_t__ reject; } ;
typedef TYPE_1__ X509_CERT_AUX ;
struct TYPE_6__ {TYPE_1__* aux; } ;
typedef TYPE_2__ X509 ;
typedef int ASN1_OBJECT ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_1 (scalar_t__) ;
 int * FUNC_2 (scalar_t__,int) ;
 int FUNC_3 (int *,TYPE_2__*,int) ;

__attribute__((used)) static int FUNC_4(int VAR_6, X509 *VAR_7, int VAR_8)
{
    X509_CERT_AUX *VAR_9 = VAR_7->aux;
    int VAR_10;

    if (VAR_9 && VAR_9->reject) {
        for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_9->reject); VAR_10++) {
            ASN1_OBJECT *VAR_11 = FUNC_2(VAR_9->reject, VAR_10);
            int VAR_12 = FUNC_0(VAR_11);

            if (VAR_12 == VAR_6 || (VAR_12 == VAR_0 &&
                (VAR_8 & VAR_2)))
                return VAR_3;
        }
    }

    if (VAR_9 && VAR_9->trust) {
        for (VAR_10 = 0; VAR_10 < FUNC_1(VAR_9->trust); VAR_10++) {
            ASN1_OBJECT *VAR_13 = FUNC_2(VAR_9->trust, VAR_10);
            int VAR_14 = FUNC_0(VAR_13);

            if (VAR_14 == VAR_6 || (VAR_14 == VAR_0 &&
                (VAR_8 & VAR_2)))
                return VAR_4;
        }
        return VAR_3;
    }

    if ((VAR_8 & VAR_1) == 0)
        return VAR_5;




    return FUNC_3(((void*)0), VAR_7, VAR_8);
}
