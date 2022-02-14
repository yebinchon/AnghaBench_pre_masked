
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u_int32_t ;
struct sc_info {int dummy; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct sc_info*,int ,int) ;
 int FUNC_1 (struct sc_info*,int ,int,int) ;

__attribute__((used)) static void
FUNC_2(struct sc_info *VAR_2, int VAR_3)
{
 u_int32_t VAR_4, VAR_5;

 VAR_4 = VAR_3? 1 : 0;
 if (VAR_3) {
  FUNC_1(VAR_2, VAR_0, 0x00000001, 4);
 } else {
  if (FUNC_0(VAR_2, VAR_0, 4))
   FUNC_1(VAR_2, VAR_0, 0x00000000, 4);
  VAR_5 = VAR_1;
  while (VAR_5 > 0) {
   if (!(FUNC_0(VAR_2, VAR_0, 4) & 0x00000002))
    break;
   VAR_5--;
  }
 }
}
