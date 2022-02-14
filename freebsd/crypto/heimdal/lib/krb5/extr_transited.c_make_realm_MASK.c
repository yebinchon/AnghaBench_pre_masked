
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct tr_realm {char* realm; int leading_space; int leading_slash; int trailing_dot; } ;


 struct tr_realm* FUNC_0 (int,int) ;
 int FUNC_1 (char*) ;

__attribute__((used)) static struct tr_realm *
FUNC_2(char *VAR_0)
{
    struct tr_realm *VAR_1;
    char *VAR_2, *VAR_3;
    int VAR_4 = 0;
    VAR_1 = FUNC_0(1, sizeof(*VAR_1));
    if(VAR_1 == ((void*)0)){
 FUNC_1(VAR_0);
 return ((void*)0);
    }
    VAR_1->realm = VAR_0;
    for(VAR_2 = VAR_3 = VAR_1->realm; *VAR_2; VAR_2++){
 if(VAR_2 == VAR_1->realm && *VAR_2 == ' '){
     VAR_1->leading_space = 1;
     continue;
 }
 if(VAR_3 == VAR_1->realm && *VAR_2 == '/')
     VAR_1->leading_slash = 1;
 if(VAR_4){
     *VAR_3++ = *VAR_2;
     VAR_4 = 0;
     continue;
 }
 if(*VAR_2 == '\\'){
     VAR_4 = 1;
     continue;
 }
 if(VAR_2[0] == '.' && VAR_2[1] == '\0')
     VAR_1->trailing_dot = 1;
 *VAR_3++ = *VAR_2;
    }
    *VAR_3 = '\0';
    return VAR_1;
}
