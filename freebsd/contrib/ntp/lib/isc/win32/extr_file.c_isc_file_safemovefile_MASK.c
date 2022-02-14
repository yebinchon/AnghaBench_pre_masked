
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int dummy; } ;
typedef scalar_t__ BOOL ;


 scalar_t__ FUNC_0 (char*) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_1 (char const*,char const*) ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_2 (char const*,int) ;
 int FUNC_3 (int) ;
 int VAR_6 ;
 int FUNC_4 (char*) ;
 scalar_t__ FUNC_5 (char const*,struct stat*) ;
 int FUNC_6 (char*,char*) ;
 int FUNC_7 (char*,char const*) ;

int
FUNC_8(const char *VAR_7, const char *VAR_8) {
 BOOL VAR_9;
 char VAR_10[512];
 struct stat VAR_11;
 BOOL VAR_12 = VAR_2;
 int VAR_13;




 if (FUNC_5(VAR_7, &VAR_11) != 0) {
  VAR_6 = VAR_1;
  return (-1);
 }




 if (FUNC_5(VAR_8, &VAR_11) == 0) {
  VAR_12 = VAR_3;
  FUNC_7(VAR_10, VAR_8);
  FUNC_6(VAR_10, ".XXXXX");
  VAR_13 = FUNC_4(VAR_10);
  if (VAR_13 > 0)
   FUNC_3(VAR_13);
  FUNC_0(VAR_10);
  FUNC_2(VAR_8, VAR_4 | VAR_5);

  VAR_9 = FUNC_1(VAR_8, VAR_10);
 }


 FUNC_2(VAR_7, VAR_4 | VAR_5);

 VAR_9 = FUNC_1(VAR_7, VAR_8);
 if (VAR_9 == 0) {




  if (VAR_12 == VAR_3) {
   VAR_9 = FUNC_1(VAR_10, VAR_8);
   if (VAR_9 == 0)
    VAR_6 = VAR_0;
  }
  return (-1);
 }




 if (VAR_12 == VAR_3)
  VAR_9 = FUNC_0(VAR_10);
 return (0);
}
