
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**) ;
 scalar_t__ FUNC_1 (unsigned char) ;
 char** FUNC_2 (int) ;
 int FUNC_3 (char*,char*,scalar_t__) ;
 char** FUNC_4 (char**,int) ;
 scalar_t__ FUNC_5 (char*) ;

int
FUNC_6(char *VAR_2, int *VAR_3, char ***VAR_4)
{
    char *VAR_5, *VAR_6;
    int VAR_7, VAR_8;
    char **VAR_9;
    int VAR_10 = 0;

    VAR_8 = 10;
    VAR_9 = FUNC_2(VAR_8 * sizeof(*VAR_9));
    if(VAR_9 == ((void*)0))
 return VAR_0;
    VAR_7 = 0;

    VAR_5 = VAR_2;

    while(FUNC_1((unsigned char)*VAR_5))
 VAR_5++;
    VAR_6 = VAR_5;

    while (1) {
 if (*VAR_5 == '\0') {
     ;
 } else if (*VAR_5 == '"') {
     VAR_10 = !VAR_10;
     FUNC_3(&VAR_5[0], &VAR_5[1], FUNC_5(&VAR_5[1]) + 1);
     continue;
 } else if (*VAR_5 == '\\') {
     if (VAR_5[1] == '\0')
  goto failed;
     FUNC_3(&VAR_5[0], &VAR_5[1], FUNC_5(&VAR_5[1]) + 1);
     VAR_5 += 2;
     continue;
 } else if (VAR_10 || !FUNC_1((unsigned char)*VAR_5)) {
     VAR_5++;
     continue;
 } else
     *VAR_5++ = '\0';
 if (VAR_10)
     goto failed;
 if(VAR_7 == VAR_8 - 1) {
     char **VAR_11;
     VAR_8 *= 2;
     VAR_11 = FUNC_4 (VAR_9, VAR_8 * sizeof(*VAR_9));
     if (VAR_11 == ((void*)0)) {
  FUNC_0(VAR_9);
  return VAR_0;
     }
     VAR_9 = VAR_11;
 }
 VAR_9[VAR_7++] = VAR_6;
 while(FUNC_1((unsigned char)*VAR_5))
     VAR_5++;
 if (*VAR_5 == '\0')
     break;
 VAR_6 = VAR_5;
    }
    VAR_9[VAR_7] = ((void*)0);
    *VAR_3 = VAR_7;
    *VAR_4 = VAR_9;
    return 0;
failed:
    FUNC_0(VAR_9);
    return VAR_1;
}
