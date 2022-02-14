
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (char**,char*,int ,char const*) ;
 int FUNC_1 (int) ;
 int VAR_4 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (int) ;
 int FUNC_4 (char const*,int ) ;
 char* FUNC_5 (char const*) ;

__attribute__((used)) static char *
FUNC_6(const char *VAR_5, int *VAR_6, int VAR_7)
{
 char *VAR_8;
 int VAR_9;


 if (VAR_6 != ((void*)0))
  *VAR_6 = -1;


 VAR_9 = FUNC_4(VAR_5, VAR_7 ? VAR_2 : VAR_1);
 if (VAR_9 != -1) {
  if ((VAR_8 = FUNC_5(VAR_5)) == ((void*)0)) {
   FUNC_1(VAR_9);
   return (((void*)0));
  }
  goto fd_ok;
 }


 if (*VAR_5 == '/')
  return (((void*)0));

 FUNC_0(&VAR_8, "%d%s", VAR_3, VAR_5);
 if (VAR_8 == ((void*)0))
  return (((void*)0));
 VAR_9 = FUNC_4(VAR_8, VAR_7 ? VAR_2 : VAR_1);
 if (VAR_9 == -1) {
  FUNC_2(VAR_8);
  return (((void*)0));
 }

fd_ok:



 if (FUNC_3(VAR_9) == -1) {
  FUNC_2(VAR_8);
  FUNC_1(VAR_9);
  VAR_4 = VAR_0;
  return (((void*)0));
 }
 if (VAR_6 != ((void*)0))
  *VAR_6 = VAR_9;
 else
  FUNC_1(VAR_9);
 return (VAR_8);
}
