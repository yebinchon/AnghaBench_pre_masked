
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 size_t VAR_4 ;
 int FUNC_0 (char const*,char*,size_t) ;
 int FUNC_1 (char*,int ) ;
 char* FUNC_2 (size_t,int ,int ) ;
 int * FUNC_3 (char*,char,size_t) ;

__attribute__((used)) static int
FUNC_4(const char *VAR_5, size_t VAR_6, char **VAR_7)
{
 char *VAR_8;
 int VAR_9;

 if (VAR_6 >= VAR_4)
  return (VAR_1);
 VAR_8 = FUNC_2(VAR_6 + 1, VAR_2, VAR_3);
 VAR_9 = FUNC_0(VAR_5, VAR_8, VAR_6);
 if (VAR_9 != 0) {
  FUNC_1(VAR_8, VAR_2);
  return (VAR_9);
 }
 if (FUNC_3(VAR_8, '\0', VAR_6) != ((void*)0)) {
  FUNC_1(VAR_8, VAR_2);
  return (VAR_0);
 }
 VAR_8[VAR_6] = '\0';
 *VAR_7 = VAR_8;
 return (0);
}
