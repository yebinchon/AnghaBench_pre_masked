
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
typedef int u16 ;
struct wps_parse_attr {int dummy; } ;
struct wpabuf {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (scalar_t__ const*) ;
 int FUNC_1 (struct wps_parse_attr*,int ,int) ;
 int FUNC_2 (int ,char*,struct wpabuf const*) ;
 int FUNC_3 (int ,char*,...) ;
 scalar_t__* FUNC_4 (struct wpabuf const*) ;
 int FUNC_5 (struct wpabuf const*) ;
 scalar_t__ FUNC_6 (struct wps_parse_attr*,int,scalar_t__ const*,int) ;

int FUNC_7(const struct wpabuf *VAR_4, struct wps_parse_attr *VAR_5)
{
 const u8 *VAR_6, *VAR_7;
 u16 VAR_8, VAR_9;




 FUNC_1(VAR_5, 0, sizeof(*VAR_5));
 VAR_6 = FUNC_4(VAR_4);
 VAR_7 = VAR_6 + FUNC_5(VAR_4);

 while (VAR_6 < VAR_7) {
  if (VAR_7 - VAR_6 < 4) {
   FUNC_3(VAR_1, "WPS: Invalid message - "
       "%lu bytes remaining",
       (unsigned long) (VAR_7 - VAR_6));
   return -1;
  }

  VAR_8 = FUNC_0(VAR_6);
  VAR_6 += 2;
  VAR_9 = FUNC_0(VAR_6);
  VAR_6 += 2;
  FUNC_3(VAR_2, "WPS: attr type=0x%x len=%u",
      VAR_8, VAR_9);
  if (VAR_9 > VAR_7 - VAR_6) {
   FUNC_3(VAR_1, "WPS: Attribute overflow");
   FUNC_2(VAR_3, "WPS: Message data", VAR_4);
   return -1;
  }
  if (FUNC_6(VAR_5, VAR_8, VAR_6, VAR_9) < 0)
   return -1;




  VAR_6 += VAR_9;
 }

 return 0;
}
