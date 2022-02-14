
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sauchar_t ;
typedef scalar_t__ saint_t ;
typedef scalar_t__ saidx_t ;


 scalar_t__ FUNC_0 (scalar_t__,scalar_t__) ;
 scalar_t__ FUNC_1 (int const*,scalar_t__,int const*,scalar_t__,scalar_t__ const,scalar_t__*) ;

saidx_t
FUNC_2(const sauchar_t *VAR_0, saidx_t VAR_1,
          const sauchar_t *VAR_2, saidx_t VAR_3,
          const saidx_t *VAR_4, saidx_t VAR_5,
          saidx_t *VAR_6) {
  saidx_t VAR_7, VAR_8, VAR_9, VAR_10;
  saidx_t VAR_11, VAR_12, VAR_13;
  saidx_t VAR_14, VAR_15, VAR_16, VAR_17;
  saidx_t VAR_18, VAR_19, VAR_20;
  saint_t VAR_21;

  if(VAR_6 != ((void*)0)) { *VAR_6 = -1; }
  if((VAR_0 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_4 == ((void*)0)) ||
     (VAR_1 < 0) || (VAR_3 < 0) || (VAR_5 < 0)) { return -1; }
  if((VAR_1 == 0) || (VAR_5 == 0)) { return 0; }
  if(VAR_3 == 0) { if(VAR_6 != ((void*)0)) { *VAR_6 = 0; } return VAR_5; }

  for(VAR_18 = VAR_19 = VAR_20 = 0, VAR_12 = VAR_13 = 0, VAR_7 = VAR_5, VAR_10 = VAR_7 >> 1;
      0 < VAR_7;
      VAR_7 = VAR_10, VAR_10 >>= 1) {
    VAR_11 = FUNC_0(VAR_12, VAR_13);
    VAR_21 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4[VAR_18 + VAR_10], &VAR_11);
    if(VAR_21 < 0) {
      VAR_18 += VAR_10 + 1;
      VAR_10 -= (VAR_7 & 1) ^ 1;
      VAR_12 = VAR_11;
    } else if(VAR_21 > 0) {
      VAR_13 = VAR_11;
    } else {
      VAR_8 = VAR_10, VAR_19 = VAR_18, VAR_9 = VAR_7 - VAR_10 - 1, VAR_20 = VAR_18 + VAR_10 + 1;


      for(VAR_14 = VAR_12, VAR_15 = VAR_11, VAR_10 = VAR_8 >> 1;
          0 < VAR_8;
          VAR_8 = VAR_10, VAR_10 >>= 1) {
        VAR_12 = FUNC_0(VAR_14, VAR_15);
        VAR_21 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4[VAR_19 + VAR_10], &VAR_12);
        if(VAR_21 < 0) {
          VAR_19 += VAR_10 + 1;
          VAR_10 -= (VAR_8 & 1) ^ 1;
          VAR_14 = VAR_12;
        } else {
          VAR_15 = VAR_12;
        }
      }


      for(VAR_16 = VAR_11, VAR_17 = VAR_13, VAR_10 = VAR_9 >> 1;
          0 < VAR_9;
          VAR_9 = VAR_10, VAR_10 >>= 1) {
        VAR_13 = FUNC_0(VAR_16, VAR_17);
        VAR_21 = FUNC_1(VAR_0, VAR_1, VAR_2, VAR_3, VAR_4[VAR_20 + VAR_10], &VAR_13);
        if(VAR_21 <= 0) {
          VAR_20 += VAR_10 + 1;
          VAR_10 -= (VAR_9 & 1) ^ 1;
          VAR_16 = VAR_13;
        } else {
          VAR_17 = VAR_13;
        }
      }

      break;
    }
  }

  if(VAR_6 != ((void*)0)) { *VAR_6 = (0 < (VAR_20 - VAR_19)) ? VAR_19 : VAR_18; }
  return VAR_20 - VAR_19;
}
