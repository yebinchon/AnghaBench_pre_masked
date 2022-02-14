
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
typedef int u16 ;
struct wpabuf {int dummy; } ;
struct TYPE_2__ {int dst_addr; } ;
struct wpa_supplicant {TYPE_1__ rrm; int lci; int lci_time; } ;
struct rrm_measurement_request_element {scalar_t__* variable; int len; int type; int token; } ;
struct os_reltime {int sec; int usec; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (scalar_t__ const*) ;
 scalar_t__* FUNC_1 (scalar_t__ const*,size_t,int ) ;
 int FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (struct os_reltime*) ;
 int FUNC_4 (struct os_reltime*,int *,struct os_reltime*) ;
 int FUNC_5 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_6 (int ,char*,...) ;
 int * FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 scalar_t__ FUNC_9 (struct wpabuf**,int ,int ,int ,int *,int ) ;

__attribute__((used)) static int
FUNC_10(struct wpa_supplicant *VAR_6,
     const struct rrm_measurement_request_element *VAR_7,
     struct wpabuf **VAR_8)
{
 u8 VAR_9;
 u16 VAR_10 = 0;
 struct os_reltime VAR_11, VAR_12;
 unsigned long VAR_13;
 const u8 *VAR_14;
 const u8 *VAR_15 = VAR_7->variable;
 size_t VAR_16 = VAR_7->len - 3;

 if (VAR_16 < 1)
  return -1;

 if (!VAR_6->lci)
  goto reject;

 VAR_9 = *VAR_15++;
 VAR_16--;

 FUNC_6(VAR_4, "Measurement request location subject=%u",
     VAR_9);

 if (VAR_9 != VAR_1) {
  FUNC_6(VAR_5,
      "Not building LCI report - bad location subject");
  return 0;
 }


 FUNC_5(VAR_4, "LCI request subelements", VAR_15, VAR_16);
 VAR_14 = FUNC_1(VAR_15, VAR_16, VAR_0);
 if (VAR_14 && VAR_14[1] == 2)
  VAR_10 = FUNC_0(VAR_14 + 2);

 if (FUNC_3(&VAR_11))
  goto reject;

 FUNC_4(&VAR_11, &VAR_6->lci_time, &VAR_12);

 VAR_13 = VAR_12.sec * 10 + VAR_12.usec / 100000;

 if (VAR_10 != 0xffff && VAR_10 < VAR_13)
  goto reject;

 if (FUNC_9(VAR_8, VAR_7->token,
     VAR_2, VAR_7->type,
     FUNC_7(VAR_6->lci),
     FUNC_8(VAR_6->lci)) < 0) {
  FUNC_6(VAR_4, "Failed to add LCI report element");
  return -1;
 }

 return 0;

reject:
 if (!FUNC_2(VAR_6->rrm.dst_addr) &&
     FUNC_9(VAR_8, VAR_7->token,
     VAR_3,
     VAR_7->type, ((void*)0), 0) < 0) {
  FUNC_6(VAR_4, "RRM: Failed to add report element");
  return -1;
 }

 return 0;
}
