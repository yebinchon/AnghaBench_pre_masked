
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef scalar_t__ isc_result_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_1 (int) ;
 int VAR_10 ;
 int * FUNC_2 (int,char*) ;
 scalar_t__ FUNC_3 (char const*,struct stat*) ;
 scalar_t__ FUNC_4 (int ) ;
 int FUNC_5 (char const*,int,int) ;

isc_result_t
FUNC_6(const char *VAR_11, FILE **VAR_12) {
 isc_result_t VAR_13;
 int VAR_14;
 struct stat VAR_15;
 FILE *VAR_16;
 int VAR_17;

 FUNC_0(VAR_11 != ((void*)0));
 FUNC_0(VAR_12 != ((void*)0) && *VAR_12 == ((void*)0));

 VAR_13 = FUNC_3(VAR_11, &VAR_15);
 if (VAR_13 == VAR_2) {
  if ((VAR_15.st_mode & VAR_7) == 0)
   return (VAR_1);
  VAR_14 = VAR_6 | VAR_5;
 } else if (VAR_13 == VAR_0) {
  VAR_14 = VAR_6 | VAR_3 | VAR_4;
 } else
  return (VAR_13);

 VAR_17 = FUNC_5(VAR_11, VAR_14, VAR_8 | VAR_9);
 if (VAR_17 == -1)
  return (FUNC_4(VAR_10));

 VAR_16 = FUNC_2(VAR_17, "w");
 if (VAR_16 == ((void*)0)) {
  VAR_13 = FUNC_4(VAR_10);
  FUNC_1(VAR_17);
  return (VAR_13);
 }

 *VAR_12 = VAR_16;
 return (VAR_2);
}
