
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rep_t ;
typedef int fp_t ;
typedef int const fixuint_t ;


 int VAR_0 ;
 int const VAR_1 ;
 int const VAR_2 ;
 int const VAR_3 ;
 int const VAR_4 ;
 int const VAR_5 ;
 int const VAR_6 ;
 int FUNC_0 (int ) ;

__attribute__((used)) static __inline fixuint_t FUNC_1(fp_t VAR_7) {

  const rep_t VAR_8 = FUNC_0(VAR_7);
  const rep_t VAR_9 = VAR_8 & VAR_1;
  const int VAR_10 = VAR_8 & VAR_4 ? -1 : 1;
  const int VAR_11 = (VAR_9 >> VAR_5) - VAR_2;
  const rep_t VAR_12 = (VAR_9 & VAR_6) | VAR_3;


  if (VAR_10 == -1 || VAR_11 < 0)
    return 0;


  if ((unsigned)VAR_11 >= sizeof(fixuint_t) * VAR_0)
    return ~(fixuint_t)0;



  if (VAR_11 < VAR_5)
    return VAR_12 >> (VAR_5 - VAR_11);
  else
    return (fixuint_t)VAR_12 << (VAR_11 - VAR_5);
}
