
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int buf ;
typedef int FILE ;


 int * FUNC_0 (char*,int,int *) ;
 int FUNC_1 (unsigned char) ;
 int FUNC_2 (char const*) ;
 scalar_t__ FUNC_3 (char*,char const*,int ) ;

__attribute__((used)) static const char *
FUNC_4(FILE *VAR_0, const char *VAR_1)
{
    static char VAR_2[1024];
    char *VAR_3;

    while (FUNC_0 (VAR_2, sizeof(VAR_2), VAR_0) != ((void*)0)) {
 if(VAR_2[0] == '>') {
     for(VAR_3 = VAR_2; *VAR_3 && !FUNC_1((unsigned char)*VAR_3) && *VAR_3 != '#'; VAR_3++)
  ;
     *VAR_3 = '\0';
     if(FUNC_3(VAR_2 + 1, VAR_1, FUNC_2(VAR_1)) == 0)
  return VAR_2 + 1;
 }
 VAR_2[0] = '\0';
    }
    return ((void*)0);
}
