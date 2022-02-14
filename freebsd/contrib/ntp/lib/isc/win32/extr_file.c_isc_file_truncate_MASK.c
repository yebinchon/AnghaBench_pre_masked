
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int isc_result_t ;
typedef int isc_offset_t ;


 int VAR_0 ;
 int FUNC_0 (int) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int,int ) ;
 int FUNC_2 (int) ;
 int VAR_3 ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char const*,int) ;

isc_result_t
FUNC_5(const char *VAR_4, isc_offset_t VAR_5) {
 int VAR_6;

 FUNC_0(VAR_4 != ((void*)0) && VAR_5 >= 0);

 if ((VAR_6 = FUNC_4(VAR_4, VAR_2 | VAR_1)) < 0)
  return (FUNC_3(VAR_3));

 if(FUNC_1(VAR_6, VAR_5) != 0) {
  FUNC_2(VAR_6);
  return (FUNC_3(VAR_3));
 }
 FUNC_2(VAR_6);

 return (VAR_0);
}
