
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int match; int * issuer_name; int * serial; } ;
typedef TYPE_1__ hx509_query ;
typedef int heim_integer ;
typedef int Name ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 void* FUNC_5 (int) ;

int
FUNC_6(hx509_query *VAR_3,
    const Name *VAR_4,
    const heim_integer *VAR_5)
{
    int VAR_6;
    if (VAR_3->serial) {
 FUNC_2(VAR_3->serial);
 FUNC_3(VAR_3->serial);
    }
    VAR_3->serial = FUNC_5(sizeof(*VAR_3->serial));
    if (VAR_3->serial == ((void*)0))
 return VAR_0;
    VAR_6 = FUNC_1(VAR_5, VAR_3->serial);
    if (VAR_6) {
 FUNC_3(VAR_3->serial);
 VAR_3->serial = ((void*)0);
 return VAR_6;
    }
    if (VAR_3->issuer_name) {
 FUNC_4(VAR_3->issuer_name);
 FUNC_3(VAR_3->issuer_name);
    }
    VAR_3->issuer_name = FUNC_5(sizeof(*VAR_3->issuer_name));
    if (VAR_3->issuer_name == ((void*)0))
 return VAR_0;
    VAR_6 = FUNC_0(VAR_4, VAR_3->issuer_name);
    if (VAR_6) {
 FUNC_3(VAR_3->issuer_name);
 VAR_3->issuer_name = ((void*)0);
 return VAR_6;
    }
    VAR_3->match |= VAR_2|VAR_1;
    return 0;
}
