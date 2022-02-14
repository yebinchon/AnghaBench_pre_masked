
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct pci_device_table {scalar_t__ vendor; scalar_t__ device; scalar_t__ subvendor; scalar_t__ subdevice; scalar_t__ class_id; scalar_t__ subclass; scalar_t__ revid; scalar_t__ match_flag_revid; scalar_t__ match_flag_subclass; scalar_t__ match_flag_class; scalar_t__ match_flag_subdevice; scalar_t__ match_flag_subvendor; scalar_t__ match_flag_device; scalar_t__ match_flag_vendor; } ;
typedef int device_t ;


 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;

const struct pci_device_table *
FUNC_7(device_t VAR_0, const struct pci_device_table *VAR_1, size_t VAR_2)
{
 bool VAR_3;
 uint16_t VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9, VAR_10;

 VAR_4 = FUNC_6(VAR_0);
 VAR_5 = FUNC_1(VAR_0);
 VAR_6 = FUNC_5(VAR_0);
 VAR_7 = FUNC_4(VAR_0);
 VAR_8 = FUNC_0(VAR_0);
 VAR_9 = FUNC_3(VAR_0);
 VAR_10 = FUNC_2(VAR_0);
 while (VAR_2-- > 0) {
  VAR_3 = 1;
  if (VAR_1->match_flag_vendor)
   VAR_3 &= VAR_4 == VAR_1->vendor;
  if (VAR_1->match_flag_device)
   VAR_3 &= VAR_5 == VAR_1->device;
  if (VAR_1->match_flag_subvendor)
   VAR_3 &= VAR_6 == VAR_1->subvendor;
  if (VAR_1->match_flag_subdevice)
   VAR_3 &= VAR_7 == VAR_1->subdevice;
  if (VAR_1->match_flag_class)
   VAR_3 &= VAR_8 == VAR_1->class_id;
  if (VAR_1->match_flag_subclass)
   VAR_3 &= VAR_9 == VAR_1->subclass;
  if (VAR_1->match_flag_revid)
   VAR_3 &= VAR_10 == VAR_1->revid;
  if (VAR_3)
   return (VAR_1);
  VAR_1++;
 }
 return (((void*)0));
}
