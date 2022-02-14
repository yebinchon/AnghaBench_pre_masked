
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sauchar_t ;
typedef int saint_t ;
typedef int saidx_t ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__ const*,int*,int*,int*,int,int) ;
 int FUNC_1 (int*) ;
 scalar_t__ FUNC_2 (int) ;
 int FUNC_3 (scalar_t__ const*,int*,int*,int*,int) ;

saint_t
FUNC_4(const sauchar_t *VAR_2, saidx_t *VAR_3, saidx_t VAR_4) {
  saidx_t *VAR_5, *VAR_6;
  saidx_t VAR_7;
  saint_t VAR_8 = 0;


  if((VAR_2 == ((void*)0)) || (VAR_3 == ((void*)0)) || (VAR_4 < 0)) { return -1; }
  else if(VAR_4 == 0) { return 0; }
  else if(VAR_4 == 1) { VAR_3[0] = 0; return 0; }
  else if(VAR_4 == 2) { VAR_7 = (VAR_2[0] < VAR_2[1]); VAR_3[VAR_7 ^ 1] = 0, VAR_3[VAR_7] = 1; return 0; }

  VAR_5 = (saidx_t *)FUNC_2(VAR_0 * sizeof(saidx_t));
  VAR_6 = (saidx_t *)FUNC_2(VAR_1 * sizeof(saidx_t));


  if((VAR_5 != ((void*)0)) && (VAR_6 != ((void*)0))) {
    VAR_7 = FUNC_3(VAR_2, VAR_3, VAR_5, VAR_6, VAR_4);
    FUNC_0(VAR_2, VAR_3, VAR_5, VAR_6, VAR_4, VAR_7);
  } else {
    VAR_8 = -2;
  }

  FUNC_1(VAR_6);
  FUNC_1(VAR_5);

  return VAR_8;
}
