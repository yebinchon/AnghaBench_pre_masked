
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int nvlist_t ;
typedef int fsname ;
typedef int boolean_t ;


 int VAR_0 ;
 int VAR_1 ;
 int * FUNC_0 () ;
 int FUNC_1 (char*,int *,int **) ;
 int FUNC_2 (int *,char*) ;
 int FUNC_3 (int *) ;
 char* FUNC_4 (char*,char) ;
 int FUNC_5 (char*,char const*,int) ;

boolean_t
FUNC_6(const char *VAR_2)
{
 nvlist_t *VAR_3;
 nvlist_t *VAR_4;
 char VAR_5[VAR_1];
 char *VAR_6;
 char *VAR_7;
 int VAR_8;
 boolean_t VAR_9;


 (void) FUNC_5(VAR_5, VAR_2, sizeof (VAR_5));
 VAR_7 = FUNC_4(VAR_5, '#');
 if (VAR_7 == ((void*)0))
  return (VAR_0);

 *VAR_7 = '\0';
 VAR_6 = VAR_7 + 1;
 VAR_4 = FUNC_0();
 VAR_8 = FUNC_1(VAR_5, VAR_4, &VAR_3);
 FUNC_3(VAR_4);
 if (VAR_8 != 0) {
  FUNC_3(VAR_3);
  return (VAR_0);
 }

 VAR_9 = FUNC_2(VAR_3, VAR_6);
 FUNC_3(VAR_3);
 return (VAR_9);
}
