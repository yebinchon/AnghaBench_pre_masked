
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (int,int) ;
 int FUNC_1 (int) ;
 int FUNC_2 () ;
 int FUNC_3 (int) ;
 int FUNC_4 (int) ;
 int FUNC_5 () ;

int FUNC_6(void)
{
 int VAR_0, VAR_1;

 FUNC_5();
 VAR_0 = FUNC_3(0);

 if (VAR_0 < 0)
  return VAR_0;

 VAR_1 = FUNC_2();
 if (VAR_1 < 0)
  return VAR_1;

 VAR_1 = FUNC_0(VAR_0, 1);
 FUNC_1(VAR_0);

 VAR_0 = FUNC_4(0);
 if (VAR_0 >= 0) {
  VAR_1 = FUNC_0(VAR_0, 0);
  FUNC_1(VAR_0);
 }

 return VAR_1;
}
