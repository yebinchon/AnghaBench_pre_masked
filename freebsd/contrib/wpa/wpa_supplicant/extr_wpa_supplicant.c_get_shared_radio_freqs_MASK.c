
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_used_freq_data {int freq; } ;
struct wpa_supplicant {int dummy; } ;


 int FUNC_0 (struct wpa_supplicant*,struct wpa_used_freq_data*,unsigned int) ;
 struct wpa_used_freq_data* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct wpa_used_freq_data*) ;
 int FUNC_3 (int*,int ,int) ;

int FUNC_4(struct wpa_supplicant *VAR_0,
      int *VAR_1, unsigned int VAR_2)
{
 struct wpa_used_freq_data *VAR_3;
 int VAR_4, VAR_5;

 FUNC_3(VAR_1, 0, sizeof(int) * VAR_2);

 VAR_3 = FUNC_1(VAR_2, sizeof(struct wpa_used_freq_data));
 if (!VAR_3)
  return -1;

 VAR_4 = FUNC_0(VAR_0, VAR_3, VAR_2);
 for (VAR_5 = 0; VAR_5 < VAR_4; VAR_5++)
  VAR_1[VAR_5] = VAR_3[VAR_5].freq;

 FUNC_2(VAR_3);

 return VAR_4;
}
