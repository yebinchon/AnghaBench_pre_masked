
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int device_t ;


 int FUNC_0 (int ,int,int) ;
 int FUNC_1 (char*) ;
 int FUNC_2 (int ,int) ;
 int FUNC_3 () ;
 int FUNC_4 (int) ;
 int * VAR_0 ;
 int FUNC_5 () ;

void
FUNC_6(int VAR_1)
{
 device_t VAR_2;
 int VAR_3;

 VAR_3 = FUNC_5();

 VAR_2 = FUNC_2(FUNC_1("beripic"), VAR_1);
 VAR_0[VAR_1] = VAR_2;
 FUNC_0(VAR_2, VAR_1, VAR_3);


 if (VAR_1 != 0) {
  FUNC_4(FUNC_3() | (((1 << VAR_3) << 8) << 2));
 }
}
