
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sysinit_data {scalar_t__ dw_msb_value; scalar_t__ dw_lsb_value; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 const struct sysinit_data * const *VAR_2 = VAR_0;
 const struct sysinit_data * const *VAR_3 = VAR_1;

 if ((*VAR_2)->dw_msb_value > (*VAR_3)->dw_msb_value)
  return (-1);

 if ((*VAR_2)->dw_msb_value < (*VAR_3)->dw_msb_value)
  return (1);

 if ((*VAR_2)->dw_lsb_value > (*VAR_3)->dw_lsb_value)
  return (-1);

 if ((*VAR_2)->dw_lsb_value < (*VAR_3)->dw_lsb_value)
  return (1);

 return (0);
}
