
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_used_freq_data {int dummy; } ;
struct wpa_supplicant {unsigned int num_multichan_concurrent; } ;


 int VAR_0 ;
 unsigned int FUNC_0 (struct wpa_supplicant*,struct wpa_used_freq_data*,unsigned int) ;
 struct wpa_used_freq_data* FUNC_1 (unsigned int,int) ;
 int FUNC_2 (struct wpa_used_freq_data*) ;
 int FUNC_3 (struct wpa_supplicant*,struct wpa_used_freq_data*,unsigned int,int ) ;

__attribute__((used)) static void FUNC_4(void *VAR_1, void *VAR_2)
{
 struct wpa_supplicant *VAR_3 = VAR_1;
 struct wpa_used_freq_data *VAR_4 = ((void*)0);
 unsigned int VAR_5 = VAR_3->num_multichan_concurrent;

 VAR_4 = FUNC_1(VAR_5, sizeof(struct wpa_used_freq_data));
 if (!VAR_4)
  return;

 VAR_5 = FUNC_0(VAR_3, VAR_4, VAR_5);


 FUNC_3(VAR_3, VAR_4, VAR_5,
         VAR_0);

 FUNC_2(VAR_4);
}
