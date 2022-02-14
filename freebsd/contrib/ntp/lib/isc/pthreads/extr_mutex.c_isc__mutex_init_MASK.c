
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int strbuf ;
typedef int isc_result_t ;
typedef int isc_mutex_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_0 (char const*,unsigned int,char*,char*) ;
 int VAR_6 ;
 int FUNC_1 (int ,char*,int) ;
 int FUNC_2 (int *,int ) ;

isc_result_t
FUNC_3(isc_mutex_t *VAR_7, const char *VAR_8, unsigned int VAR_9) {
 char VAR_10[VAR_4];
 isc_result_t VAR_11 = VAR_2;
 int VAR_12;

 VAR_12 = FUNC_2(VAR_7, VAR_5);
 if (VAR_12 == VAR_0)
  return (VAR_1);
 if (VAR_12 != 0) {
  FUNC_1(VAR_6, VAR_10, sizeof(VAR_10));
  FUNC_0(VAR_8, VAR_9, "isc_mutex_init() failed: %s",
     VAR_10);
  VAR_11 = VAR_3;
 }
 return (VAR_11);
}
