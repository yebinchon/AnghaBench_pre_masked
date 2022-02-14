
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t u8 ;
struct wpa_supplicant {size_t extended_capa_len; size_t* extended_capa_mask; size_t* extended_capa; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,char*) ;
 int FUNC_1 (struct wpa_supplicant*,size_t*,size_t) ;

int FUNC_2(struct wpa_supplicant *VAR_2, u8 *VAR_3, size_t VAR_4)
{
 u8 *VAR_5 = VAR_3;
 u8 VAR_6 = 10, VAR_7;

 if (VAR_6 < VAR_2->extended_capa_len)
  VAR_6 = VAR_2->extended_capa_len;
 if (VAR_4 < (size_t) VAR_6 + 2) {
  FUNC_0(VAR_0,
      "Not enough room for building extended capabilities element");
  return -1;
 }

 *VAR_5++ = VAR_1;
 *VAR_5++ = VAR_6;
 for (VAR_7 = 0; VAR_7 < VAR_6; VAR_7++, VAR_5++) {
  FUNC_1(VAR_2, VAR_5, VAR_7);

  if (VAR_7 < VAR_2->extended_capa_len) {
   *VAR_5 &= ~VAR_2->extended_capa_mask[VAR_7];
   *VAR_5 |= VAR_2->extended_capa[VAR_7];
  }
 }

 while (VAR_6 > 0 && VAR_3[1 + VAR_6] == 0) {
  VAR_6--;
  VAR_3[1] = VAR_6;
 }
 if (VAR_6 == 0)
  return 0;

 return 2 + VAR_6;
}
