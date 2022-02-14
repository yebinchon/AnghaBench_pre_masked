
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int FUNC_0 (char*) ;
 char* FUNC_1 (size_t) ;
 int FUNC_2 (char*,char const*,int ) ;
 char* FUNC_3 (char const*) ;
 int FUNC_4 (char*,char*,size_t) ;
 int FUNC_5 (char const*) ;
 char* FUNC_6 (char**,char*) ;

__attribute__((used)) static char *
FUNC_7(const char *VAR_0, const char *VAR_1, int VAR_2)
{
 size_t VAR_3 = FUNC_5(VAR_0) + 1;
 char *VAR_4 = FUNC_1(VAR_3);
 char *VAR_5 = FUNC_3(VAR_0);
 char *VAR_6, *VAR_7;
 int VAR_8;

 if (VAR_4 == ((void*)0) || VAR_5 == ((void*)0)) {
  FUNC_0(VAR_5);
  FUNC_0(VAR_4);
  return ((void*)0);
 }

 VAR_7 = VAR_5;
 *VAR_4 = '\0';
 while ((VAR_6 = FUNC_6(&VAR_7, ",")) != ((void*)0)) {
  VAR_8 = FUNC_2(VAR_6, VAR_1, 0);
  if ((VAR_2 && VAR_8 != 1) || (!VAR_2 && VAR_8 == 1)) {
   if (*VAR_4 != '\0')
    FUNC_4(VAR_4, ",", VAR_3);
   FUNC_4(VAR_4, VAR_6, VAR_3);
  }
 }
 FUNC_0(VAR_5);
 return VAR_4;
}
