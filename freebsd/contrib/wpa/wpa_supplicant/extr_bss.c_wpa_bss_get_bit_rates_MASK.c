
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_bss {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (unsigned int) ;
 int* FUNC_1 (struct wpa_bss const*,int ) ;

int FUNC_2(const struct wpa_bss *VAR_2, u8 **VAR_3)
{
 const u8 *VAR_4, *VAR_5;
 int VAR_6, VAR_7;
 unsigned int VAR_8;
 u8 *VAR_9;

 VAR_4 = FUNC_1(VAR_2, VAR_1);
 VAR_5 = FUNC_1(VAR_2, VAR_0);

 VAR_8 = (VAR_4 ? VAR_4[1] : 0) + (VAR_5 ? VAR_5[1] : 0);

 VAR_9 = FUNC_0(VAR_8);
 if (!VAR_9)
  return -1;

 for (VAR_6 = 0; VAR_4 && VAR_6 < VAR_4[1]; VAR_6++)
  VAR_9[VAR_6] = VAR_4[VAR_6 + 2] & 0x7f;

 for (VAR_7 = 0; VAR_5 && VAR_7 < VAR_5[1]; VAR_7++)
  VAR_9[VAR_6 + VAR_7] = VAR_5[VAR_7 + 2] & 0x7f;

 *VAR_3 = VAR_9;
 return VAR_8;
}
