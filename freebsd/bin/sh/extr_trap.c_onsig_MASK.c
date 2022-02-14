
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 () ;
 int VAR_7 ;
 int VAR_8 ;
 scalar_t__ VAR_9 ;
 char** VAR_10 ;

void
FUNC_1(int VAR_11)
{

 if (VAR_11 == VAR_2 && VAR_10[VAR_2] == ((void*)0)) {





  if (VAR_9 && !VAR_6)
   VAR_0;
  else
   FUNC_0();
  return;
 }


 if (VAR_11 == VAR_2 || VAR_11 == VAR_3)
  VAR_8 = VAR_11;

 if (VAR_10[VAR_11] != ((void*)0) && VAR_10[VAR_11][0] != '\0' &&
     (VAR_11 != VAR_1 || !VAR_5)) {
  VAR_4[VAR_11] = 1;
  VAR_7 = VAR_11;
  VAR_8 = VAR_11;
 }
}
