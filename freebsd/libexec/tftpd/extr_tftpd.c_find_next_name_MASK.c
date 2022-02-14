
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int yyyymmdd ;
typedef int time_t ;
struct tm {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 struct tm* FUNC_0 (int *) ;
 int VAR_13 ;
 int FUNC_1 (char*,int,int) ;
 int FUNC_2 (char*,char*,char*,char*,int) ;
 size_t FUNC_3 (char*,int,int ,struct tm*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (int ,char*,int,...) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static int
FUNC_7(char *VAR_14, int *VAR_15)
{
 int VAR_16;
 time_t VAR_17;
 size_t VAR_18;
 struct tm VAR_19;
 char VAR_20[VAR_3];
 char VAR_21[VAR_3];


 FUNC_6(&VAR_17);
 VAR_19 = *FUNC_0(&VAR_17);
 VAR_18 = FUNC_3(VAR_20, sizeof(VAR_20), VAR_13, &VAR_19);
 if (VAR_18 == 0) {
  FUNC_5(VAR_2,
   "Filename suffix too long (%d characters maximum)",
   VAR_3);
  return (VAR_0);
 }


 if (FUNC_4(VAR_14) > VAR_3 - VAR_18 - 5) {
  FUNC_5(VAR_2,
   "Filename too long (%zd characters, %zd maximum)",
   FUNC_4(VAR_14), VAR_3 - VAR_18 - 5);
  return (VAR_0);
 }


 for (VAR_16 = 0; VAR_16 < 100; VAR_16++) {
  FUNC_2(VAR_21, "%s.%s.%02d", VAR_14, VAR_20, VAR_16);
  *VAR_15 = FUNC_1(VAR_21,
      VAR_6 | VAR_4 | VAR_5,
      VAR_9 | VAR_12 | VAR_7 |
      VAR_10 | VAR_8 | VAR_11);
  if (*VAR_15 > 0)
   return 0;
 }

 return (VAR_1);
}
