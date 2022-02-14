
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int ndo_warning; int ndo_error; int ndo_printf; int ndo_default_print; } ;
typedef TYPE_1__ netdissect_options ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;

void
FUNC_0(netdissect_options *VAR_4)
{
 VAR_4->ndo_default_print=VAR_0;
 VAR_4->ndo_printf=VAR_2;
 VAR_4->ndo_error=VAR_1;
 VAR_4->ndo_warning=VAR_3;
}
