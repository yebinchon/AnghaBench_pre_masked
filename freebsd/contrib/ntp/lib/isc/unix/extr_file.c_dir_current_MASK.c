
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int) ;
 scalar_t__ VAR_3 ;
 char* FUNC_1 (char*,size_t) ;
 int FUNC_2 (scalar_t__) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char*) ;

__attribute__((used)) static isc_result_t
FUNC_5(char *VAR_4, size_t VAR_5) {
 char *VAR_6;
 isc_result_t VAR_7 = VAR_2;

 FUNC_0(VAR_4 != ((void*)0));
 FUNC_0(VAR_5 > 0U);

 VAR_6 = FUNC_1(VAR_4, VAR_5);

 if (VAR_6 == ((void*)0)) {
  if (VAR_3 == VAR_0)
   VAR_7 = VAR_1;
  else
   VAR_7 = FUNC_2(VAR_3);
 } else {
  if (FUNC_4(VAR_4) + 1 == VAR_5)
   VAR_7 = VAR_1;
  else if (VAR_4[1] != '\0')
   FUNC_3(VAR_4, "/", VAR_5);
 }

 return (VAR_7);
}
