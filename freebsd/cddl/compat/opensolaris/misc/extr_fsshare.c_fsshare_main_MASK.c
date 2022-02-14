
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tmpfile ;
typedef int FILE ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 char* VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_0 (int) ;
 int VAR_7 ;
 int FUNC_1 (int *) ;
 int * FUNC_2 (int,char*) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int,int ) ;
 int * FUNC_7 (char const*,char*) ;
 int FUNC_8 (int *,char*,char const*,...) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (char*,char const*) ;
 int FUNC_11 () ;
 int FUNC_12 (char*,char*,int) ;
 int FUNC_13 (char*,char const*,int) ;
 char* FUNC_14 (char const*) ;
 int FUNC_15 (char*) ;
 char* FUNC_16 (int *,char const*) ;

__attribute__((used)) static int
FUNC_17(const char *VAR_8, const char *VAR_9, const char *VAR_10,
    int VAR_11)
{
 char VAR_12[VAR_6];
 char *VAR_13;
 FILE *VAR_14, *VAR_15;
 int VAR_16, VAR_17;

 VAR_14 = VAR_15 = ((void*)0);
 VAR_17 = 0;





 if (FUNC_13(VAR_12, VAR_8, sizeof(VAR_12)) >= sizeof(VAR_12))
  return (VAR_0);
 if (FUNC_12(VAR_12, ".XXXXXXXX", sizeof(VAR_12)) >= sizeof(VAR_12))
  return (VAR_0);
 VAR_16 = FUNC_9(VAR_12);
 if (VAR_16 == -1)
  return (VAR_7);




 VAR_17 = FUNC_6(VAR_16, VAR_4);
 FUNC_0(VAR_17 == 0 || (VAR_17 == -1 && VAR_7 == VAR_2));
 VAR_14 = FUNC_2(VAR_16, "r+");
 FUNC_0(VAR_14 != ((void*)0));

 VAR_15 = FUNC_7(VAR_8, "r");
 if (VAR_15 == ((void*)0)) {
  if (VAR_11) {
   if (VAR_7 != VAR_1) {
    VAR_17 = VAR_7;
    goto out;
   }
  } else {

   if (VAR_7 == VAR_1)
    VAR_7 = 0;
   VAR_17 = VAR_7;
   goto out;
  }
 } else {
  VAR_17 = FUNC_6(FUNC_5(VAR_15), VAR_4);
  FUNC_0(VAR_17 == 0 || (VAR_17 == -1 && VAR_7 == VAR_2));
  VAR_17 = 0;
 }


 FUNC_8(VAR_14, "%s", VAR_3);
 while (VAR_15 != ((void*)0) && (VAR_13 = FUNC_16(VAR_15, VAR_9)) != ((void*)0))
  FUNC_8(VAR_14, "%s\n", VAR_13);
 if (VAR_15 != ((void*)0) && FUNC_3(VAR_15) != 0) {
  VAR_17 = FUNC_3(VAR_15);
  goto out;
 }
 if (FUNC_3(VAR_14) != 0) {
  VAR_17 = FUNC_3(VAR_14);
  goto out;
 }
 if (VAR_11) {
  FUNC_8(VAR_14, "%s\t%s\n", VAR_9,
      FUNC_14(VAR_10));
 }

out:
 if (VAR_17 != 0)
  FUNC_15(VAR_12);
 else {
  if (FUNC_10(VAR_12, VAR_8) == -1) {
   VAR_17 = VAR_7;
   FUNC_15(VAR_12);
  } else {
   FUNC_4(VAR_14);



   FUNC_11();
  }
 }
 if (VAR_15 != ((void*)0)) {
  FUNC_6(FUNC_5(VAR_15), VAR_5);
  FUNC_1(VAR_15);
 }
 if (VAR_14 != ((void*)0)) {
  FUNC_6(FUNC_5(VAR_14), VAR_5);
  FUNC_1(VAR_14);
 }
 return (VAR_17);
}
