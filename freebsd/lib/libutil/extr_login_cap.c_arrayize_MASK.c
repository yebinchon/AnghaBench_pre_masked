
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 char** FUNC_0 (int) ;
 char* FUNC_1 (char const*) ;
 int FUNC_2 (void*) ;
 int FUNC_3 (char const*,char const*) ;

__attribute__((used)) static const char **
FUNC_4(const char *VAR_0, const char *VAR_1, int *VAR_2)
{
    int VAR_3;
    char *VAR_4;
    const char *VAR_5;
    const char **VAR_6 = ((void*)0);


    for (VAR_3 = 0, VAR_5 = VAR_0; *VAR_5; VAR_3++) {
 int VAR_7 = FUNC_3(VAR_5, VAR_1);
 VAR_5 += VAR_7;
 if (*VAR_5)
     ++VAR_5;
    }


    if ((VAR_4 = FUNC_1(VAR_0)) != ((void*)0)) {
 if ((VAR_6 = FUNC_0(++VAR_3)) == ((void*)0))
     FUNC_2((void *)(uintptr_t)(const void *)VAR_0);
 else {

     VAR_3 = 0;
     while (*VAR_4) {
  int VAR_8 = FUNC_3(VAR_4, VAR_1);
  VAR_6[VAR_3++] = VAR_4;
  VAR_4 += VAR_8;
  if (*VAR_4)
      *VAR_4++ = '\0';
     }
     VAR_6[VAR_3] = ((void*)0);
 }
    }

    if (VAR_2)
 *VAR_2 = VAR_3;

    return VAR_6;
}
