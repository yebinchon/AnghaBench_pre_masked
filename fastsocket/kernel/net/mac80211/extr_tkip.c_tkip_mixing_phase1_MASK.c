
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u8 ;
typedef int u32 ;
typedef int u16 ;
struct tkip_ctx {int* p1k; int p1k_iv32; int state; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int const*) ;
 scalar_t__ FUNC_1 (int) ;

__attribute__((used)) static void FUNC_2(const u8 *VAR_2, struct tkip_ctx *VAR_3,
          const u8 *VAR_4, u32 VAR_5)
{
 int VAR_6, VAR_7;
 u16 *VAR_8 = VAR_3->p1k;

 VAR_8[0] = VAR_5 & 0xFFFF;
 VAR_8[1] = VAR_5 >> 16;
 VAR_8[2] = FUNC_0(VAR_4 + 0);
 VAR_8[3] = FUNC_0(VAR_4 + 2);
 VAR_8[4] = FUNC_0(VAR_4 + 4);

 for (VAR_6 = 0; VAR_6 < VAR_0; VAR_6++) {
  VAR_7 = 2 * (VAR_6 & 1);
  VAR_8[0] += FUNC_1(VAR_8[4] ^ FUNC_0(VAR_2 + 0 + VAR_7));
  VAR_8[1] += FUNC_1(VAR_8[0] ^ FUNC_0(VAR_2 + 4 + VAR_7));
  VAR_8[2] += FUNC_1(VAR_8[1] ^ FUNC_0(VAR_2 + 8 + VAR_7));
  VAR_8[3] += FUNC_1(VAR_8[2] ^ FUNC_0(VAR_2 + 12 + VAR_7));
  VAR_8[4] += FUNC_1(VAR_8[3] ^ FUNC_0(VAR_2 + 0 + VAR_7)) + VAR_6;
 }
 VAR_3->state = VAR_1;
 VAR_3->p1k_iv32 = VAR_5;
}
