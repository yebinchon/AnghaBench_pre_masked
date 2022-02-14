
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int pwd ;
typedef int conn_t ;


 int FUNC_0 (char*,int,char const*,char const*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int *,char*,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char*) ;
 char* FUNC_5 (char const*,char) ;

__attribute__((used)) static int
FUNC_6(conn_t *VAR_4, const char *VAR_5)
{
 const char *VAR_6, *VAR_7;
 char VAR_8[VAR_3];
 int VAR_9, VAR_10, VAR_11;


 if ((VAR_7 = FUNC_5(VAR_5, '/')) == ((void*)0))
  return (0);
 if ((VAR_9 = FUNC_1(VAR_4, "PWD")) != VAR_2 ||
     (VAR_9 = FUNC_2(VAR_4, VAR_8, sizeof(VAR_8))) != VAR_1) {
  FUNC_3(VAR_9);
  return (-1);
 }
 for (;;) {
  VAR_11 = FUNC_4(VAR_8);


  for (VAR_10 = 0; VAR_10 <= VAR_11 && VAR_10 <= VAR_7 - VAR_5; ++VAR_10)
   if (VAR_8[VAR_10] != VAR_5[VAR_10])
    break;





  if (VAR_8[VAR_10] == '\0' && (VAR_5[VAR_10 - 1] == '/' || VAR_5[VAR_10] == '/'))
   break;
  if ((VAR_9 = FUNC_1(VAR_4, "CDUP")) != VAR_0 ||
      (VAR_9 = FUNC_1(VAR_4, "PWD")) != VAR_2 ||
      (VAR_9 = FUNC_2(VAR_4, VAR_8, sizeof(VAR_8))) != VAR_1) {
   FUNC_3(VAR_9);
   return (-1);
  }
 }
 for (VAR_6 = VAR_5 + VAR_10; VAR_6 < VAR_7; VAR_6 = VAR_5 + VAR_10 + 1) {
  while (*VAR_6 == '/')
   ++VAR_6, ++VAR_10;
  for (++VAR_10; VAR_5 + VAR_10 < VAR_7 && VAR_5[VAR_10] != '/'; ++VAR_10)
                 ;
  VAR_9 = FUNC_1(VAR_4, "CWD %.*s", VAR_5 + VAR_10 - VAR_6, VAR_6);
  if (VAR_9 != VAR_0) {
   FUNC_3(VAR_9);
   return (-1);
  }
 }
 return (0);
}
