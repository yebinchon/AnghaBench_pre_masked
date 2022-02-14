
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int src_t ;
typedef int src_rep_t ;
typedef int dst_t ;
typedef int dst_rep_t ;


 int VAR_0 ;
 int const FUNC_0 (int) ;
 int const FUNC_1 (int) ;
 int FUNC_2 (int const) ;
 int const VAR_1 ;
 int const VAR_2 ;
 int FUNC_3 (int ) ;

__attribute__((used)) static __inline dst_t FUNC_4(src_t VAR_3) {


  const int VAR_4 = sizeof(src_t) * VAR_0;
  const int VAR_5 = VAR_4 - VAR_2 - 1;
  const int VAR_6 = (1 << VAR_5) - 1;
  const int VAR_7 = VAR_6 >> 1;

  const src_rep_t VAR_8 = FUNC_1(1) << VAR_2;
  const src_rep_t VAR_9 = VAR_8 - 1;
  const src_rep_t VAR_10 = (src_rep_t)VAR_6 << VAR_2;
  const src_rep_t VAR_11 = FUNC_1(1) << (VAR_2 + VAR_5);
  const src_rep_t VAR_12 = VAR_11 - 1;
  const src_rep_t VAR_13 = (FUNC_1(1) << (VAR_2 - VAR_1)) - 1;
  const src_rep_t VAR_14 = FUNC_1(1) << (VAR_2 - VAR_1 - 1);
  const src_rep_t VAR_15 = FUNC_1(1) << (VAR_2 - 1);
  const src_rep_t VAR_16 = VAR_15 - 1;

  const int VAR_17 = sizeof(dst_t) * VAR_0;
  const int VAR_18 = VAR_17 - VAR_1 - 1;
  const int VAR_19 = (1 << VAR_18) - 1;
  const int VAR_20 = VAR_19 >> 1;

  const int VAR_21 = VAR_7 + 1 - VAR_20;
  const int VAR_22 = VAR_7 + VAR_19 - VAR_20;
  const src_rep_t VAR_23 = (src_rep_t)VAR_21 << VAR_2;
  const src_rep_t VAR_24 = (src_rep_t)VAR_22 << VAR_2;

  const dst_rep_t VAR_25 = FUNC_0(1) << (VAR_1 - 1);
  const dst_rep_t VAR_26 = VAR_25 - 1;


  const src_rep_t VAR_27 = FUNC_3(VAR_3);
  const src_rep_t VAR_28 = VAR_27 & VAR_12;
  const src_rep_t VAR_29 = VAR_27 & VAR_11;
  dst_rep_t VAR_30;

  if (VAR_28 - VAR_23 < VAR_28 - VAR_24) {



    VAR_30 = VAR_28 >> (VAR_2 - VAR_1);
    VAR_30 -= (dst_rep_t)(VAR_7 - VAR_20) << VAR_1;

    const src_rep_t VAR_31 = VAR_28 & VAR_13;

    if (VAR_31 > VAR_14)
      VAR_30++;

    else if (VAR_31 == VAR_14)
      VAR_30 += VAR_30 & 1;
  } else if (VAR_28 > VAR_10) {



    VAR_30 = (dst_rep_t)VAR_19 << VAR_1;
    VAR_30 |= VAR_25;
    VAR_30 |=
        ((VAR_28 & VAR_16) >> (VAR_2 - VAR_1)) & VAR_26;
  } else if (VAR_28 >= VAR_24) {

    VAR_30 = (dst_rep_t)VAR_19 << VAR_1;
  } else {



    const int VAR_32 = VAR_28 >> VAR_2;
    const int VAR_33 = VAR_7 - VAR_20 - VAR_32 + 1;

    const src_rep_t VAR_34 = (VAR_27 & VAR_9) | VAR_8;


    if (VAR_33 > VAR_2) {
      VAR_30 = 0;
    } else {
      const bool VAR_35 = VAR_34 << (VAR_4 - VAR_33);
      src_rep_t VAR_36 = VAR_34 >> VAR_33 | VAR_35;
      VAR_30 = VAR_36 >> (VAR_2 - VAR_1);
      const src_rep_t VAR_37 = VAR_36 & VAR_13;

      if (VAR_37 > VAR_14)
        VAR_30++;

      else if (VAR_37 == VAR_14)
        VAR_30 += VAR_30 & 1;
    }
  }


  const dst_rep_t VAR_38 = VAR_30 | VAR_29 >> (VAR_4 - VAR_17);
  return FUNC_2(VAR_38);
}
