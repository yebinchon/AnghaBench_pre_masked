
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wps_parse_attr {int settings_delay_time; int request_to_enroll; int network_key_shareable; int authorized_macs; int version2; int num_vendor_ext; int num_req_dev_type; int network_key_idx; int num_cred; int ap_setup_locked; int network_key; } ;
struct wps_attr_parse_test {scalar_t__ result; int extra; int data; } ;
struct wpabuf {int dummy; } ;


 unsigned int FUNC_0 (struct wps_attr_parse_test*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (int ,int ,size_t) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ,char*,...) ;
 struct wpabuf* FUNC_4 (size_t) ;
 int FUNC_5 (struct wpabuf*) ;
 int FUNC_6 (struct wpabuf*,size_t) ;
 struct wps_attr_parse_test* VAR_5 ;
 scalar_t__ FUNC_7 (struct wpabuf*,struct wps_parse_attr*) ;

__attribute__((used)) static int FUNC_8(void)
{
 struct wps_parse_attr VAR_6;
 unsigned int VAR_7;
 int VAR_8 = 0;

 FUNC_3(VAR_4, "WPS attribute parsing tests");

 for (VAR_7 = 0; VAR_7 < FUNC_0(VAR_5); VAR_7++) {
  struct wpabuf *VAR_9;
  size_t VAR_10;
  const struct wps_attr_parse_test *VAR_11 =
   &VAR_5[VAR_7];

  VAR_10 = FUNC_2(VAR_11->data) / 2;
  VAR_9 = FUNC_4(VAR_10);
  if (VAR_9 == ((void*)0))
   return -1;
  if (FUNC_1(VAR_11->data, FUNC_6(VAR_9, VAR_10), VAR_10) < 0) {
   FUNC_5(VAR_9);
   return -1;
  }
  if (FUNC_7(VAR_9, &VAR_6) != VAR_11->result) {
   FUNC_3(VAR_3, "WPS attribute parsing test %u failed: %s",
       VAR_7, VAR_11->data);
   VAR_8 = -1;
  }
  switch (VAR_11->extra) {
  case 1:
   if (!VAR_6.network_key || !VAR_6.ap_setup_locked)
    VAR_8 = -1;
   break;
  case 2:
   if (VAR_6.num_cred != VAR_0)
    VAR_8 = -1;
   break;
  case 3:
   if (!VAR_6.network_key_idx)
    VAR_8 = -1;
   break;
  case 4:
   if (VAR_6.num_req_dev_type != VAR_1)
    VAR_8 = -1;
   break;
  case 5:
   if (VAR_6.num_vendor_ext != VAR_2)
    VAR_8 = -1;
   break;
  case 6:
   if (!VAR_6.version2 ||
       !VAR_6.authorized_macs ||
       !VAR_6.network_key_shareable ||
       !VAR_6.request_to_enroll ||
       !VAR_6.settings_delay_time)
    VAR_8 = -1;
   break;
  }
  FUNC_5(VAR_9);
 }

 return VAR_8;
}
