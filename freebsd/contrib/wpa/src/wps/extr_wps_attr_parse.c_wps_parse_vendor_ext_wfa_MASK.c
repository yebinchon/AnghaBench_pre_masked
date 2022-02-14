
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u16 ;
struct wps_parse_attr {int dummy; } ;


 scalar_t__ FUNC_0 (struct wps_parse_attr*,int,int,int const*) ;

__attribute__((used)) static int FUNC_1(struct wps_parse_attr *VAR_0, const u8 *VAR_1,
        u16 VAR_2)
{
 const u8 *VAR_3 = VAR_1 + VAR_2;
 u8 VAR_4, VAR_5;

 while (VAR_3 - VAR_1 >= 2) {
  VAR_4 = *VAR_1++;
  VAR_5 = *VAR_1++;
  if (VAR_5 > VAR_3 - VAR_1)
   break;
  if (FUNC_0(VAR_0, VAR_4, VAR_5, VAR_1) < 0)
   return -1;
  VAR_1 += VAR_5;
 }

 return 0;
}
