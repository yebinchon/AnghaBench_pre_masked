
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u8 ;
struct wpa_bss {int dummy; } ;


 scalar_t__ FUNC_0 (scalar_t__ const*,scalar_t__ const*,scalar_t__ const) ;
 scalar_t__* FUNC_1 (struct wpa_bss*,scalar_t__) ;

__attribute__((used)) static int FUNC_2(struct wpa_bss *VAR_0, struct wpa_bss *VAR_1, u8 VAR_2)
{
 const u8 *VAR_3, *VAR_4;

 if (!VAR_0 || !VAR_1)
  return 0;

 VAR_3 = FUNC_1(VAR_0, VAR_2);
 VAR_4 = FUNC_1(VAR_1, VAR_2);

 if (!VAR_3 || !VAR_4 || VAR_3[1] != VAR_4[1])
  return 0;

 return FUNC_0(VAR_3, VAR_4, VAR_3[1]) == 0;
}
