
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct puc_cfg {int vendor; scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;

__attribute__((used)) static const struct puc_cfg *
FUNC_4(device_t VAR_0, const struct puc_cfg *VAR_1)
{
 uint16_t VAR_2, VAR_3;
 uint16_t VAR_4, VAR_5;

 VAR_2 = FUNC_3(VAR_0);
 VAR_3 = FUNC_0(VAR_0);
 VAR_4 = FUNC_2(VAR_0);
 VAR_5 = FUNC_1(VAR_0);

 while (VAR_1->vendor != 0xffff) {
  if (VAR_1->vendor == VAR_2 && VAR_1->device == VAR_3) {

   if (VAR_1->subvendor == VAR_4 &&
              VAR_1->subdevice == VAR_5)
    return (VAR_1);

   if (VAR_1->subvendor == 0xffff)
    return (VAR_1);
  }
  VAR_1++;
 }


 return (((void*)0));
}
