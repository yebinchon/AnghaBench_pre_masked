
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int uint64_t ;


 int FUNC_0 (int) ;
 int FUNC_1 (int*,int*,int*) ;
 scalar_t__ FUNC_2 (int*,int*) ;
 int FUNC_3 (int*) ;
 int FUNC_4 (int*,int) ;
 int FUNC_5 (int*,int*,int*) ;

__attribute__((used)) static uint64_t
FUNC_6(uint64_t *VAR_0)
{
 uint64_t VAR_1[2] = { 0, 0 };
 uint64_t VAR_2[2] = { 0, 0 };
 uint64_t VAR_3[2] = { 1, 0 };
 uint64_t VAR_4[2];
 uint64_t VAR_5[2];
 uint64_t VAR_6, VAR_7;
 int VAR_8;

 VAR_6 = FUNC_3(VAR_0) / 2;
 VAR_7 = VAR_6 * 2;

 for (VAR_8 = 0; VAR_8 <= VAR_6; VAR_8++) {



  VAR_4[0] = VAR_0[0];
  VAR_4[1] = VAR_0[1];
  FUNC_4(VAR_4, -VAR_7);
  VAR_4[0] &= 0x3;
  VAR_4[1] = 0;

  FUNC_4(VAR_2, 2);
  FUNC_1(VAR_2, VAR_4, VAR_2);




  VAR_5[0] = VAR_1[0];
  VAR_5[1] = VAR_1[1];
  FUNC_4(VAR_5, 2);
  FUNC_1(VAR_5, VAR_3, VAR_5);

  if (FUNC_2(VAR_5, VAR_2)) {
   FUNC_5(VAR_2, VAR_5, VAR_2);
   FUNC_4(VAR_1, 1);
   FUNC_1(VAR_1, VAR_3, VAR_1);
  } else {
   FUNC_4(VAR_1, 1);
  }

  VAR_7 -= 2;
 }

 FUNC_0(VAR_1[1] == 0);

 return (VAR_1[0]);
}
