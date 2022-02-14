
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ uint16_t ;
struct bwi_mac {int dummy; } ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (struct bwi_mac*,int) ;
 int FUNC_2 (struct bwi_mac*,int,int) ;

__attribute__((used)) static uint16_t
FUNC_3(struct bwi_mac *VAR_0)
{
 uint16_t VAR_1;
 int VAR_2;

 VAR_1 = 0;
 for (VAR_2 = 0; VAR_2 < 10; ++VAR_2) {
  FUNC_2(VAR_0, 0x15, 0xafa0);
  FUNC_0(1);
  FUNC_2(VAR_0, 0x15, 0xefa0);
  FUNC_0(10);
  FUNC_2(VAR_0, 0x15, 0xffa0);
  FUNC_0(40);

  VAR_1 += FUNC_1(VAR_0, 0x2c);
 }
 return VAR_1;
}
