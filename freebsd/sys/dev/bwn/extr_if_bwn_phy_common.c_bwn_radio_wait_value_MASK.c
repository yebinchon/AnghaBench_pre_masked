
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint16_t ;
struct bwn_mac {int dummy; } ;


 int FUNC_0 (struct bwn_mac*,int) ;
 int FUNC_1 (int) ;

int
FUNC_2(struct bwn_mac *VAR_0, uint16_t VAR_1, uint16_t VAR_2,
    uint16_t VAR_3, int VAR_4, int VAR_5)
{
 uint16_t VAR_6;
 int VAR_7;

 for (VAR_7 = 0; VAR_7 < VAR_5; VAR_7 += VAR_4) {
  VAR_6 = FUNC_0(VAR_0, VAR_1);
  if ((VAR_6 & VAR_2) == VAR_3)
   return (1);
  FUNC_1(VAR_4);
 }
 return (0);
}
