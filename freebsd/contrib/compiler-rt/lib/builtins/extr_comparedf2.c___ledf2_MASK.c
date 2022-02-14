
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int srep_t ;
typedef int rep_t ;
typedef int fp_t ;
typedef enum LE_RESULT { ____Placeholder_LE_RESULT } LE_RESULT ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int FUNC_0 (int ) ;

enum LE_RESULT FUNC_1(fp_t VAR_6, fp_t VAR_7) {

  const srep_t VAR_8 = FUNC_0(VAR_6);
  const srep_t VAR_9 = FUNC_0(VAR_7);
  const rep_t VAR_10 = VAR_8 & VAR_4;
  const rep_t VAR_11 = VAR_9 & VAR_4;


  if (VAR_10 > VAR_5 || VAR_11 > VAR_5)
    return VAR_3;


  if ((VAR_10 | VAR_11) == 0)
    return VAR_0;



  if ((VAR_8 & VAR_9) >= 0) {
    if (VAR_8 < VAR_9)
      return VAR_2;
    else if (VAR_8 == VAR_9)
      return VAR_0;
    else
      return VAR_1;
  }





  else {
    if (VAR_8 > VAR_9)
      return VAR_2;
    else if (VAR_8 == VAR_9)
      return VAR_0;
    else
      return VAR_1;
  }
}
