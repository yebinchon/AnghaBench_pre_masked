
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int fileargs_t ;
typedef int FILE ;


 int VAR_0 ;
 int FUNC_0 (int *) ;
 int * FUNC_1 (int *,char const*,char*) ;
 int FUNC_2 (char const*,int *) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (char*,char const*,int ) ;

int
FUNC_5(fileargs_t *VAR_1, const char *VAR_2)
{
 FILE *VAR_3;
 int VAR_4;

 if (VAR_2 == ((void*)0))
  return (1);
 VAR_3 = FUNC_1(VAR_1, VAR_2, "rb");
 if (VAR_3 == ((void*)0)) {
  FUNC_4("'%s': %s", VAR_2, FUNC_3(VAR_0));
  return (1);
 }

 VAR_4 = FUNC_2(VAR_2, VAR_3);
 FUNC_0(VAR_3);
 return (VAR_4);
}
