
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_1__* hx509_ca_tbs ;
typedef int heim_bit_string ;
struct TYPE_3__ {int issuerUniqueID; int subjectUniqueID; } ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(hx509_context VAR_0,
   hx509_ca_tbs VAR_1,
   const heim_bit_string *VAR_2,
   const heim_bit_string *VAR_3)
{
    int VAR_4;

    FUNC_1(&VAR_1->subjectUniqueID);
    FUNC_1(&VAR_1->issuerUniqueID);

    if (VAR_2) {
 VAR_4 = FUNC_0(VAR_2, &VAR_1->subjectUniqueID);
 if (VAR_4)
     return VAR_4;
    }

    if (VAR_3) {
 VAR_4 = FUNC_0(VAR_3, &VAR_1->issuerUniqueID);
 if (VAR_4)
     return VAR_4;
    }

    return 0;
}
