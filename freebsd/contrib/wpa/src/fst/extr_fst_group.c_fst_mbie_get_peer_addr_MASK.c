
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct multi_band_ie {int mb_ctrl; int len; int * bssid; } ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;



__attribute__((used)) static const u8 * FUNC_1(const struct multi_band_ie *VAR_2)
{
 const u8 *VAR_3 = ((void*)0);

 switch (FUNC_0(VAR_2->mb_ctrl)) {
 case 129:
  VAR_3 = VAR_2->bssid;
  break;
 case 128:
  if (VAR_2->mb_ctrl & VAR_1 &&
      (size_t) 2 + VAR_2->len >= sizeof(*VAR_2) + VAR_0)
   VAR_3 = (const u8 *) &VAR_2[1];
  break;
 default:
  break;
 }

 return VAR_3;
}
