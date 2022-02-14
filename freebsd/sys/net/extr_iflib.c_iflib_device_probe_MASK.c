
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


typedef scalar_t__ uint16_t ;
struct TYPE_4__ {scalar_t__ pvi_vendor_id; scalar_t__ pvi_device_id; scalar_t__ pvi_subvendor_id; scalar_t__ pvi_subdevice_id; scalar_t__ pvi_rev_id; int pvi_name; } ;
typedef TYPE_1__ pci_vendor_info_t ;
typedef TYPE_2__* if_shared_ctx_t ;
typedef int device_t ;
struct TYPE_5__ {scalar_t__ isc_magic; TYPE_1__* isc_vendor_info; int (* isc_parse_devinfo ) (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;} ;


 int VAR_0 ;
 TYPE_2__* FUNC_0 (int ) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_1 (int ,int ) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 scalar_t__ FUNC_4 (int ) ;
 scalar_t__ FUNC_5 (int ) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (scalar_t__*,scalar_t__*,scalar_t__*,scalar_t__*) ;

int
FUNC_8(device_t VAR_4)
{
 const pci_vendor_info_t *VAR_5;
 if_shared_ctx_t VAR_6;
 uint16_t VAR_7, VAR_8, VAR_9, VAR_10;
 uint16_t VAR_11;

 if ((VAR_6 = FUNC_0(VAR_4)) == ((void*)0) || VAR_6->isc_magic != VAR_3)
  return (VAR_1);

 VAR_11 = FUNC_6(VAR_4);
 VAR_7 = FUNC_2(VAR_4);
 VAR_10 = FUNC_5(VAR_4);
 VAR_9 = FUNC_4(VAR_4);
 VAR_8 = FUNC_3(VAR_4);
 if (VAR_6->isc_parse_devinfo != ((void*)0))
  VAR_6->isc_parse_devinfo(&VAR_7, &VAR_10, &VAR_9, &VAR_8);

 VAR_5 = VAR_6->isc_vendor_info;
 while (VAR_5->pvi_vendor_id != 0) {
  if (VAR_11 != VAR_5->pvi_vendor_id) {
   VAR_5++;
   continue;
  }
  if ((VAR_7 == VAR_5->pvi_device_id) &&
      ((VAR_10 == VAR_5->pvi_subvendor_id) ||
       (VAR_5->pvi_subvendor_id == 0)) &&
      ((VAR_9 == VAR_5->pvi_subdevice_id) ||
       (VAR_5->pvi_subdevice_id == 0)) &&
      ((VAR_8 == VAR_5->pvi_rev_id) ||
       (VAR_5->pvi_rev_id == 0))) {

   FUNC_1(VAR_4, VAR_5->pvi_name);





   return (VAR_0);
  }
  VAR_5++;
 }
 return (VAR_2);
}
