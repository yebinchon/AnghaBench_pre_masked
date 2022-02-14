
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef unsigned int rep_t ;


 unsigned int VAR_0 ;

__attribute__((used)) static __inline void FUNC_0(rep_t *VAR_1, rep_t *VAR_2,
                                              unsigned int VAR_3) {
  if (VAR_3 < VAR_0) {
    const bool VAR_4 = *VAR_2 << (VAR_0 - VAR_3);
    *VAR_2 = *VAR_1 << (VAR_0 - VAR_3) | *VAR_2 >> VAR_3 | VAR_4;
    *VAR_1 = *VAR_1 >> VAR_3;
  } else if (VAR_3 < 2 * VAR_0) {
    const bool VAR_5 = *VAR_1 << (2 * VAR_0 - VAR_3) | *VAR_2;
    *VAR_2 = *VAR_1 >> (VAR_3 - VAR_0) | VAR_5;
    *VAR_1 = 0;
  } else {
    const bool VAR_6 = *VAR_1 | *VAR_2;
    *VAR_2 = VAR_6;
    *VAR_1 = 0;
  }
}
