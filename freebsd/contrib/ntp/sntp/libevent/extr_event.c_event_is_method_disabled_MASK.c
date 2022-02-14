
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int environment ;


 char FUNC_0 (char) ;
 int * FUNC_1 (char*) ;
 int FUNC_2 (char*,int,char*,char const*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_0)
{
 char VAR_1[64];
 int VAR_2;

 FUNC_2(VAR_1, sizeof(VAR_1), "EVENT_NO%s", VAR_0);
 for (VAR_2 = 8; VAR_1[VAR_2] != '\0'; ++VAR_2)
  VAR_1[VAR_2] = FUNC_0(VAR_1[VAR_2]);


 return (FUNC_1(VAR_1) != ((void*)0));
}
