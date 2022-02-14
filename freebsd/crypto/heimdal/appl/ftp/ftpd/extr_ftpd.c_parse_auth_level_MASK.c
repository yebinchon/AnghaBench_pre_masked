
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,char*) ;
 char* FUNC_1 (char*,char*,char**) ;
 int FUNC_2 (char*,char*) ;

__attribute__((used)) static int
FUNC_3(char *VAR_3)
{
    char *VAR_4;
    int VAR_5 = 0;
    char *VAR_6 = ((void*)0);

    for(VAR_4 = FUNC_1(VAR_3, ",", &VAR_6);
 VAR_4;
 VAR_4 = FUNC_1(((void*)0), ",", &VAR_6)) {
 if(FUNC_0(VAR_4, "user") == 0)
     ;




 else if(FUNC_0(VAR_4, "ftp") == 0 ||
  FUNC_0(VAR_4, "safe") == 0)
     VAR_5 |= VAR_0;
 else if(FUNC_0(VAR_4, "plain") == 0)
     VAR_5 |= VAR_2;
 else if(FUNC_0(VAR_4, "none") == 0)
     VAR_5 |= VAR_2|VAR_0;
 else
     FUNC_2("bad value for -a: `%s'", VAR_4);
    }
    return VAR_5;
}
