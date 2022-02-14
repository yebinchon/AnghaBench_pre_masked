
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
struct wpa_supplicant {TYPE_1__* ap_iface; } ;
struct TYPE_2__ {unsigned int freq; } ;


 int FUNC_0 (struct wpa_supplicant*,int const*,int const*,int const*,int const*,size_t,unsigned int,int) ;

__attribute__((used)) static int FUNC_1(void *VAR_0, const u8 *VAR_1, const u8 *VAR_2,
      const u8 *VAR_3, const u8 *VAR_4, size_t VAR_5,
      int VAR_6)
{
 struct wpa_supplicant *VAR_7 = VAR_0;
 unsigned int VAR_8 = 0;

 if (VAR_7->ap_iface)
  VAR_8 = VAR_7->ap_iface->freq;

 return FUNC_0(VAR_7, VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
         VAR_8, VAR_6);
}
