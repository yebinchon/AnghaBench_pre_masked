
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 scalar_t__ FUNC_0 (unsigned char) ;
 int FUNC_1 (int,char*,...) ;
 int FUNC_2 (int,char*,int ) ;
 scalar_t__ FUNC_3 (int ,unsigned char) ;
 char* FUNC_4 (char*,char) ;

int
FUNC_5(char *VAR_1)
{
    char *VAR_2;

    VAR_2 = FUNC_4(VAR_1, '/');
    if(VAR_2)
 VAR_1 = VAR_2 + 1;

    VAR_2 = VAR_1;

    if(FUNC_0((unsigned char)*VAR_2)){
 VAR_2++;
 while(*VAR_2 && (FUNC_0((unsigned char)*VAR_2) || FUNC_3(VAR_0, (unsigned char)*VAR_2)))
     VAR_2++;
 if(*VAR_2 == '\0')
     return 0;
    }
    FUNC_1(553, "\"%s\" is not an acceptable filename.", VAR_1);
    FUNC_1(553, "The filename must start with an alphanumeric "
    "character and must only");
    FUNC_2(553, "consist of alphanumeric characters or any of the following: %s",
   VAR_0);
    return 1;
}
