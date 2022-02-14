
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int u_long ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int,char,char**,size_t*) ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int) ;
 char FUNC_4 (int) ;

int
FUNC_5(u_long VAR_0, char *VAR_1, size_t VAR_2) {
 char *VAR_3 = VAR_1;
 int VAR_4, VAR_5, VAR_6, VAR_7, VAR_8, VAR_9;
 char *VAR_10;

 VAR_4 = VAR_0 % 60; VAR_0 /= 60;
 VAR_5 = VAR_0 % 60; VAR_0 /= 60;
 VAR_6 = VAR_0 % 24; VAR_0 /= 24;
 VAR_7 = VAR_0 % 7; VAR_0 /= 7;
 VAR_8 = VAR_0; VAR_0 = 0;

 VAR_9 = 0;
 if (VAR_8) {
  FUNC_0(FUNC_1(VAR_8, 'W', &VAR_1, &VAR_2));
  VAR_9++;
 }
 if (VAR_7) {
  FUNC_0(FUNC_1(VAR_7, 'D', &VAR_1, &VAR_2));
  VAR_9++;
 }
 if (VAR_6) {
  FUNC_0(FUNC_1(VAR_6, 'H', &VAR_1, &VAR_2));
  VAR_9++;
 }
 if (VAR_5) {
  FUNC_0(FUNC_1(VAR_5, 'M', &VAR_1, &VAR_2));
  VAR_9++;
 }
 if (VAR_4 || !(VAR_8 || VAR_7 || VAR_6 || VAR_5)) {
  FUNC_0(FUNC_1(VAR_4, 'S', &VAR_1, &VAR_2));
  VAR_9++;
 }

 if (VAR_9 > 1) {
  int VAR_11;

  for (VAR_10 = VAR_3; (VAR_11 = *VAR_10) != '\0'; VAR_10++)
   if (FUNC_2(VAR_11) && FUNC_3(VAR_11))
    *VAR_10 = FUNC_4(VAR_11);
 }

 return (VAR_1 - VAR_3);
}
