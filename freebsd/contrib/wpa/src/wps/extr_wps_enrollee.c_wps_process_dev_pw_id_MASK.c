
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u16 ;
struct wps_data {scalar_t__ dev_pw_id; scalar_t__ alt_dev_pw_id; scalar_t__ alt_dev_password_len; int * alt_dev_password; scalar_t__ dev_password_len; int * dev_password; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (int const*) ;
 int FUNC_1 (int *,scalar_t__) ;
 int FUNC_2 (int ,char*,...) ;

__attribute__((used)) static int FUNC_3(struct wps_data *VAR_4, const u8 *VAR_5)
{
 u16 VAR_6;

 if (VAR_5 == ((void*)0)) {
  FUNC_2(VAR_3, "WPS: Device Password ID");
  return -1;
 }

 VAR_6 = FUNC_0(VAR_5);
 if (VAR_4->dev_pw_id == VAR_6) {
  FUNC_2(VAR_3, "WPS: Device Password ID %u", VAR_6);
  return 0;
 }
 FUNC_2(VAR_3, "WPS: Registrar trying to change Device Password "
     "ID from %u to %u", VAR_4->dev_pw_id, VAR_6);

 if (VAR_4->dev_pw_id == VAR_1 && VAR_6 == VAR_0) {
  FUNC_2(VAR_3,
      "WPS: Workaround - ignore PBC-to-PIN change");
  return 0;
 }

 if (VAR_4->alt_dev_password && VAR_4->alt_dev_pw_id == VAR_6) {
  FUNC_2(VAR_3, "WPS: Found a matching Device Password");
  FUNC_1(VAR_4->dev_password, VAR_4->dev_password_len);
  VAR_4->dev_pw_id = VAR_4->alt_dev_pw_id;
  VAR_4->dev_password = VAR_4->alt_dev_password;
  VAR_4->dev_password_len = VAR_4->alt_dev_password_len;
  VAR_4->alt_dev_password = ((void*)0);
  VAR_4->alt_dev_password_len = 0;
  return 0;
 }

 return -1;
}
