
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ rep_t ;
typedef int fp_t ;


 scalar_t__ const FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 int FUNC_1 (scalar_t__ const) ;
 scalar_t__ VAR_1 ;
 scalar_t__ const VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_2 (scalar_t__*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_3 (scalar_t__) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 scalar_t__ VAR_8 ;
 scalar_t__ FUNC_4 (int ) ;
 unsigned int const VAR_9 ;

__attribute__((used)) static __inline fp_t FUNC_5(fp_t VAR_10, fp_t VAR_11) {
  rep_t VAR_12 = FUNC_4(VAR_10);
  rep_t VAR_13 = FUNC_4(VAR_11);
  const rep_t VAR_14 = VAR_12 & VAR_0;
  const rep_t VAR_15 = VAR_13 & VAR_0;


  if (VAR_14 - FUNC_0(1) >= VAR_2 - FUNC_0(1) ||
      VAR_15 - FUNC_0(1) >= VAR_2 - FUNC_0(1)) {

    if (VAR_14 > VAR_2)
      return FUNC_1(FUNC_4(VAR_10) | VAR_5);

    if (VAR_15 > VAR_2)
      return FUNC_1(FUNC_4(VAR_11) | VAR_5);

    if (VAR_14 == VAR_2) {

      if ((FUNC_4(VAR_10) ^ FUNC_4(VAR_11)) == VAR_6)
        return FUNC_1(VAR_4);

      else
        return VAR_10;
    }


    if (VAR_15 == VAR_2)
      return VAR_11;


    if (!VAR_14) {

      if (!VAR_15)
        return FUNC_1(FUNC_4(VAR_10) & FUNC_4(VAR_11));
      else
        return VAR_11;
    }


    if (!VAR_15)
      return VAR_10;
  }


  if (VAR_15 > VAR_14) {
    const rep_t VAR_16 = VAR_12;
    VAR_12 = VAR_13;
    VAR_13 = VAR_16;
  }


  int VAR_17 = VAR_12 >> VAR_7 & VAR_3;
  int VAR_18 = VAR_13 >> VAR_7 & VAR_3;
  rep_t VAR_19 = VAR_12 & VAR_8;
  rep_t VAR_20 = VAR_13 & VAR_8;


  if (VAR_17 == 0)
    VAR_17 = FUNC_2(&VAR_19);
  if (VAR_18 == 0)
    VAR_18 = FUNC_2(&VAR_20);




  const rep_t VAR_21 = VAR_12 & VAR_6;
  const bool VAR_22 = (VAR_12 ^ VAR_13) & VAR_6;





  VAR_19 = (VAR_19 | VAR_1) << 3;
  VAR_20 = (VAR_20 | VAR_1) << 3;



  const unsigned int VAR_23 = VAR_17 - VAR_18;
  if (VAR_23) {
    if (VAR_23 < VAR_9) {
      const bool VAR_24 = VAR_20 << (VAR_9 - VAR_23);
      VAR_20 = VAR_20 >> VAR_23 | VAR_24;
    } else {
      VAR_20 = 1;
    }
  }
  if (VAR_22) {
    VAR_19 -= VAR_20;

    if (VAR_19 == 0)
      return FUNC_1(0);



    if (VAR_19 < VAR_1 << 3) {
      const int VAR_25 = FUNC_3(VAR_19) - FUNC_3(VAR_1 << 3);
      VAR_19 <<= VAR_25;
      VAR_17 -= VAR_25;
    }
  } else {
    VAR_19 += VAR_20;



    if (VAR_19 & VAR_1 << 4) {
      const bool VAR_26 = VAR_19 & 1;
      VAR_19 = VAR_19 >> 1 | VAR_26;
      VAR_17 += 1;
    }
  }


  if (VAR_17 >= VAR_3)
    return FUNC_1(VAR_2 | VAR_21);

  if (VAR_17 <= 0) {


    const int VAR_27 = 1 - VAR_17;
    const bool VAR_28 = VAR_19 << (VAR_9 - VAR_27);
    VAR_19 = VAR_19 >> VAR_27 | VAR_28;
    VAR_17 = 0;
  }


  const int VAR_29 = VAR_19 & 0x7;


  rep_t VAR_30 = VAR_19 >> 3 & VAR_8;


  VAR_30 |= (rep_t)VAR_17 << VAR_7;
  VAR_30 |= VAR_21;



  if (VAR_29 > 0x4)
    VAR_30++;
  if (VAR_29 == 0x4)
    VAR_30 += VAR_30 & 1;
  return FUNC_1(VAR_30);
}
