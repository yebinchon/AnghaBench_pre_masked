
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fenv_t ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 scalar_t__ FUNC_2 (int *) ;
 scalar_t__ FUNC_3 () ;
 scalar_t__ FUNC_4 (int *) ;
 int FUNC_5 (scalar_t__) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int) ;
 int* VAR_7 ;

__attribute__((used)) static void
FUNC_8(void)
{
 fenv_t VAR_8, VAR_9;
 int VAR_10, VAR_11;

 for (VAR_11 = 0; VAR_11 < 1 << VAR_6; VAR_11++) {
  VAR_10 = VAR_7[VAR_11];

  FUNC_0(FUNC_6(VAR_0) == 0);
  FUNC_0(FUNC_3() == VAR_4);
  FUNC_0(FUNC_2(&VAR_8) == 0);






  FUNC_7(VAR_10);
  if ((VAR_10 & (VAR_5 | VAR_3)) != 0 &&
      (VAR_10 & VAR_2) == 0)
   FUNC_0(FUNC_1(VAR_2) == 0);

  FUNC_5(VAR_1);
  FUNC_0(FUNC_2(&VAR_9) == 0);
  FUNC_0(FUNC_4(&VAR_8) == 0);
  FUNC_0(FUNC_6(VAR_0) == 0);
  FUNC_0(FUNC_3() == VAR_4);

  FUNC_0(FUNC_4(&VAR_9) == 0);
  FUNC_0(FUNC_6(VAR_0) == VAR_10);
  FUNC_0(FUNC_3() == VAR_1);
  FUNC_0(FUNC_4(&VAR_8) == 0);
  FUNC_0(FUNC_6(VAR_0) == 0);
  FUNC_0(FUNC_3() == VAR_4);
 }
}
