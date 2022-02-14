
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_sm {TYPE_1__* ctx; } ;
typedef enum wpa_alg { ____Placeholder_wpa_alg } wpa_alg ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int ,int ,char*,int,...) ;

__attribute__((used)) static int FUNC_5(struct wpa_sm *VAR_2,
          int VAR_3,
          int VAR_4, int VAR_5,
          int *VAR_6,
          enum wpa_alg *VAR_7)
{
 int VAR_8;

 *VAR_7 = FUNC_2(VAR_3);
 if (*VAR_7 == VAR_1) {
  FUNC_4(VAR_2->ctx->msg_ctx, VAR_0,
   "WPA: Unsupported Group Cipher %d",
   VAR_3);
  return -1;
 }
 *VAR_6 = FUNC_1(VAR_3);

 VAR_8 = FUNC_0(VAR_3);
 if (VAR_4 != VAR_8 || VAR_5 < VAR_8) {
  FUNC_4(VAR_2->ctx->msg_ctx, VAR_0,
   "WPA: Unsupported %s Group Cipher key length %d (%d)",
   FUNC_3(VAR_3), VAR_4, VAR_5);
  return -1;
 }
 return 0;
}
