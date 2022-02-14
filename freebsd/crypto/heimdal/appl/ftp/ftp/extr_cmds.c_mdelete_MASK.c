
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int sighand ;


 int VAR_0 ;
 int FUNC_0 (int*,char***,char*) ;
 int VAR_1 ;
 int FUNC_1 (char*,char*) ;
 scalar_t__ FUNC_2 (char*,char*) ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 char* VAR_7 ;
 int FUNC_3 (char*,char*) ;
 char* FUNC_4 (char**,int ) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (int ,int ) ;

void
FUNC_7(int VAR_8, char **VAR_9)
{
    sighand VAR_10;
    int VAR_11;
    char *VAR_12;

    if (VAR_8 < 2 && !FUNC_0(&VAR_8, &VAR_9, "remote-files")) {
 FUNC_3("usage: %s remote-files\n", VAR_9[0]);
 VAR_1 = -1;
 return;
    }
    VAR_7 = VAR_9[0];
    VAR_6 = 1;
    VAR_10 = FUNC_6(VAR_0, VAR_5);
    FUNC_5(VAR_4);
    while ((VAR_12 = FUNC_4(VAR_9,0)) != ((void*)0)) {
 if (*VAR_12 == '\0') {
     VAR_6 = 0;
     continue;
 }
 if (VAR_6 && FUNC_2(VAR_9[0], VAR_12)) {
     FUNC_1("DELE %s", VAR_12);
     if (!VAR_6 && VAR_2) {
  VAR_11 = VAR_3;
  VAR_3 = 1;
  if (FUNC_2("Continue with", "mdelete")) {
      VAR_6++;
  }
  VAR_3 = VAR_11;
     }
 }
    }
    FUNC_6(VAR_0, VAR_10);
    VAR_6 = 0;
}
