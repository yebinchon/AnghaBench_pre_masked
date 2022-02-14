
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u8 ;
struct wps_data {size_t dev_password_len; int dev_pw_id; int * dev_password; int peer_dev; int uuid_e; TYPE_2__* wps; TYPE_1__* nfc_pw_token; scalar_t__ pbc; } ;
struct TYPE_4__ {int ap_nfc_dev_pw_id; int registrar; scalar_t__ ap_nfc_dev_pw; } ;
struct TYPE_3__ {scalar_t__ pw_id; size_t dev_pw_len; int * dev_pw; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,size_t) ;
 int * FUNC_1 (int const*,size_t) ;
 int FUNC_2 (int ,char*,...) ;
 int * FUNC_3 (scalar_t__) ;
 size_t FUNC_4 (scalar_t__) ;
 int FUNC_5 (int ,int ,int *) ;
 int * FUNC_6 (int ,int ,size_t*) ;

__attribute__((used)) static int FUNC_7(struct wps_data *VAR_3)
{
 const u8 *VAR_4;
 size_t VAR_5 = 0;

 FUNC_0(VAR_3->dev_password, VAR_3->dev_password_len);
 VAR_3->dev_password = ((void*)0);

 if (VAR_3->pbc) {
  FUNC_2(VAR_2, "WPS: Use default PIN for PBC");
  VAR_4 = (const u8 *) "00000000";
  VAR_5 = 8;
 } else {
  VAR_4 = FUNC_6(VAR_3->wps->registrar, VAR_3->uuid_e,
         &VAR_5);
  if (VAR_4 && VAR_3->dev_pw_id >= 0x10) {
   FUNC_2(VAR_2, "WPS: No match for OOB Device "
       "Password ID, but PIN found");



   VAR_3->dev_pw_id = VAR_0;
  }
 }
 if (VAR_4 == ((void*)0)) {
  FUNC_2(VAR_2, "WPS: No Device Password available for "
      "the Enrollee (context %p registrar %p)",
      VAR_3->wps, VAR_3->wps->registrar);
  FUNC_5(VAR_3->wps->registrar, VAR_3->uuid_e,
      &VAR_3->peer_dev);
  return -1;
 }

 VAR_3->dev_password = FUNC_1(VAR_4, VAR_5);
 if (VAR_3->dev_password == ((void*)0))
  return -1;
 VAR_3->dev_password_len = VAR_5;

 return 0;
}
