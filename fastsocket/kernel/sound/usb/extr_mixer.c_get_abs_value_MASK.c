
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct usb_mixer_elem_info {int min; int res; int max; } ;



__attribute__((used)) static int FUNC_0(struct usb_mixer_elem_info *VAR_0, int VAR_1)
{
 if (VAR_1 < 0)
  return VAR_0->min;
 if (! VAR_0->res)
  VAR_0->res = 1;
 VAR_1 *= VAR_0->res;
 VAR_1 += VAR_0->min;
 if (VAR_1 > VAR_0->max)
  return VAR_0->max;
 return VAR_1;
}
