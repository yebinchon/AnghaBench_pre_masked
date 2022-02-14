
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (double,double) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (double const*) ;
 scalar_t__ FUNC_3 (scalar_t__) ;

__attribute__((used)) static void
FUNC_4(void)
{
 static const double VAR_0[] = {


  0, 8, 2, 2,
  0, -8, 2, -2,
  4, 0, 2, 0,
  -4, 0, 0, 2,
  3, 4, 2, 1,
  3, -4, 2, -1,
  -3, 4, 1, 2,
  -3, -4, 1, -2,
  5, 12, 3, 2,
  7, 24, 4, 3,
  9, 40, 5, 4,
  11, 60, 6, 5,
  13, 84, 7, 6,
  33, 56, 7, 4,
  39, 80, 8, 5,
  65, 72, 9, 4,
  987, 9916, 74, 67,
  5289, 6640, 83, 40,
  460766389075.0, 16762287900.0, 678910, 12345
 };






 static const double VAR_1[] = {
  1,
  2,
  3,
  13,
  16,
  0x1.p30,
  0x1.p-30,
 };

 double VAR_2, VAR_3;
 double VAR_4, VAR_5;
 unsigned VAR_6, VAR_7;

 for (VAR_6 = 0; VAR_6 < FUNC_2(VAR_0); VAR_6 += 4) {
  for (VAR_7 = 0; VAR_7 < FUNC_2(VAR_1); VAR_7++) {
   VAR_2 = VAR_0[VAR_6] * VAR_1[VAR_7] * VAR_1[VAR_7];
   VAR_3 = VAR_0[VAR_6 + 1] * VAR_1[VAR_7] * VAR_1[VAR_7];
   VAR_4 = VAR_0[VAR_6 + 2] * VAR_1[VAR_7];
   VAR_5 = VAR_0[VAR_6 + 3] * VAR_1[VAR_7];
   FUNC_1(FUNC_3(FUNC_0(VAR_2, VAR_3)) == FUNC_0(VAR_4, VAR_5));
  }
 }

}
