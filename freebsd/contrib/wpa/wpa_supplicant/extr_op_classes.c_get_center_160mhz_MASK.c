
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct hostapd_hw_modes {scalar_t__ mode; } ;


 unsigned int FUNC_0 (int*) ;
 scalar_t__ VAR_0 ;

__attribute__((used)) static int FUNC_1(struct hostapd_hw_modes *VAR_1, u8 VAR_2)
{
 u8 VAR_3[] = { 50, 114 };
 unsigned int VAR_4;

 if (VAR_1->mode != VAR_0)
  return 0;

 for (VAR_4 = 0; VAR_4 < FUNC_0(VAR_3); VAR_4++) {




  if (VAR_2 >= VAR_3[VAR_4] - 14 &&
      VAR_2 <= VAR_3[VAR_4] + 14)
   return VAR_3[VAR_4];
 }

 return 0;
}
