
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef int u16 ;
struct wps_data {int auth_type; TYPE_1__* wps; } ;
struct TYPE_2__ {int auth_types; } ;


 int VAR_0 ;
 int FUNC_0 (int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int ,char*,...) ;

__attribute__((used)) static int FUNC_2(struct wps_data *VAR_4, const u8 *VAR_5)
{
 u16 VAR_6;

 if (VAR_5 == ((void*)0)) {
  FUNC_1(VAR_0, "WPS: No Authentication Type flags "
      "received");
  return -1;
 }

 VAR_6 = FUNC_0(VAR_5);

 FUNC_1(VAR_0, "WPS: Enrollee Authentication Type flags 0x%x",
     VAR_6);
 VAR_4->auth_type = VAR_4->wps->auth_types & VAR_6;
 if (VAR_4->auth_type == 0) {
  FUNC_1(VAR_0, "WPS: No match in supported "
      "authentication types (own 0x%x Enrollee 0x%x)",
      VAR_4->wps->auth_types, VAR_6);
  return -1;

 }

 return 0;
}
