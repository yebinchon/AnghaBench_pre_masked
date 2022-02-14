
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ VAR_0 ;
 int FUNC_0 (int,char*) ;
 int FUNC_1 (char*) ;
 int* VAR_1 ;
 scalar_t__ VAR_2 ;
 char* FUNC_2 (char*) ;
 char** VAR_3 ;
 int FUNC_3 () ;
 char** VAR_4 ;

__attribute__((used)) static void
FUNC_4(bool VAR_5, bool VAR_6, char *VAR_7)
{
 int VAR_8;
 char *VAR_9;

 VAR_8 = FUNC_1(VAR_7);
 if (VAR_8 < 0) {
  if (VAR_2 >= VAR_0)
   FUNC_0(2, "too many symbols");
  VAR_8 = VAR_2++;
 }
 VAR_3[VAR_8] = VAR_7;
 VAR_1[VAR_8] = VAR_5;
 VAR_9 = VAR_7 + (FUNC_2(VAR_7) - VAR_7);
 if (VAR_6) {
  if (*VAR_9 == '=') {
   VAR_4[VAR_8] = VAR_9+1;
   *VAR_9 = '\0';
  } else if (*VAR_9 == '\0')
   VAR_4[VAR_8] = "";
  else
   FUNC_3();
 } else {
  if (*VAR_9 != '\0')
   FUNC_3();
  VAR_4[VAR_8] = ((void*)0);
 }
}
