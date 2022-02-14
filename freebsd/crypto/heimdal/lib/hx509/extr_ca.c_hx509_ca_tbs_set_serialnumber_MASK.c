
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_2__* hx509_ca_tbs ;
typedef int heim_integer ;
struct TYPE_4__ {int serial; } ;
struct TYPE_5__ {TYPE_1__ flags; int serial; } ;


 int FUNC_0 (int const*,int *) ;
 int FUNC_1 (int *) ;

int
FUNC_2(hx509_context VAR_0,
         hx509_ca_tbs VAR_1,
         const heim_integer *VAR_2)
{
    int VAR_3;
    FUNC_1(&VAR_1->serial);
    VAR_3 = FUNC_0(VAR_2, &VAR_1->serial);
    VAR_1->flags.serial = !VAR_3;
    return VAR_3;
}
