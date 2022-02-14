
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int rep_t ;
typedef int fp_t ;


 unsigned int FUNC_0 (int) ;
 int VAR_0 ;
 unsigned int const VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (int const) ;
 int const VAR_3 ;
 int const VAR_4 ;
 unsigned int VAR_5 ;
 scalar_t__ FUNC_2 (int*) ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 unsigned int VAR_9 ;
 int VAR_10 ;
 int FUNC_3 (int ) ;
 unsigned int const VAR_11 ;
 int FUNC_4 (int*,int*,int) ;
 int FUNC_5 (int,int,int*,int*) ;
 int FUNC_6 (int*,int*,unsigned int const) ;

__attribute__((used)) static __inline fp_t FUNC_7(fp_t VAR_12, fp_t VAR_13) {
  const unsigned int VAR_14 = FUNC_3(VAR_12) >> VAR_9 & VAR_5;
  const unsigned int VAR_15 = FUNC_3(VAR_13) >> VAR_9 & VAR_5;
  const rep_t VAR_16 = (FUNC_3(VAR_12) ^ FUNC_3(VAR_13)) & VAR_8;

  rep_t VAR_17 = FUNC_3(VAR_12) & VAR_10;
  rep_t VAR_18 = FUNC_3(VAR_13) & VAR_10;
  int VAR_19 = 0;


  if (VAR_14 - 1U >= VAR_5 - 1U ||
      VAR_15 - 1U >= VAR_5 - 1U) {

    const rep_t VAR_20 = FUNC_3(VAR_12) & VAR_0;
    const rep_t VAR_21 = FUNC_3(VAR_13) & VAR_0;


    if (VAR_20 > VAR_4)
      return FUNC_1(FUNC_3(VAR_12) | VAR_7);

    if (VAR_21 > VAR_4)
      return FUNC_1(FUNC_3(VAR_13) | VAR_7);

    if (VAR_20 == VAR_4) {

      if (VAR_21)
        return FUNC_1(VAR_20 | VAR_16);

      else
        return FUNC_1(VAR_6);
    }

    if (VAR_21 == VAR_4) {

      if (VAR_20)
        return FUNC_1(VAR_21 | VAR_16);

      else
        return FUNC_1(VAR_6);
    }


    if (!VAR_20)
      return FUNC_1(VAR_16);

    if (!VAR_21)
      return FUNC_1(VAR_16);




    if (VAR_20 < VAR_3)
      VAR_19 += FUNC_2(&VAR_17);
    if (VAR_21 < VAR_3)
      VAR_19 += FUNC_2(&VAR_18);
  }




  VAR_17 |= VAR_3;
  VAR_18 |= VAR_3;



  rep_t VAR_22, VAR_23;
  FUNC_5(VAR_17, VAR_18 << VAR_2, &VAR_22,
               &VAR_23);

  int VAR_24 = VAR_14 + VAR_15 - VAR_1 + VAR_19;


  if (VAR_22 & VAR_3)
    VAR_24++;
  else
    FUNC_4(&VAR_22, &VAR_23, 1);


  if (VAR_24 >= VAR_5)
    return FUNC_1(VAR_4 | VAR_16);

  if (VAR_24 <= 0) {






    const unsigned int VAR_25 = FUNC_0(1) - (unsigned int)VAR_24;
    if (VAR_25 >= VAR_11)
      return FUNC_1(VAR_16);



    FUNC_6(&VAR_22, &VAR_23, VAR_25);
  } else {

    VAR_22 &= VAR_10;
    VAR_22 |= (rep_t)VAR_24 << VAR_9;
  }


  VAR_22 |= VAR_16;




  if (VAR_23 > VAR_8)
    VAR_22++;
  if (VAR_23 == VAR_8)
    VAR_22 += VAR_22 & 1;
  return FUNC_1(VAR_22);
}
