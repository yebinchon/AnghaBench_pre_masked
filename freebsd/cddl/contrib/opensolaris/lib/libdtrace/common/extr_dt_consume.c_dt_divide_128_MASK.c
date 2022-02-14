
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int*,int*) ;
 int FUNC_2 (int*,int) ;
 int FUNC_3 (int*,int*,int*) ;

__attribute__((used)) static void
FUNC_4(uint64_t *VAR_0, uint64_t VAR_1, uint64_t *VAR_2)
{
 uint64_t VAR_3[2] = { 0, 0 };
 uint64_t VAR_4[2];
 uint64_t VAR_5[2];
 uint64_t VAR_6[2];
 uint64_t VAR_7[2] = { 1, 0 };
 int VAR_8 = 0;

 FUNC_0(VAR_1 != 0);

 VAR_6[0] = VAR_1;
 VAR_6[1] = 0;

 VAR_4[0] = VAR_0[0];
 VAR_4[1] = VAR_0[1];

 VAR_5[0] = VAR_1;
 VAR_5[1] = 0;

 while (VAR_1 > 0) {
  VAR_8++;
  VAR_1 >>= 1;
 }

 FUNC_2(VAR_5, 128 - VAR_8);
 FUNC_2(VAR_7, 128 - VAR_8);

 while (FUNC_1(VAR_4, VAR_6)) {
  if (FUNC_1(VAR_4, VAR_5)) {
   FUNC_3(VAR_4, VAR_5, VAR_4);
   VAR_3[0] |= VAR_7[0];
   VAR_3[1] |= VAR_7[1];
  }

  FUNC_2(VAR_5, -1);
  FUNC_2(VAR_7, -1);
 }

 VAR_2[0] = VAR_3[0];
 VAR_2[1] = VAR_3[1];
}
