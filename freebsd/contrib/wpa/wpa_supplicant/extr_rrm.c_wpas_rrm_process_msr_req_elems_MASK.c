
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpabuf {int dummy; } ;
struct wpa_supplicant {int dummy; } ;
struct rrm_measurement_request_element {scalar_t__ eid; int len; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (struct wpabuf*) ;
 int FUNC_2 (struct wpa_supplicant*,struct rrm_measurement_request_element const*,struct wpabuf**) ;

__attribute__((used)) static struct wpabuf *
FUNC_3(struct wpa_supplicant *VAR_2, const u8 *VAR_3,
          size_t VAR_4)
{
 struct wpabuf *VAR_5 = ((void*)0);

 while (VAR_4) {
  const struct rrm_measurement_request_element *VAR_6;
  int VAR_7;

  if (VAR_4 < 2) {
   FUNC_0(VAR_0, "RRM: Truncated element");
   goto out;
  }

  VAR_6 = (const struct rrm_measurement_request_element *) VAR_3;
  if (VAR_6->eid != VAR_1) {
   FUNC_0(VAR_0,
       "RRM: Expected Measurement Request element, but EID is %u",
       VAR_6->eid);
   goto out;
  }

  if (VAR_6->len < 3) {
   FUNC_0(VAR_0, "RRM: Element length too short");
   goto out;
  }

  if (VAR_6->len > VAR_4 - 2) {
   FUNC_0(VAR_0, "RRM: Element length too long");
   goto out;
  }

  VAR_7 = FUNC_2(VAR_2, VAR_6, &VAR_5);
  if (VAR_7 < 0)
   goto out;

  VAR_3 += VAR_6->len + 2;
  VAR_4 -= VAR_6->len + 2;
 }

 return VAR_5;

out:
 FUNC_1(VAR_5);
 return ((void*)0);
}
