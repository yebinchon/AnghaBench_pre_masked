
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_bss {int dummy; } ;


 int VAR_0 ;
 int* FUNC_0 (struct wpa_bss*,int ) ;

int FUNC_1(struct wpa_bss *VAR_1)
{
 const u8 *VAR_2;

 if (!VAR_1)
  return 0;

 VAR_2 = FUNC_0(VAR_1, VAR_0);
 if (!VAR_2 || VAR_2[1] < 5)
  return 0;

 return ((VAR_2[6] >> 4) & 0x0f) + 1;
}
