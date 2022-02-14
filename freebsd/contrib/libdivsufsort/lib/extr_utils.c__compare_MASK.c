
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ sauchar_t ;
typedef scalar_t__ saint_t ;
typedef size_t saidx_t ;



__attribute__((used)) static
int
FUNC_0(const sauchar_t *VAR_0, saidx_t VAR_1,
         const sauchar_t *VAR_2, saidx_t VAR_3,
         saidx_t VAR_4, saidx_t *VAR_5) {
  saidx_t VAR_6, VAR_7;
  saint_t VAR_8;
  for(VAR_6 = VAR_4 + *VAR_5, VAR_7 = *VAR_5, VAR_8 = 0;
      (VAR_6 < VAR_1) && (VAR_7 < VAR_3) && ((VAR_8 = VAR_0[VAR_6] - VAR_2[VAR_7]) == 0); ++VAR_6, ++VAR_7) { }
  *VAR_5 = VAR_7;
  return (VAR_8 == 0) ? -(VAR_7 != VAR_3) : VAR_8;
}
