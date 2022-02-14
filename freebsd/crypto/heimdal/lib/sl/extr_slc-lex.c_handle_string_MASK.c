
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 (char*) ;
 int FUNC_1 () ;
 int VAR_1 ;
 char* FUNC_2 (char*) ;

__attribute__((used)) static char *
FUNC_3(void)
{
    char VAR_2[1024];
    int VAR_3 = 0;
    int VAR_4;
    int VAR_5 = 0;
    while((VAR_4 = FUNC_1()) != VAR_0){
 if(VAR_5) {
     VAR_2[VAR_3++] = '\\';
     VAR_2[VAR_3++] = VAR_4;
     VAR_5 = 0;
     continue;
 }
 if(VAR_4 == '\n'){
     FUNC_0("unterminated string");
     VAR_1++;
     break;
 }
 if(VAR_4 == '\\'){
     VAR_5++;
     continue;
 }
 if(VAR_4 == '\"')
     break;
 VAR_2[VAR_3++] = VAR_4;
    }
    VAR_2[VAR_3] = '\0';
    return FUNC_2(VAR_2);
}
