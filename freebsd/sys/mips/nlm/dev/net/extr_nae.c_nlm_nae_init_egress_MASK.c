
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;
typedef int uint32_t ;


 int VAR_0 ;
 int FUNC_0 () ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int) ;

void
FUNC_3(uint64_t VAR_1)
{
 uint32_t VAR_2;

 VAR_2 = FUNC_1(VAR_1, VAR_0);
 if (!FUNC_0()) {
  FUNC_2(VAR_1, VAR_0,
      VAR_2 |
      0x1 |
      0x2 |
      0x4 |
      (1 << 3));
 } else {
  FUNC_2(VAR_1, VAR_0,
      VAR_2 |
      0x1 |
      0x2);
 }
}
