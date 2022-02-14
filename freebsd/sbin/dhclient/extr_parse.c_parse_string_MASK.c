
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (char*,char*) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (size_t) ;
 int FUNC_3 (char*,char*,size_t) ;
 int FUNC_4 (char**,int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (char*) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (char*) ;

char *
FUNC_9(FILE *VAR_1)
{
 char *VAR_2, *VAR_3;
 size_t VAR_4;
 int VAR_5;

 VAR_5 = FUNC_4(&VAR_2, VAR_1);
 if (VAR_5 != VAR_0) {
  FUNC_6("filename must be a string");
  FUNC_7(VAR_1);
  return (((void*)0));
 }
 VAR_4 = FUNC_8(VAR_2) + 1;
 VAR_3 = FUNC_2(VAR_4);
 if (!VAR_3)
  FUNC_0("no memory for string %s.", VAR_2);
 FUNC_3(VAR_3, VAR_2, VAR_4);

 if (!FUNC_5(VAR_1)) {
  FUNC_1(VAR_3);
  return (((void*)0));
 }
 return (VAR_3);
}
