
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef scalar_t__ u32 ;
struct wpabuf {int dummy; } ;
struct wpa_bss {int ie_len; } ;


 int const VAR_0 ;
 scalar_t__ FUNC_0 (int const*) ;
 struct wpabuf* FUNC_1 (int) ;
 int FUNC_2 (struct wpabuf*) ;
 scalar_t__ FUNC_3 (struct wpabuf*) ;
 int FUNC_4 (struct wpabuf*,int const*,int const) ;

struct wpabuf * FUNC_5(const struct wpa_bss *VAR_1,
         u32 VAR_2)
{
 struct wpabuf *VAR_3;
 const u8 *VAR_4, *VAR_5;

 VAR_3 = FUNC_1(VAR_1->ie_len);
 if (VAR_3 == ((void*)0))
  return ((void*)0);

 VAR_5 = (const u8 *) (VAR_1 + 1);
 VAR_4 = VAR_5 + VAR_1->ie_len;

 while (VAR_4 - VAR_5 > 1) {
  if (2 + VAR_5[1] > VAR_4 - VAR_5)
   break;
  if (VAR_5[0] == VAR_0 && VAR_5[1] >= 4 &&
      VAR_2 == FUNC_0(&VAR_5[2]))
   FUNC_4(VAR_3, VAR_5 + 2 + 4, VAR_5[1] - 4);
  VAR_5 += 2 + VAR_5[1];
 }

 if (FUNC_3(VAR_3) == 0) {
  FUNC_2(VAR_3);
  VAR_3 = ((void*)0);
 }

 return VAR_3;
}
