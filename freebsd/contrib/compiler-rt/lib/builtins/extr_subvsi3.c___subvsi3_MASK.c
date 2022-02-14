
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ su_int ;
typedef scalar_t__ si_int ;


 int FUNC_0 () ;

si_int FUNC_1(si_int VAR_0, si_int VAR_1) {
  si_int VAR_2 = (su_int)VAR_0 - (su_int)VAR_1;
  if (VAR_1 >= 0) {
    if (VAR_2 > VAR_0)
      FUNC_0();
  } else {
    if (VAR_2 <= VAR_0)
      FUNC_0();
  }
  return VAR_2;
}
