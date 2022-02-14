
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef scalar_t__ uint16_t ;
struct _pcsid {scalar_t__ devid; scalar_t__ subdevice; int match_subdevice; } ;



__attribute__((used)) static int
FUNC_0(uint32_t VAR_0, uint16_t VAR_1, struct _pcsid *VAR_2)
{
 if (VAR_0 != VAR_2->devid)
  return 0;

 if (!VAR_2->match_subdevice)
  return 1;

 if (VAR_1 == VAR_2->subdevice)
  return 1;
 else
  return 0;
}
