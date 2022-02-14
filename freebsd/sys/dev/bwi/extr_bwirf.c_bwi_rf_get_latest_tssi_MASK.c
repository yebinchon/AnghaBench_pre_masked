
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bwi_mac {int dummy; } ;
typedef scalar_t__ int8_t ;


 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_0 (struct bwi_mac*,int ,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__,int ) ;

int
FUNC_2(struct bwi_mac *VAR_5, int8_t VAR_6[], uint16_t VAR_7)
{
 int VAR_8;

 for (VAR_8 = 0; VAR_8 < 4; ) {
  uint16_t VAR_9;

  VAR_9 = FUNC_0(VAR_5, VAR_0, VAR_7 + VAR_8);
  VAR_6[VAR_8++] = (int8_t)FUNC_1(VAR_9, VAR_3);
  VAR_6[VAR_8++] = (int8_t)FUNC_1(VAR_9, VAR_1);
 }

 for (VAR_8 = 0; VAR_8 < 4; ++VAR_8) {
  if (VAR_6[VAR_8] == VAR_2)
   return VAR_4;
 }
 return 0;
}
