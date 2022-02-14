
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wpa_bss {int ie_len; } ;


 int const VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;

const u8 * FUNC_1(const struct wpa_bss *VAR_1, u32 VAR_2)
{
 const u8 *VAR_3, *VAR_4;

 VAR_4 = (const u8 *) (VAR_1 + 1);
 VAR_3 = VAR_4 + VAR_1->ie_len;

 while (VAR_3 - VAR_4 > 1) {
  if (2 + VAR_4[1] > VAR_3 - VAR_4)
   break;
  if (VAR_4[0] == VAR_0 && VAR_4[1] >= 4 &&
      VAR_2 == FUNC_0(&VAR_4[2]))
   return VAR_4;
  VAR_4 += 2 + VAR_4[1];
 }

 return ((void*)0);
}
