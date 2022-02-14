
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_used_freq_data {int freq; } ;
struct wpa_supplicant {int num_multichan_concurrent; } ;


 int VAR_0 ;
 struct wpa_used_freq_data* FUNC_0 (int ,int) ;
 int FUNC_1 (struct wpa_used_freq_data*) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (struct wpa_supplicant*) ;
 unsigned int FUNC_4 (struct wpa_supplicant*,struct wpa_used_freq_data*,int ) ;

__attribute__((used)) static int FUNC_5(struct wpa_supplicant *VAR_1, int VAR_2)
{
 int VAR_3;
 unsigned int VAR_4, VAR_5;
 struct wpa_used_freq_data *VAR_6;

 if (FUNC_3(VAR_1) > 0) {

  return 0;
 }

 VAR_6 = FUNC_0(VAR_1->num_multichan_concurrent,
     sizeof(struct wpa_used_freq_data));
 if (!VAR_6)
  return 1;

 VAR_4 = FUNC_4(VAR_1, VAR_6,
     VAR_1->num_multichan_concurrent);

 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++) {
  if (VAR_6[VAR_5].freq == VAR_2) {
   FUNC_2(VAR_0, "P2P: Frequency %d MHz in use by another virtual interface and can be used",
       VAR_2);
   VAR_3 = 0;
   goto exit_free;
  }
 }

 FUNC_2(VAR_0, "P2P: No valid operating frequencies");
 VAR_3 = 1;

exit_free:
 FUNC_1(VAR_6);
 return VAR_3;
}
