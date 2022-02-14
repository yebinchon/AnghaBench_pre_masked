
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_2__* hx509_ca_tbs ;
struct TYPE_4__ {int ca; } ;
struct TYPE_5__ {int pathLenConstraint; TYPE_1__ flags; } ;



int
FUNC_0(hx509_context VAR_0,
      hx509_ca_tbs VAR_1,
      int VAR_2)
{
    VAR_1->flags.ca = 1;
    VAR_1->pathLenConstraint = VAR_2;
    return 0;
}
