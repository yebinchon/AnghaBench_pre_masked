
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef scalar_t__ u8 ;
struct wpa_sm {TYPE_1__* ctx; int group_cipher; int wpa_rsc_relaxation; } ;
struct TYPE_2__ {int msg_ctx; } ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ,char*,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const,scalar_t__ const) ;

__attribute__((used)) static int FUNC_2(const struct wpa_sm *VAR_1,
      const u8 *VAR_2)
{
 int VAR_3;

 if (!VAR_1->wpa_rsc_relaxation)
  return 0;

 VAR_3 = FUNC_0(VAR_1->group_cipher);
 if (VAR_3 == 6 && ((VAR_2[5] && !VAR_2[0]) || VAR_2[6] || VAR_2[7])) {
  FUNC_1(VAR_1->ctx->msg_ctx, VAR_0,
   "RSC %02x%02x%02x%02x%02x%02x%02x%02x is likely bogus, using 0",
   VAR_2[0], VAR_2[1], VAR_2[2], VAR_2[3],
   VAR_2[4], VAR_2[5], VAR_2[6], VAR_2[7]);

  return 1;
 }

 return 0;
}
