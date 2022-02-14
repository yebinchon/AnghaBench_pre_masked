
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char*,char*) ;
 scalar_t__ FUNC_1 (char*,char*,int ) ;
 char* FUNC_2 (char*,char) ;
 int FUNC_3 (char*,char*,int) ;
 int FUNC_4 (char*,char*) ;

int
FUNC_5(char *VAR_2, char *VAR_3, char *VAR_4)
{
 char VAR_5[3 * VAR_0];
 char *VAR_6;

 if (VAR_3 == ((void*)0))
  return (0);
 if (!FUNC_0(VAR_2, VAR_5))
  return (0);
 VAR_6 = FUNC_2(VAR_5, ':');
 if (VAR_6 == ((void*)0)) {
  return (0);
 }
 VAR_6++;
 if (!FUNC_4(VAR_6, VAR_4)) {
  return (0);
 }
 if (FUNC_1(VAR_6, VAR_6 + VAR_0, VAR_1) != 0) {
  VAR_3[0] = '\0';
  return (1);
 }
 VAR_6[VAR_0] = '\0';
 (void) FUNC_3(VAR_3, VAR_6, VAR_0);
 VAR_3[VAR_0] = '\0';
 return (1);
}
