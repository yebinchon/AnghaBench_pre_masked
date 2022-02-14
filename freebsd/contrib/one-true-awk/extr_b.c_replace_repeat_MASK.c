
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef char uschar ;


 int FUNC_0 (char*,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char const* VAR_3 ;
 char const* VAR_4 ;
 int VAR_5 ;
 scalar_t__ FUNC_1 (int) ;
 int FUNC_2 (char*,char const*,int) ;
 char* VAR_6 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (char const*) ;

__attribute__((used)) static int
FUNC_5(const uschar *VAR_7, int VAR_8, const uschar *VAR_9,
        int VAR_10, int VAR_11, int VAR_12, int VAR_13)
{
 int VAR_14, VAR_15;
 uschar *VAR_16 = 0;
 int VAR_17 = 1;
 int VAR_18 = (VAR_11==0);
 int VAR_19 = VAR_12-VAR_11;
 int VAR_20 = VAR_7 - VAR_3;
 int VAR_21 = FUNC_3((char *) VAR_7) - VAR_8;
 int VAR_22 = VAR_20 + VAR_21;

 if (VAR_11 > 1) {
  VAR_22 += VAR_10*(VAR_11-1);
 }


 if (VAR_13 == VAR_0) {
  VAR_22++;
 } else if (VAR_13 == VAR_1) {
  VAR_22 += VAR_18 + (VAR_10+1)* VAR_19;
 } else if (VAR_13 == VAR_2) {
  VAR_22 += 2;
 }
 if ((VAR_16 = (uschar *) FUNC_1(VAR_22+1)) == ((void*)0))
  FUNC_0("out of space in reg expr %.10s..", VAR_5);
 FUNC_2(VAR_16, VAR_3, VAR_20);
 VAR_15 = VAR_20;
 if (VAR_13 == VAR_2) {
  VAR_15 -= VAR_10;
  VAR_16[VAR_15++] = '(';
  VAR_16[VAR_15++] = ')';
 }
 for (VAR_14=1; VAR_14 < VAR_11; VAR_14++) {
  FUNC_2(&VAR_16[VAR_15], VAR_9, VAR_10);
  VAR_15 += VAR_10;
 }
 if (VAR_13 == VAR_0) {
  VAR_16[VAR_15++] = '+';
 } else if (VAR_13 == VAR_1) {
  if (VAR_18) VAR_16[VAR_15++] = '?';
  for (VAR_14=0; VAR_14 < VAR_19; VAR_14++) {
   FUNC_2(&VAR_16[VAR_15], VAR_9, VAR_10);
   VAR_15 += VAR_10;
   VAR_16[VAR_15++] = '?';
  }
 }
 FUNC_2(&VAR_16[VAR_15], VAR_7+VAR_8, VAR_21);
 if (VAR_13 == VAR_2) {
  VAR_16[VAR_15+VAR_21] = '\0';
 } else {
  VAR_16[VAR_22] = '\0';
 }

 if (VAR_4 != VAR_3) {
  if (VAR_3)
   FUNC_4(VAR_3);
 }
 VAR_3 = VAR_16;
 VAR_6 = VAR_16 + VAR_20;
 if (VAR_13 == VAR_2) {
  VAR_6 -= VAR_10;
  VAR_17++;
 }
 return VAR_17;
}
