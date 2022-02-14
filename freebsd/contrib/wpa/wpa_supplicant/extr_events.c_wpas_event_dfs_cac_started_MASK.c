
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct wpa_supplicant {scalar_t__ ifmsh; scalar_t__ ap_iface; } ;
struct dfs_event {int freq; } ;


 int FUNC_0 (struct wpa_supplicant*,struct dfs_event*) ;
 int FUNC_1 (struct wpa_supplicant*,unsigned int) ;
 unsigned int FUNC_2 (struct wpa_supplicant*,int ) ;

__attribute__((used)) static void FUNC_3(struct wpa_supplicant *VAR_0,
           struct dfs_event *VAR_1)
{





 {
  unsigned int VAR_2 = FUNC_2(VAR_0, VAR_1->freq);

  VAR_2 /= 1000;
  if (!VAR_2)
   VAR_2 = 10 * 60;


  FUNC_1(VAR_0, VAR_2);
 }
}
