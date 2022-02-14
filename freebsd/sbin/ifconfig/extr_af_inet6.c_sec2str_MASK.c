
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;


 int FUNC_0 (char*,char*,unsigned long) ;

__attribute__((used)) static char *
FUNC_1(time_t VAR_0)
{
 static char VAR_1[256];
 int VAR_2, VAR_3, VAR_4, VAR_5;
 int VAR_6 = 1;
 char *VAR_7 = VAR_1;

 if (0) {
  VAR_2 = VAR_0 / 3600 / 24;
  VAR_3 = (VAR_0 / 3600) % 24;
  VAR_4 = (VAR_0 / 60) % 60;
  VAR_5 = VAR_0 % 60;

  if (VAR_2) {
   VAR_6 = 0;
   VAR_7 += FUNC_0(VAR_7, "%dd", VAR_2);
  }
  if (!VAR_6 || VAR_3) {
   VAR_6 = 0;
   VAR_7 += FUNC_0(VAR_7, "%dh", VAR_3);
  }
  if (!VAR_6 || VAR_4) {
   VAR_6 = 0;
   VAR_7 += FUNC_0(VAR_7, "%dm", VAR_4);
  }
  FUNC_0(VAR_7, "%ds", VAR_5);
 } else
  FUNC_0(VAR_1, "%lu", (unsigned long)VAR_0);

 return(VAR_1);
}
