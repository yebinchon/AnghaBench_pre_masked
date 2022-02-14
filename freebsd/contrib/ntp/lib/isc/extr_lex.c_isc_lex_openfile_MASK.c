
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef scalar_t__ isc_result_t ;
typedef int isc_lex_t ;
typedef int FILE ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (char const*,char*,int **) ;
 scalar_t__ FUNC_4 (int *,int ,int ,int *,char const*) ;

isc_result_t
FUNC_5(isc_lex_t *VAR_2, const char *VAR_3) {
 isc_result_t VAR_4;
 FILE *VAR_5 = ((void*)0);





 FUNC_0(FUNC_1(VAR_2));

 VAR_4 = FUNC_3(VAR_3, "r", &VAR_5);
 if (VAR_4 != VAR_0)
  return (VAR_4);

 VAR_4 = FUNC_4(VAR_2, VAR_1, VAR_1, VAR_5, VAR_3);
 if (VAR_4 != VAR_0)
  (void)FUNC_2(VAR_5);
 return (VAR_4);
}
