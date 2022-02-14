
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int ;
struct sb_info {int dummy; } ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (struct sb_info*,int ) ;

__attribute__((used)) static u_int
FUNC_2(struct sb_info *VAR_2)
{
     int VAR_3;

     for (VAR_3 = 1000; VAR_3 > 0; VAR_3--) {
  if (FUNC_1(VAR_2, VAR_0) & 0x80)
   return FUNC_1(VAR_2, VAR_1);
  else
   FUNC_0(20);
     }
     return 0xffff;
}
