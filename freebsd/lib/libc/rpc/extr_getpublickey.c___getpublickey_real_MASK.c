
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char const*,char*) ;
 char* FUNC_1 (char*,char) ;
 int FUNC_2 (char*,char*,int) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_1, char *VAR_2)
{
 char VAR_3[3 * VAR_0];
 char *VAR_4;

 if (VAR_2 == ((void*)0))
  return (0);
 if (!FUNC_0(VAR_1, VAR_3))
  return (0);
 VAR_4 = FUNC_1(VAR_3, ':');
 if (VAR_4 == ((void*)0)) {
  return (0);
 }
 *VAR_4 = '\0';
 (void) FUNC_2(VAR_2, VAR_3, VAR_0);
 VAR_2[VAR_0] = '\0';
 return (1);
}
