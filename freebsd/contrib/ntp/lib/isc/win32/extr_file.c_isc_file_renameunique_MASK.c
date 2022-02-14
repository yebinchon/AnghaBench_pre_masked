
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int) ;
 int VAR_1 ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (char const*,char*) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*) ;

isc_result_t
FUNC_6(const char *VAR_2, char *VAR_3) {
 int VAR_4 = -1;
 int VAR_5 = 0;
 isc_result_t VAR_6 = VAR_0;

 FUNC_0(VAR_2 != ((void*)0));
 FUNC_0(VAR_3 != ((void*)0));

 VAR_4 = FUNC_4(VAR_3);
 if (VAR_4 == -1)
  VAR_6 = FUNC_2(VAR_1);
 else
  FUNC_1(VAR_4);

 if (VAR_6 == VAR_0) {
  VAR_5 = FUNC_3(VAR_2, VAR_3);
  if (VAR_5 != 0) {
   VAR_6 = FUNC_2(VAR_1);
   (void)FUNC_5(VAR_3);
  }
 }
 return (VAR_6);
}
