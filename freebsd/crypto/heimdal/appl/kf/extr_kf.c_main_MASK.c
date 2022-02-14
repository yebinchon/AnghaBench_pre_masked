
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int message ;


 int FUNC_0 (int *,int*,char**) ;
 int VAR_0 ;
 int FUNC_1 (char*,int,int ,char*,int) ;
 int FUNC_2 (int,char*) ;
 int * FUNC_3 () ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_4 (char*,char*,...) ;

int
FUNC_5(int VAR_3, char **VAR_4)
{
    int VAR_5,VAR_6,VAR_7;
    int VAR_8=0;

    VAR_5 = VAR_3;
    VAR_6 = FUNC_0(&VAR_0, &VAR_5, VAR_4);

    if (VAR_1 == ((void*)0)) {
 VAR_1 = FUNC_3 ();
 if (VAR_1 == ((void*)0))
     FUNC_2 (1, "who are you?");
    }

    for (VAR_7 = VAR_5;VAR_7 < VAR_3; VAR_7++) {
 char VAR_9[128];
 VAR_8 = FUNC_1 (VAR_4[VAR_7], VAR_6, VAR_2, VAR_9, sizeof(VAR_9));
 if(VAR_8 == 0)
     FUNC_4 ("%s: ok", VAR_4[VAR_7]);
 else
     FUNC_4 ("%s: failed: %s", VAR_4[VAR_7], VAR_9);
    }
    return(VAR_8);
}
