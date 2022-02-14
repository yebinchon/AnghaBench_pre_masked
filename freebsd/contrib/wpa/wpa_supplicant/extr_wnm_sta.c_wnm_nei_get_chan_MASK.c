
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_supplicant {struct wpa_bss* current_bss; } ;
struct wpa_bss {int dummy; } ;


 int VAR_0 ;
 int FUNC_0 (char const*,int,int) ;
 int* FUNC_1 (struct wpa_bss*,int ) ;

__attribute__((used)) static int FUNC_2(struct wpa_supplicant *VAR_1, u8 VAR_2, u8 VAR_3)
{
 struct wpa_bss *VAR_4 = VAR_1->current_bss;
 const char *VAR_5 = ((void*)0);
 int VAR_6;

 if (VAR_4) {
  const u8 *VAR_7 = FUNC_1(VAR_4, VAR_0);

  if (VAR_7 && VAR_7[1] >= 2)
   VAR_5 = (const char *) (VAR_7 + 2);
 }

 VAR_6 = FUNC_0(VAR_5, VAR_2, VAR_3);
 if (VAR_6 <= 0 && VAR_2 == 0) {





  if (VAR_3 >= 1 && VAR_3 <= 13)
   VAR_6 = 2407 + VAR_3 * 5;
  else if (VAR_3 == 14)
   VAR_6 = 2484;
  else if (VAR_3 >= 36 && VAR_3 <= 169)
   VAR_6 = 5000 + VAR_3 * 5;
 }
 return VAR_6;
}
