
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sauchar_t ;
typedef int saidx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__ const*,int*,int*,int*,int,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__ const*,int*,int*,int*,int) ;

saidx_t
FUNC_4(const sauchar_t *VAR_2, sauchar_t *VAR_3, saidx_t *VAR_4, saidx_t VAR_5) {
  saidx_t *VAR_6;
  saidx_t *VAR_7, *VAR_8;
  saidx_t VAR_9, VAR_10, VAR_11;


  if((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_5 < 0)) { return -1; }
  else if(VAR_5 <= 1) { if(VAR_5 == 1) { VAR_3[0] = VAR_2[0]; } return VAR_5; }

  if((VAR_6 = VAR_4) == ((void*)0)) { VAR_6 = (saidx_t *)FUNC_2((size_t)(VAR_5 + 1) * sizeof(saidx_t)); }
  VAR_7 = (saidx_t *)FUNC_2(VAR_0 * sizeof(saidx_t));
  VAR_8 = (saidx_t *)FUNC_2(VAR_1 * sizeof(saidx_t));


  if((VAR_6 != ((void*)0)) && (VAR_7 != ((void*)0)) && (VAR_8 != ((void*)0))) {
    VAR_9 = FUNC_3(VAR_2, VAR_6, VAR_7, VAR_8, VAR_5);
    VAR_10 = FUNC_0(VAR_2, VAR_6, VAR_7, VAR_8, VAR_5, VAR_9);


    VAR_3[0] = VAR_2[VAR_5 - 1];
    for(VAR_11 = 0; VAR_11 < VAR_10; ++VAR_11) { VAR_3[VAR_11 + 1] = (sauchar_t)VAR_6[VAR_11]; }
    for(VAR_11 += 1; VAR_11 < VAR_5; ++VAR_11) { VAR_3[VAR_11] = (sauchar_t)VAR_6[VAR_11]; }
    VAR_10 += 1;
  } else {
    VAR_10 = -2;
  }

  FUNC_1(VAR_8);
  FUNC_1(VAR_7);
  if(VAR_4 == ((void*)0)) { FUNC_1(VAR_6); }

  return VAR_10;
}
