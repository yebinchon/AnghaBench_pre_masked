
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_tdls_frame {int payloadtype; scalar_t__ category; int action; } ;
struct wpa_sm {int own_addr; int tdls_supported; scalar_t__ tdls_disabled; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;





 scalar_t__ FUNC_0 (int const*,int ,int ) ;
 int FUNC_1 (int ,char*,int const*,size_t) ;
 int FUNC_2 (int ,char*,...) ;
 int FUNC_3 (struct wpa_sm*,int const*,int const*,size_t) ;
 int FUNC_4 (struct wpa_sm*,int const*,int const*,size_t) ;
 int FUNC_5 (struct wpa_sm*,int const*,int const*,size_t) ;
 int FUNC_6 (struct wpa_sm*,int const*,int const*,size_t) ;
 int FUNC_7 (struct wpa_sm*,int const*,int const*,size_t) ;

__attribute__((used)) static void FUNC_8(void *VAR_4, const u8 *VAR_5,
       const u8 *VAR_6, size_t VAR_7)
{
 struct wpa_sm *VAR_8 = VAR_4;
 struct wpa_tdls_frame *VAR_9;

 FUNC_1(VAR_1, "TDLS: Received Data frame encapsulation",
      VAR_6, VAR_7);

 if (VAR_8->tdls_disabled || !VAR_8->tdls_supported) {
  FUNC_2(VAR_1, "TDLS: Discard message - TDLS disabled "
      "or unsupported by driver");
  return;
 }

 if (FUNC_0(VAR_5, VAR_8->own_addr, VAR_0) == 0) {
  FUNC_2(VAR_1, "TDLS: Discard copy of own message");
  return;
 }

 if (VAR_7 < sizeof(*VAR_9)) {
  FUNC_2(VAR_2, "TDLS: Drop too short frame");
  return;
 }


 VAR_9 = (struct wpa_tdls_frame *) VAR_6;
 if (VAR_9->payloadtype != 2 ||
     VAR_9->category != VAR_3) {
  FUNC_2(VAR_2, "TDLS: Invalid frame - payloadtype=%u "
      "category=%u action=%u",
      VAR_9->payloadtype, VAR_9->category, VAR_9->action);
  return;
 }

 switch (VAR_9->action) {
 case 130:
  FUNC_4(VAR_8, VAR_5, VAR_6, VAR_7);
  break;
 case 129:
  FUNC_5(VAR_8, VAR_5, VAR_6, VAR_7);
  break;
 case 131:
  FUNC_6(VAR_8, VAR_5, VAR_6, VAR_7);
  break;
 case 128:
  FUNC_7(VAR_8, VAR_5, VAR_6, VAR_7);
  break;
 case 132:
  FUNC_3(VAR_8, VAR_5, VAR_6, VAR_7);
  break;
 default:

  FUNC_2(VAR_1, "TDLS: Ignore TDLS frame action code %u",
      VAR_9->action);
  break;
 }
}
