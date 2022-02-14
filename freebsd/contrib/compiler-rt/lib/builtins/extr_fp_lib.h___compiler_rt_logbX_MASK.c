
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rep_t ;
typedef double fp_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 double FUNC_0 (int) ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_1 (int*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_2 (double) ;

__attribute__((used)) static __inline fp_t FUNC_3(fp_t VAR_7) {
  rep_t VAR_8 = FUNC_2(VAR_7);
  int VAR_9 = (VAR_8 & VAR_2) >> VAR_6;




  if (VAR_9 == VAR_4) {
    if (((VAR_8 & VAR_5) == 0) || (VAR_7 != VAR_7)) {
      return VAR_7;
    } else {
      return -VAR_7;
    }
  } else if (VAR_7 == 0.0) {

    return FUNC_0(VAR_3 | VAR_5);
  }

  if (VAR_9 != 0) {

    return VAR_9 - VAR_1;
  } else {

    VAR_8 &= VAR_0;
    const int VAR_10 = 1 - FUNC_1(&VAR_8);
    VAR_9 = (VAR_8 & VAR_2) >> VAR_6;
    return VAR_9 - VAR_1 - VAR_10;
  }
}
