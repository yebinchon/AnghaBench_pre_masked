
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*) ;
 int FUNC_1 (char const*,int) ;
 int FUNC_2 (char const*,int,char const*,int) ;
 scalar_t__ FUNC_3 (char const*,int) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (char const*,int,char*,char const*) ;
 scalar_t__ FUNC_6 (char const*,int) ;

int
FUNC_7(const char *VAR_0, int VAR_1, const char *VAR_2, int VAR_3)
{
 FUNC_1(VAR_0, VAR_1);





 if (0 == FUNC_6(VAR_2, VAR_3)) {
  if (0 == FUNC_3(VAR_2, VAR_3)) {
   FUNC_2(VAR_0, VAR_1, VAR_2, VAR_3);
   return (1);
  }
 }

 FUNC_5(VAR_0, VAR_1, "Could not create directory %s", VAR_2);
 FUNC_4(((void*)0));
 return(0);
}
