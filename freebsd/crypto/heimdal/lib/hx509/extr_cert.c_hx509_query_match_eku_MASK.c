
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int match; int * eku; } ;
typedef TYPE_1__ hx509_query ;
typedef int heim_oid ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 (int,int) ;
 int FUNC_1 (int const*,int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;

int
FUNC_4(hx509_query *VAR_2, const heim_oid *VAR_3)
{
    int VAR_4;

    if (VAR_3 == ((void*)0)) {
 if (VAR_2->eku) {
     FUNC_2(VAR_2->eku);
     FUNC_3(VAR_2->eku);
     VAR_2->eku = ((void*)0);
 }
 VAR_2->match &= ~VAR_1;
    } else {
 if (VAR_2->eku) {
     FUNC_2(VAR_2->eku);
 } else {
     VAR_2->eku = FUNC_0(1, sizeof(*VAR_2->eku));
     if (VAR_2->eku == ((void*)0))
  return VAR_0;
 }
 VAR_4 = FUNC_1(VAR_3, VAR_2->eku);
 if (VAR_4) {
     FUNC_3(VAR_2->eku);
     VAR_2->eku = ((void*)0);
     return VAR_4;
 }
 VAR_2->match |= VAR_1;
    }
    return 0;
}
