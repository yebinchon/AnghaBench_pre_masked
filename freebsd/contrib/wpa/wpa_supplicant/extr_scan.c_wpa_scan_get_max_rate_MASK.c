
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
struct wpa_scan_res {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int* FUNC_0 (struct wpa_scan_res const*,int ) ;

__attribute__((used)) static int FUNC_1(const struct wpa_scan_res *VAR_2)
{
 int VAR_3 = 0;
 const u8 *VAR_4;
 int VAR_5;

 VAR_4 = FUNC_0(VAR_2, VAR_1);
 for (VAR_5 = 0; VAR_4 && VAR_5 < VAR_4[1]; VAR_5++) {
  if ((VAR_4[VAR_5 + 2] & 0x7f) > VAR_3)
   VAR_3 = VAR_4[VAR_5 + 2] & 0x7f;
 }

 VAR_4 = FUNC_0(VAR_2, VAR_0);
 for (VAR_5 = 0; VAR_4 && VAR_5 < VAR_4[1]; VAR_5++) {
  if ((VAR_4[VAR_5 + 2] & 0x7f) > VAR_3)
   VAR_3 = VAR_4[VAR_5 + 2] & 0x7f;
 }

 return VAR_3;
}
