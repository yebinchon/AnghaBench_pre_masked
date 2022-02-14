
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint32_t ;
typedef int uint16_t ;
struct bwi_mac {int dummy; } ;


 int FUNC_0 (int) ;
 int FUNC_1 (struct bwi_mac*,int,int) ;
 scalar_t__ FUNC_2 (struct bwi_mac*,int ) ;

__attribute__((used)) static uint16_t
FUNC_3(struct bwi_mac *VAR_0)
{
 uint32_t VAR_1;
 uint16_t VAR_2 = 0;
 int VAR_3;

 FUNC_1(VAR_0, 0x52, 0);
 FUNC_0(10);
 VAR_1 = FUNC_2(VAR_0, 0);

 for (VAR_3 = 0; VAR_3 < 16; ++VAR_3) {
  uint32_t VAR_4;

  FUNC_1(VAR_0, 0x52, VAR_3);
  FUNC_0(10);
  VAR_4 = FUNC_2(VAR_0, 0);

  if (VAR_4 < VAR_1) {
   VAR_1 = VAR_4;
   VAR_2 = VAR_3;
  }
 }
 return VAR_2;
}
