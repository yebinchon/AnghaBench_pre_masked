
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wps_registrar {int cb_ctx; int (* pin_needed_cb ) (int ,int const*,struct wps_device_data const*) ;} ;
struct wps_device_data {int dummy; } ;


 int FUNC_0 (int ,int const*,struct wps_device_data const*) ;

__attribute__((used)) static void FUNC_1(struct wps_registrar *VAR_0, const u8 *VAR_1,
         const struct wps_device_data *VAR_2)
{
 if (VAR_0->pin_needed_cb == ((void*)0))
  return;

 VAR_0->pin_needed_cb(VAR_0->cb_ctx, VAR_1, VAR_2);
}
