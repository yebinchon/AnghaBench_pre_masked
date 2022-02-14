
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef size_t sauchar_t ;
typedef int saint_t ;
typedef int saidx_t ;


 int VAR_0 ;
 size_t FUNC_0 (int*,int,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (size_t) ;

saint_t
FUNC_3(const sauchar_t *VAR_1, sauchar_t *VAR_2, saidx_t *VAR_3,
                     saidx_t VAR_4, saidx_t VAR_5) {
  saidx_t VAR_6[VAR_0];
  sauchar_t VAR_7[VAR_0];
  saidx_t *VAR_8;
  saidx_t VAR_9, VAR_10;
  saint_t VAR_11, VAR_12;


  if((VAR_1 == ((void*)0)) || (VAR_2 == ((void*)0)) || (VAR_4 < 0) || (VAR_5 < 0) ||
     (VAR_4 < VAR_5) || ((0 < VAR_4) && (VAR_5 == 0))) {
    return -1;
  }
  if(VAR_4 <= 1) { return 0; }

  if((VAR_8 = VAR_3) == ((void*)0)) {

    if((VAR_8 = (saidx_t *)FUNC_2((size_t)VAR_4 * sizeof(saidx_t))) == ((void*)0)) { return -2; }
  }


  for(VAR_11 = 0; VAR_11 < VAR_0; ++VAR_11) { VAR_6[VAR_11] = 0; }
  for(VAR_9 = 0; VAR_9 < VAR_4; ++VAR_9) { ++VAR_6[VAR_1[VAR_9]]; }
  for(VAR_11 = 0, VAR_12 = 0, VAR_9 = 0; VAR_11 < VAR_0; ++VAR_11) {
    VAR_10 = VAR_6[VAR_11];
    if(0 < VAR_10) {
      VAR_6[VAR_11] = VAR_9;
      VAR_7[VAR_12++] = (sauchar_t)VAR_11;
      VAR_9 += VAR_10;
    }
  }
  for(VAR_9 = 0; VAR_9 < VAR_5; ++VAR_9) { VAR_8[VAR_6[VAR_1[VAR_9]]++] = VAR_9; }
  for( ; VAR_9 < VAR_4; ++VAR_9) { VAR_8[VAR_6[VAR_1[VAR_9]]++] = VAR_9 + 1; }
  for(VAR_11 = 0; VAR_11 < VAR_12; ++VAR_11) { VAR_6[VAR_11] = VAR_6[VAR_7[VAR_11]]; }
  for(VAR_9 = 0, VAR_10 = VAR_5; VAR_9 < VAR_4; ++VAR_9) {
    VAR_2[VAR_9] = VAR_7[FUNC_0(VAR_6, VAR_12, VAR_10)];
    VAR_10 = VAR_8[VAR_10 - 1];
  }

  if(VAR_3 == ((void*)0)) {

    FUNC_1(VAR_8);
  }

  return 0;
}
