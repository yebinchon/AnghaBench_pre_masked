
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bwi_mac {int dummy; } ;
typedef int int16_t ;


 int VAR_0 ;
 int FUNC_0 (struct bwi_mac*,int) ;
 int FUNC_1 (struct bwi_mac*,int,int) ;

void
FUNC_2(struct bwi_mac *VAR_1, uint16_t VAR_2)
{
 int VAR_3;

 for (VAR_3 = 0; VAR_3 < VAR_0; ++VAR_3) {
  int16_t VAR_4;

  VAR_4 = FUNC_0(VAR_1, VAR_3);

  VAR_4 -= VAR_2;
  if (VAR_4 < -32)
   VAR_4 = -32;
  else if (VAR_4 > 31)
   VAR_4 = 31;

  FUNC_1(VAR_1, VAR_3, VAR_4);
 }
}
