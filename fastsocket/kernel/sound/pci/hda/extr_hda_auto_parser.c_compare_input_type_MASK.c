
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct auto_pin_cfg_item {scalar_t__ type; } ;



__attribute__((used)) static int FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct auto_pin_cfg_item *VAR_2 = VAR_0;
 const struct auto_pin_cfg_item *VAR_3 = VAR_1;
 return (int)(VAR_2->type - VAR_3->type);
}
