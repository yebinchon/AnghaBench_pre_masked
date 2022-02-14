
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_0 (char const*,char) ;
 int FUNC_1 (char*,char const*) ;
 int FUNC_2 (char const*) ;
 int FUNC_3 (char*,char const*,int) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_2, char *VAR_3)
{
 char *VAR_4;

 VAR_4 = FUNC_0(VAR_2, '/');
 if (VAR_4 == ((void*)0)) {
  if (FUNC_2(VAR_2) >= VAR_1)
   return (VAR_0);
  (void) FUNC_1(VAR_3, VAR_2);
 } else {
  if (VAR_4 - VAR_2 >= VAR_1)
   return (VAR_0);
  (void) FUNC_3(VAR_3, VAR_2, VAR_4 - VAR_2);
  VAR_3[VAR_4 - VAR_2] = '\0';
 }
 return (0);
}
