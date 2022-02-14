
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct fileptr {char* s; int * f; } ;
typedef size_t ssize_t ;


 char* FUNC_0 (char*,size_t,int *) ;
 int FUNC_1 (char*,char const*,size_t) ;
 size_t FUNC_2 (size_t,size_t) ;
 int FUNC_3 (char*,char*) ;

__attribute__((used)) static char *
FUNC_4(char *VAR_0, size_t VAR_1, struct fileptr *VAR_2)
{


    if(VAR_2->f != ((void*)0))
 return FUNC_0(VAR_0, VAR_1, VAR_2->f);
    else {

 const char *VAR_3;
 ssize_t VAR_4;
 if(*VAR_2->s == '\0')
     return ((void*)0);
 VAR_3 = VAR_2->s + FUNC_3(VAR_2->s, "\n");
 if(*VAR_3 == '\n')
     VAR_3++;
 VAR_4 = FUNC_2(VAR_1, (size_t)(VAR_3 - VAR_2->s));
 if(VAR_1 > 0) {
     FUNC_1(VAR_0, VAR_2->s, VAR_4);
     VAR_0[VAR_4] = '\0';
 }
 VAR_2->s = VAR_3;
 return VAR_0;
    }
}
