
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_int32_t ;
struct sc_info {scalar_t__ timer; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (struct sc_info*,int ,int) ;
 int FUNC_1 (struct sc_info*,int ,int ,int) ;

__attribute__((used)) static int
FUNC_2(struct sc_info *VAR_2, int VAR_3)
{
 u_int32_t VAR_4;
 if (VAR_3) {
  if (VAR_2->timer++ == 0) {
   VAR_4 = FUNC_0(VAR_2, VAR_0, 4);
   VAR_4 |= VAR_1;
   FUNC_1(VAR_2, VAR_0, VAR_4, 4);
  }
 } else {
  VAR_2->timer = 0;
  VAR_4 = FUNC_0(VAR_2, VAR_0, 4);
  VAR_4 &= ~VAR_1;
  FUNC_1(VAR_2, VAR_0, VAR_4, 4);
 }
 return 0;
}
