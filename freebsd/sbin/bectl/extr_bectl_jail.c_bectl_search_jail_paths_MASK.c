
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int lastjid ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,char*,char*,char**,int *) ;
 int FUNC_1 (char*,int,char*,int) ;
 scalar_t__ FUNC_2 (char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1)
{
 int VAR_2;
 char VAR_3[16];
 char VAR_4[VAR_0];


 FUNC_1(VAR_3, sizeof(VAR_3), "%d", 0);

 while ((VAR_2 = FUNC_0(0, "lastjid", VAR_3, "path", &VAR_4,
     ((void*)0))) != -1) {


  if (FUNC_2(VAR_4, VAR_1) == 0)
   return (VAR_2);


  FUNC_1(VAR_3, sizeof(VAR_3), "%d", VAR_2);
 }

 return (-1);
}
