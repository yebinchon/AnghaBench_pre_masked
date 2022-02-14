
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ses_elm_sas_device_phy {int byte0; } ;



int
FUNC_0(struct ses_elm_sas_device_phy *VAR_0)
{
 return (((VAR_0)->byte0 >> 4) & 0x7);
}
