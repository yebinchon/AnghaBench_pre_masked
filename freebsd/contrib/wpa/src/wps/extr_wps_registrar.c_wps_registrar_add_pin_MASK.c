
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int const u8 ;
struct TYPE_2__ {int sec; } ;
struct wps_uuid_pin {int wildcard_uuid; size_t pin_len; int list; TYPE_1__ expiration; int flags; int * pin; int uuid; int enrollee_addr; } ;
struct wps_registrar {int selected_registrar; scalar_t__ pbc; int pins; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *,int *) ;
 int FUNC_1 (int ,struct wps_registrar*,int *) ;
 int FUNC_2 (int ,int ,int ,struct wps_registrar*,int *) ;
 int FUNC_3 (struct wps_uuid_pin*) ;
 int FUNC_4 (TYPE_1__*) ;
 int FUNC_5 (int ,int const*,int ) ;
 int * FUNC_6 (int const*,size_t) ;
 struct wps_uuid_pin* FUNC_7 (int) ;
 int FUNC_8 (int ,char*,int const*,int ) ;
 int FUNC_9 (int ,char*,int const*,size_t) ;
 int FUNC_10 (int ,char*,int) ;
 int FUNC_11 (struct wps_registrar*,int const*) ;
 int FUNC_12 (struct wps_registrar*) ;
 int FUNC_13 (struct wps_registrar*,int ) ;
 int VAR_5 ;

int FUNC_14(struct wps_registrar *VAR_6, const u8 *VAR_7,
     const u8 *VAR_8, const u8 *VAR_9, size_t VAR_10,
     int VAR_11)
{
 struct wps_uuid_pin *VAR_12;

 VAR_12 = FUNC_7(sizeof(*VAR_12));
 if (VAR_12 == ((void*)0))
  return -1;
 if (VAR_7)
  FUNC_5(VAR_12->enrollee_addr, VAR_7, VAR_0);
 if (VAR_8 == ((void*)0))
  VAR_12->wildcard_uuid = 1;
 else
  FUNC_5(VAR_12->uuid, VAR_8, VAR_4);
 VAR_12->pin = FUNC_6(VAR_9, VAR_10);
 if (VAR_12->pin == ((void*)0)) {
  FUNC_3(VAR_12);
  return -1;
 }
 VAR_12->pin_len = VAR_10;

 if (VAR_11) {
  VAR_12->flags |= VAR_2;
  FUNC_4(&VAR_12->expiration);
  VAR_12->expiration.sec += VAR_11;
 }

 if (VAR_12->wildcard_uuid)
  FUNC_12(VAR_6);

 FUNC_0(&VAR_6->pins, &VAR_12->list);

 FUNC_10(VAR_1, "WPS: A new PIN configured (timeout=%d)",
     VAR_11);
 FUNC_8(VAR_1, "WPS: UUID", VAR_8, VAR_4);
 FUNC_9(VAR_1, "WPS: PIN", VAR_9, VAR_10);
 VAR_6->selected_registrar = 1;
 VAR_6->pbc = 0;
 if (VAR_7)
  FUNC_11(VAR_6, VAR_7);
 else
  FUNC_11(
   VAR_6, (u8 *) "\xff\xff\xff\xff\xff\xff");
 FUNC_13(VAR_6, 0);
 FUNC_1(VAR_5, VAR_6, ((void*)0));
 FUNC_2(VAR_3, 0,
          VAR_5,
          VAR_6, ((void*)0));

 return 0;
}
