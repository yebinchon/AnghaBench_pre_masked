
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 unsigned int FUNC_2 (int*) ;
 int FUNC_3 (char*,...) ;
 int FUNC_4 () ;
 int FUNC_5 () ;
 int FUNC_6 () ;
 int FUNC_7 () ;
 int FUNC_8 () ;
 int FUNC_9 () ;
 int FUNC_10 () ;

int
FUNC_11(void)
{
 int VAR_4[] = { VAR_1, VAR_3, VAR_0, VAR_2 };
 unsigned VAR_5, VAR_6;






 VAR_6 = 1;

 FUNC_3("1..19\n");

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_4); VAR_5++, VAR_6++) {
  FUNC_3("rmode = %d\n", VAR_4[VAR_5]);
  FUNC_1(VAR_4[VAR_5]);
  FUNC_10();
  FUNC_3("ok %d - fma zeroes\n", VAR_6);
 }

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_4); VAR_5++, VAR_6++) {

  FUNC_3("ok %d # SKIP testcase fails assertion on "
      "amd64\n", VAR_6);
  continue;






 }

 FUNC_1(VAR_1);
 FUNC_8();
 FUNC_3("ok %d - fma NaNs\n", VAR_6);
 VAR_6++;

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_4); VAR_5++, VAR_6++) {
  FUNC_3("rmode = %d\n", VAR_4[VAR_5]);
  FUNC_1(VAR_4[VAR_5]);
  FUNC_9();
  FUNC_3("ok %d - fma small z\n", VAR_6);
 }

 for (VAR_5 = 0; VAR_5 < FUNC_2(VAR_4); VAR_5++, VAR_6++) {
  FUNC_3("rmode = %d\n", VAR_4[VAR_5]);
  FUNC_1(VAR_4[VAR_5]);
  FUNC_5();
  FUNC_3("ok %d - fma big z\n", VAR_6);
 }

 FUNC_1(VAR_1);
 FUNC_4();
 FUNC_3("ok %d - fma accuracy\n", VAR_6);
 VAR_6++;

 FUNC_6();
 FUNC_3("ok %d - fma double rounding\n", VAR_6);
 VAR_6++;







 return (0);
}
