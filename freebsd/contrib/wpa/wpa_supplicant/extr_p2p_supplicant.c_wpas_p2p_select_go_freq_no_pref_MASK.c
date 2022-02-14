
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct p2p_go_neg_results {int freq; } ;
struct p2p_channels {int dummy; } ;
typedef int r ;
struct TYPE_2__ {int p2p; } ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (struct wpa_supplicant*,struct p2p_channels const*,int) ;
 scalar_t__ FUNC_1 (int *,int) ;
 scalar_t__ FUNC_2 (int ,int) ;
 int FUNC_3 (int ,char*,...) ;
 int FUNC_4 (TYPE_1__*,int) ;
 scalar_t__ FUNC_5 (struct wpa_supplicant*,struct p2p_channels const*,int) ;

__attribute__((used)) static void FUNC_6(struct wpa_supplicant *VAR_1,
         struct p2p_go_neg_results *VAR_2,
         const struct p2p_channels *VAR_3)
{
 unsigned int VAR_4, VAR_5;


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_2->freq = 5180 + VAR_4 * 20;
  if (!FUNC_4(VAR_1->global, VAR_2->freq) &&
      FUNC_0(VAR_1, VAR_3, VAR_2->freq) &&
      FUNC_2(VAR_1->global->p2p, VAR_2->freq))
   goto out;
 }


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_2->freq = 5745 + VAR_4 * 20;
  if (!FUNC_4(VAR_1->global, VAR_2->freq) &&
      FUNC_0(VAR_1, VAR_3, VAR_2->freq) &&
      FUNC_2(VAR_1->global->p2p, VAR_2->freq))
   goto out;
 }


 VAR_2->freq = 58320 + 1 * 2160;
 if (!FUNC_4(VAR_1->global, VAR_2->freq) &&
     FUNC_0(VAR_1, VAR_3, VAR_2->freq) &&
     FUNC_2(VAR_1->global->p2p, VAR_2->freq))
  goto out;


 for (VAR_4 = 0; VAR_4 < 4; VAR_4++) {
  VAR_2->freq = 58320 + VAR_4 * 2160;
  if (!FUNC_4(VAR_1->global, VAR_2->freq) &&
      FUNC_0(VAR_1, VAR_3, VAR_2->freq) &&
      FUNC_2(VAR_1->global->p2p, VAR_2->freq))
   goto out;
 }


 if (FUNC_1((u8 *) &VAR_5, sizeof(VAR_5)) < 0)
  return;

 for (VAR_4 = 0; VAR_4 < 3; VAR_4++) {
  VAR_2->freq = 2412 + ((VAR_5 + VAR_4) % 3) * 25;
  if (FUNC_5(VAR_1, VAR_3, VAR_2->freq))
   goto out;
 }


 for (VAR_4 = 0; VAR_4 < 11; VAR_4++) {
  VAR_2->freq = 2412 + VAR_4 * 5;


  if (VAR_2->freq == 2412 ||
      VAR_2->freq == 2437 ||
      VAR_2->freq == 2462)
   continue;

  if (FUNC_5(VAR_1, VAR_3, VAR_2->freq))
   goto out;
 }

 VAR_2->freq = 0;
 FUNC_3(VAR_0, "P2P: No 2.4, 5, or 60 GHz channel allowed");
 return;
out:
 FUNC_3(VAR_0, "P2P: Set GO freq %d MHz (no preference known)",
     VAR_2->freq);
}
