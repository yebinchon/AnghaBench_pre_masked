
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct sigaction {int sa_mask; scalar_t__ sa_flags; scalar_t__ sa_handler; } ;
typedef scalar_t__ sig_t ;






 int VAR_0 ;

 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;


 char VAR_3 ;

 char VAR_4 ;
 int FUNC_0 (int,scalar_t__*) ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_1 (int,struct sigaction*,int *) ;
 int FUNC_2 (int *) ;
 char* VAR_9 ;
 char** VAR_10 ;

void
FUNC_3(int VAR_11)
{
 int VAR_12;
 sig_t VAR_13 = VAR_1;
 struct sigaction VAR_14;
 char *VAR_15;

 if ((VAR_15 = VAR_10[VAR_11]) == ((void*)0))
  VAR_12 = 129;
 else if (*VAR_15 != '\0')
  VAR_12 = 130;
 else
  VAR_12 = 128;
 if (VAR_12 == 129) {
  switch (VAR_11) {
  case 135:
   VAR_12 = 130;
   break;
  case 134:
   VAR_12 = 130;
   break;
  case 133:
   if (VAR_8 && VAR_5)
    VAR_12 = 128;
   break;







  }
 }

 VAR_15 = &VAR_9[VAR_11];
 if (*VAR_15 == 0) {



  if (!FUNC_0(VAR_11, &VAR_13)) {





   return;
  }
  if (VAR_13 == VAR_2) {
   if (VAR_6 && (VAR_11 == 132 ||
        VAR_11 == VAR_0 || VAR_11 == 131)) {
    *VAR_15 = 128;
   } else
    *VAR_15 = VAR_3;
  } else {
   *VAR_15 = VAR_4;
  }
 }
 if (*VAR_15 == VAR_3 || *VAR_15 == VAR_12)
  return;
 switch (VAR_12) {
  case 129: VAR_13 = VAR_1; break;
  case 130: VAR_13 = VAR_7; break;
  case 128: VAR_13 = VAR_2; break;
 }
 *VAR_15 = VAR_12;
 VAR_14.sa_handler = VAR_13;
 VAR_14.sa_flags = 0;
 FUNC_2(&VAR_14.sa_mask);
 FUNC_1(VAR_11, &VAR_14, ((void*)0));
}
