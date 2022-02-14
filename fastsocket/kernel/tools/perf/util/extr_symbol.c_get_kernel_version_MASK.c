
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int version ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 char* FUNC_1 (char*,int,int *) ;
 int * FUNC_2 (char*,char*) ;
 int FUNC_3 (char*,char*,char const*) ;
 char* FUNC_4 (char*,char) ;
 char* FUNC_5 (char*) ;
 int FUNC_6 (char const*) ;
 char* FUNC_7 (char*,char const*) ;

__attribute__((used)) static char *FUNC_8(const char *VAR_1)
{
 char VAR_2[VAR_0];
 FILE *VAR_3;
 char *VAR_4, *VAR_5;
 const char *VAR_6 = "Linux version ";

 FUNC_3(VAR_2, "%s/proc/version", VAR_1);
 VAR_3 = FUNC_2(VAR_2, "r");
 if (!VAR_3)
  return ((void*)0);

 VAR_2[0] = '\0';
 VAR_5 = FUNC_1(VAR_2, sizeof(VAR_2), VAR_3);
 FUNC_0(VAR_3);

 VAR_4 = FUNC_7(VAR_2, VAR_6);
 if (!VAR_4)
  return ((void*)0);
 VAR_4 += FUNC_6(VAR_6);
 VAR_5 = FUNC_4(VAR_4, ' ');
 if (VAR_5)
  *VAR_5 = '\0';

 return FUNC_5(VAR_4);
}
