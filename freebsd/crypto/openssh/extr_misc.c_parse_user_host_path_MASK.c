
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char* FUNC_0 (char*) ;
 char* FUNC_1 (char*) ;
 int FUNC_2 (char*) ;
 char* FUNC_3 (char*,char) ;
 char* FUNC_4 (char const*) ;

int
FUNC_5(const char *VAR_0, char **VAR_1, char **VAR_2, char **VAR_3)
{
 char *VAR_4 = ((void*)0), *VAR_5 = ((void*)0), *VAR_6 = ((void*)0);
 char *VAR_7, *VAR_8;
 int VAR_9 = -1;

 if (VAR_1 != ((void*)0))
  *VAR_1 = ((void*)0);
 if (VAR_2 != ((void*)0))
  *VAR_2 = ((void*)0);
 if (VAR_3 != ((void*)0))
  *VAR_3 = ((void*)0);

 VAR_7 = FUNC_4(VAR_0);


 if ((VAR_8 = FUNC_1(VAR_7)) == ((void*)0))
  goto out;


 *VAR_8++ = '\0';
 if (*VAR_8 == '\0')
  VAR_8 = ".";
 VAR_6 = FUNC_4(VAR_8);


 VAR_8 = FUNC_3(VAR_7, '@');
 if (VAR_8 != ((void*)0)) {
  *VAR_8++ = '\0';
  VAR_5 = FUNC_4(FUNC_0(VAR_8));
  if (*VAR_7 != '\0')
   VAR_4 = FUNC_4(VAR_7);
 } else {
  VAR_5 = FUNC_4(FUNC_0(VAR_7));
  VAR_4 = ((void*)0);
 }


 if (VAR_1 != ((void*)0)) {
  *VAR_1 = VAR_4;
  VAR_4 = ((void*)0);
 }
 if (VAR_2 != ((void*)0)) {
  *VAR_2 = VAR_5;
  VAR_5 = ((void*)0);
 }
 if (VAR_3 != ((void*)0)) {
  *VAR_3 = VAR_6;
  VAR_6 = ((void*)0);
 }
 VAR_9 = 0;
out:
 FUNC_2(VAR_7);
 FUNC_2(VAR_4);
 FUNC_2(VAR_5);
 FUNC_2(VAR_6);
 return VAR_9;
}
