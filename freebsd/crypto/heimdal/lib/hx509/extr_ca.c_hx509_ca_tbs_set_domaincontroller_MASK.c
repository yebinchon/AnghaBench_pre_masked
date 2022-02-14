
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef int hx509_context ;
typedef TYPE_2__* hx509_ca_tbs ;
struct TYPE_4__ {int domaincontroller; } ;
struct TYPE_5__ {TYPE_1__ flags; } ;



int
FUNC_0(hx509_context VAR_0,
      hx509_ca_tbs VAR_1)
{
    VAR_1->flags.domaincontroller = 1;
    return 0;
}
