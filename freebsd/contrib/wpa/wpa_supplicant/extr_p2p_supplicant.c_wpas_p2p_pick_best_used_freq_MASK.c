
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct wpa_used_freq_data {int freq; int flags; } ;
struct wpa_supplicant {TYPE_1__* global; } ;
struct TYPE_2__ {int p2p; } ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ FUNC_0 (int ,int) ;

__attribute__((used)) static int FUNC_1(struct wpa_supplicant *VAR_2,
     struct wpa_used_freq_data *VAR_3,
     unsigned int VAR_4)
{
 unsigned int VAR_5, VAR_6;


 for (VAR_6 = 0; VAR_6 < VAR_4; VAR_6++)
  if (FUNC_0(VAR_2->global->p2p, VAR_3[VAR_6].freq))
   break;

 if (VAR_6 == VAR_4)
  return 0;


 for (VAR_5 = VAR_6 + 1; VAR_5 < VAR_4; VAR_5++) {
  if (!FUNC_0(VAR_2->global->p2p, VAR_3[VAR_5].freq))
   continue;






  if (VAR_3[VAR_5].flags & VAR_0) {
   VAR_6 = VAR_5;
   break;
  }

  if ((VAR_3[VAR_5].flags & VAR_1))
   VAR_6 = VAR_5;
 }
 return VAR_3[VAR_6].freq;
}
