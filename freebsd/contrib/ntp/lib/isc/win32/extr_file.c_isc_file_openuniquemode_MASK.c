
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int) ;
 int FUNC_2 (int) ;
 int VAR_1 ;
 int FUNC_3 (int,int) ;
 int * FUNC_4 (int,char*) ;
 scalar_t__ FUNC_5 (int ) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (char*) ;

isc_result_t
FUNC_8(char *VAR_2, int VAR_3, FILE **VAR_4) {
 int VAR_5;
 FILE *VAR_6;
 isc_result_t VAR_7 = VAR_0;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_4 != ((void*)0) && *VAR_4 == ((void*)0));




 VAR_5 = FUNC_6(VAR_2);

 if (VAR_5 == -1)
  VAR_7 = FUNC_5(VAR_1);
 if (VAR_7 == VAR_0) {

  FUNC_1(VAR_3);



  VAR_6 = FUNC_4(VAR_5, "w+");
  if (VAR_6 == ((void*)0)) {
   VAR_7 = FUNC_5(VAR_1);
   (void)FUNC_7(VAR_2);
   (void)FUNC_2(VAR_5);
  } else
   *VAR_4 = VAR_6;
 }

 return (VAR_7);
}
