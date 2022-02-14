
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_used_freq_data {int freq; } ;
struct wpa_supplicant {TYPE_1__* global; int num_multichan_concurrent; } ;
struct TYPE_2__ {int p2p; } ;


 int FUNC_0 (struct wpa_supplicant*,char*,struct wpa_used_freq_data*,unsigned int) ;
 unsigned int FUNC_1 (struct wpa_supplicant*,struct wpa_used_freq_data*,int ) ;
 struct wpa_used_freq_data* FUNC_2 (int ,int) ;
 int FUNC_3 (struct wpa_used_freq_data*) ;
 int FUNC_4 (struct wpa_used_freq_data*,int ,int) ;
 scalar_t__ FUNC_5 (int ,int ) ;

__attribute__((used)) static unsigned int
FUNC_6(struct wpa_supplicant *VAR_0,
     struct wpa_used_freq_data *VAR_1,
     unsigned int VAR_2)
{
 struct wpa_used_freq_data *VAR_3;
 unsigned int VAR_4, VAR_5, VAR_6;

 VAR_3 = FUNC_2(VAR_0->num_multichan_concurrent,
     sizeof(struct wpa_used_freq_data));
 if (!VAR_3)
  return 0;

 VAR_4 = FUNC_1(VAR_0, VAR_3,
       VAR_0->num_multichan_concurrent);

 FUNC_4(VAR_1, 0, sizeof(struct wpa_used_freq_data) * VAR_2);

 for (VAR_5 = 0, VAR_6 = 0; VAR_5 < VAR_4 && VAR_6 < VAR_2; VAR_5++) {
  if (FUNC_5(VAR_0->global->p2p, VAR_3[VAR_5].freq))
   VAR_1[VAR_6++] = VAR_3[VAR_5];
 }

 FUNC_3(VAR_3);

 FUNC_0(VAR_0, "valid for P2P", VAR_1, VAR_6);

 return VAR_6;
}
