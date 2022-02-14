
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ time_t ;
typedef scalar_t__ off_t ;
typedef int intmax_t ;
typedef int buf ;


 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (scalar_t__*) ;
 char* VAR_2 ;
 int * FUNC_1 (char*,char*) ;
 char* VAR_3 ;
 int FUNC_2 (char*,int,char*,char*,char*,char*,char*,int ,long) ;
 scalar_t__ VAR_4 ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int ,char*,char*) ;
 int FUNC_5 (scalar_t__*) ;
 int FUNC_6 (scalar_t__,char*,int ) ;

__attribute__((used)) static void
FUNC_7(char *VAR_5, off_t VAR_6, time_t VAR_7)
{
 char VAR_8[VAR_1 + 1024];
 char VAR_9[VAR_1 + 1];
 time_t VAR_10;

 if (VAR_4 >= 0) {
  FUNC_5(&VAR_10);
  if (FUNC_1(VAR_5, VAR_9) == ((void*)0)) {
   FUNC_4(VAR_0, "realpath failed on %s: %m", VAR_9);
   return;
  }
  FUNC_2(VAR_8, sizeof(VAR_8), "%.20s!%s!%s!%s!%jd!%ld\n",
   FUNC_0(&VAR_10)+4, VAR_2, VAR_3,
   VAR_9, (intmax_t)VAR_6,
   (long)(VAR_10 - VAR_7 + (VAR_10 == VAR_7)));
  FUNC_6(VAR_4, VAR_8, FUNC_3(VAR_8));
 }
}
