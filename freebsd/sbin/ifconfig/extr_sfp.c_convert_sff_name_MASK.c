
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*,size_t,char*,char*) ;

__attribute__((used)) static void
FUNC_1(char *VAR_0, size_t VAR_1, char *VAR_2)
{
 char *VAR_3;

 for (VAR_3 = &VAR_2[16]; *(VAR_3 - 1) == 0x20; VAR_3--)
  ;
 *VAR_3 = '\0';
 FUNC_0(VAR_0, VAR_1, "%s", VAR_2);
}
