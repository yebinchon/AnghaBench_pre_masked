
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ u64 ;
struct sha512_state {scalar_t__* state; } ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__* VAR_0 ;
 scalar_t__ FUNC_3 (scalar_t__,scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_4 (scalar_t__) ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 scalar_t__ FUNC_6 (unsigned char*) ;
 int FUNC_7 (scalar_t__*) ;
 scalar_t__* FUNC_8 (int) ;

__attribute__((used)) static int FUNC_9(struct sha512_state *VAR_1, unsigned char *VAR_2)
{
 u64 VAR_3[8], VAR_4, VAR_5;
 u64 *VAR_6;
 int VAR_7;

 VAR_6 = FUNC_8(80 * sizeof(u64));
 if (!VAR_6)
  return -1;


 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_3[VAR_7] = VAR_1->state[VAR_7];
 }


 for (VAR_7 = 0; VAR_7 < 16; VAR_7++)
  VAR_6[VAR_7] = FUNC_6(VAR_2 + (8 * VAR_7));


 for (VAR_7 = 16; VAR_7 < 80; VAR_7++) {
  VAR_6[VAR_7] = FUNC_2(VAR_6[VAR_7 - 2]) + VAR_6[VAR_7 - 7] + FUNC_1(VAR_6[VAR_7 - 15]) +
   VAR_6[VAR_7 - 16];
 }


 for (VAR_7 = 0; VAR_7 < 80; VAR_7++) {
  VAR_4 = VAR_3[7] + FUNC_5(VAR_3[4]) + FUNC_0(VAR_3[4], VAR_3[5], VAR_3[6]) + VAR_0[VAR_7] + VAR_6[VAR_7];
  VAR_5 = FUNC_4(VAR_3[0]) + FUNC_3(VAR_3[0], VAR_3[1], VAR_3[2]);
  VAR_3[7] = VAR_3[6];
  VAR_3[6] = VAR_3[5];
  VAR_3[5] = VAR_3[4];
  VAR_3[4] = VAR_3[3] + VAR_4;
  VAR_3[3] = VAR_3[2];
  VAR_3[2] = VAR_3[1];
  VAR_3[1] = VAR_3[0];
  VAR_3[0] = VAR_4 + VAR_5;
 }


 for (VAR_7 = 0; VAR_7 < 8; VAR_7++) {
  VAR_1->state[VAR_7] = VAR_1->state[VAR_7] + VAR_3[VAR_7];
 }

 FUNC_7(VAR_6);
 return 0;
}
