
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char const*,char**) ;
 int VAR_0 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 () ;
 int FUNC_4 (char*,char*,int) ;
 size_t FUNC_5 (char*) ;

__attribute__((used)) static int
FUNC_6(const char *VAR_1, char *VAR_2, int VAR_3)
{
 char *VAR_4;




 FUNC_3();
 if (FUNC_0(VAR_1, &VAR_4) < 0) {



  return (-2);
 }





 if (VAR_4 != ((void*)0) && (FUNC_5(VAR_4) >= (size_t)VAR_3)) {



  return (-3);
 }
 FUNC_4(VAR_2, VAR_4 != ((void*)0) ? VAR_4 : "", VAR_3);



 return (0);
}
