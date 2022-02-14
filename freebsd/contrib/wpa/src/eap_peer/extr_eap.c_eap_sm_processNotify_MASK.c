
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpabuf {int dummy; } ;
struct eap_sm {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__* FUNC_0 (int ,int ,struct wpabuf const*,size_t*) ;
 scalar_t__ FUNC_1 (scalar_t__ const) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (size_t) ;
 int FUNC_4 (int ,char*,scalar_t__ const*,size_t) ;
 int FUNC_5 (int ,int ,char*,int ,char*) ;

__attribute__((used)) static void FUNC_6(struct eap_sm *VAR_5, const struct wpabuf *VAR_6)
{
 const u8 *VAR_7;
 char *VAR_8;
 size_t VAR_9, VAR_10;

 VAR_7 = FUNC_0(VAR_1, VAR_0, VAR_6,
          &VAR_10);
 if (VAR_7 == ((void*)0))
  return;
 FUNC_4(VAR_2, "EAP: EAP-Request Notification data",
     VAR_7, VAR_10);

 VAR_8 = FUNC_3(VAR_10 + 1);
 if (VAR_8 == ((void*)0))
  return;
 for (VAR_9 = 0; VAR_9 < VAR_10; VAR_9++)
  VAR_8[VAR_9] = FUNC_1(VAR_7[VAR_9]) ? (char) VAR_7[VAR_9] : '_';
 VAR_8[VAR_10] = '\0';
 FUNC_5(VAR_5->msg_ctx, VAR_3, "%s%s",
  VAR_4, VAR_8);
 FUNC_2(VAR_8);
}
