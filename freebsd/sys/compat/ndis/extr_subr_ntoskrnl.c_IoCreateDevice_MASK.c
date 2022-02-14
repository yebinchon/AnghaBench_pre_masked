
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


typedef int unicode_string ;
typedef int uint8_t ;
typedef int uint32_t ;
struct TYPE_9__ {TYPE_3__* dro_devobj; } ;
typedef TYPE_2__ driver_object ;
typedef int devobj_extension ;
struct TYPE_10__ {int do_type; int do_refcnt; int do_devtype; int do_stacksize; int do_alignreq; int do_characteristics; struct TYPE_10__* do_nextdev; TYPE_1__* do_devobj_ext; struct TYPE_10__* do_devext; int * do_vpb; int do_devlock; int * do_iotimer; int * do_attacheddev; int do_size; scalar_t__ do_flags; int * do_currirp; TYPE_2__* do_drvobj; } ;
typedef TYPE_3__ device_object ;
struct TYPE_8__ {int dve_size; TYPE_3__* dve_devobj; scalar_t__ dve_type; } ;


 int VAR_0 ;
 void* FUNC_0 (int ,int,int ) ;
 int FUNC_1 (TYPE_3__*) ;
 int FUNC_2 (int *,int ,int ) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_3 (TYPE_3__*,int) ;

uint32_t
FUNC_4(driver_object *VAR_5, uint32_t VAR_6, unicode_string *VAR_7,
 uint32_t VAR_8, uint32_t VAR_9, uint8_t VAR_10,
 device_object **VAR_11)
{
 device_object *VAR_12;

 VAR_12 = FUNC_0(VAR_1, sizeof(device_object), 0);
 if (VAR_12 == ((void*)0))
  return (VAR_2);

 VAR_12->do_type = VAR_8;
 VAR_12->do_drvobj = VAR_5;
 VAR_12->do_currirp = ((void*)0);
 VAR_12->do_flags = 0;

 if (VAR_6) {
  VAR_12->do_devext = FUNC_0(VAR_1,
      VAR_6, 0);

  if (VAR_12->do_devext == ((void*)0)) {
   FUNC_1(VAR_12);
   return (VAR_2);
  }

  FUNC_3(VAR_12->do_devext, VAR_6);
 } else
  VAR_12->do_devext = ((void*)0);

 VAR_12->do_size = sizeof(device_object) + VAR_6;
 VAR_12->do_refcnt = 1;
 VAR_12->do_attacheddev = ((void*)0);
 VAR_12->do_nextdev = ((void*)0);
 VAR_12->do_devtype = VAR_8;
 VAR_12->do_stacksize = 1;
 VAR_12->do_alignreq = 1;
 VAR_12->do_characteristics = VAR_9;
 VAR_12->do_iotimer = ((void*)0);
 FUNC_2(&VAR_12->do_devlock, VAR_0, VAR_4);





 VAR_12->do_vpb = ((void*)0);

 VAR_12->do_devobj_ext = FUNC_0(VAR_1,
     sizeof(devobj_extension), 0);

 if (VAR_12->do_devobj_ext == ((void*)0)) {
  if (VAR_12->do_devext != ((void*)0))
   FUNC_1(VAR_12->do_devext);
  FUNC_1(VAR_12);
  return (VAR_2);
 }

 VAR_12->do_devobj_ext->dve_type = 0;
 VAR_12->do_devobj_ext->dve_size = sizeof(devobj_extension);
 VAR_12->do_devobj_ext->dve_devobj = VAR_12;
 if (VAR_5->dro_devobj == ((void*)0)) {
  VAR_5->dro_devobj = VAR_12;
  VAR_12->do_nextdev = ((void*)0);
 } else {
  VAR_12->do_nextdev = VAR_5->dro_devobj;
  VAR_5->dro_devobj = VAR_12;
 }

 *VAR_11 = VAR_12;

 return (VAR_3);
}
