
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct device_selection {scalar_t__ selected; scalar_t__ bytes; } ;



__attribute__((used)) static int
FUNC_0(const void *VAR_0, const void *VAR_1)
{
 if ((((const struct device_selection *)VAR_0)->selected)
  && (((const struct device_selection *)VAR_1)->selected == 0))
  return(-1);
 else if ((((const struct device_selection *)VAR_0)->selected == 0)
       && (((const struct device_selection *)VAR_1)->selected))
  return(1);
 else if (((const struct device_selection *)VAR_1)->bytes <
          ((const struct device_selection *)VAR_0)->bytes)
  return(-1);
 else if (((const struct device_selection *)VAR_1)->bytes >
   ((const struct device_selection *)VAR_0)->bytes)
  return(1);
 else
  return(0);
}
