
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int byte1; } ;
union ses_elm_sas_hdr {TYPE_1__ type0_noneip; } ;



int
FUNC_0(union ses_elm_sas_hdr *VAR_0)
{
 return ((VAR_0)->type0_noneip.byte1 & 0x1);
}
