
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint8_t ;
typedef int uint64_t ;
struct pt_asid {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;

__attribute__((used)) static int FUNC_0(uint8_t *VAR_3, size_t VAR_4,
      const struct pt_asid *VAR_5,
      uint64_t VAR_6, void *VAR_7)
{
 const uint8_t *VAR_8;
 size_t VAR_9;

 (void) VAR_5;

 if (!VAR_3)
  return -VAR_1;


 if (VAR_6 < 0x3000ull)
  return -VAR_2;

 VAR_6 -= 0x3000ull;

 VAR_8 = (const uint8_t *) VAR_7;
 if (!VAR_8)
  return -VAR_0;

 for (VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9)
  VAR_3[VAR_9] = VAR_8[VAR_6 + VAR_9];

 return (int) VAR_9;
}
