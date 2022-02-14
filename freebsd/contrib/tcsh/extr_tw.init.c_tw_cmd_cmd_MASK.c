
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct varent {char** vec; } ;
struct dirent {char* d_name; scalar_t__ d_ino; } ;
typedef char DIR ;
typedef char Char ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 size_t FUNC_0 (char*) ;
 char* FUNC_1 (char*,int ) ;
 int VAR_3 ;
 struct varent* FUNC_2 (int ) ;
 int FUNC_3 (char*,int ) ;
 int FUNC_4 (char*) ;
 int FUNC_5 (char*,char*,int ) ;
 char* FUNC_6 (int ) ;
 int VAR_4 ;
 struct dirent* FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 char* FUNC_9 (char*) ;
 scalar_t__ FUNC_10 (char*,char*) ;
 size_t FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_13(void)
{
    DIR *VAR_7;
    struct dirent *VAR_8;
    Char *VAR_9 = ((void*)0), *VAR_10;
    Char **VAR_11;
    struct varent *VAR_12 = FUNC_2(VAR_0);
    struct varent *VAR_13 = FUNC_2(VAR_1);
    size_t VAR_14;


    if (VAR_12 == ((void*)0) || VAR_12->vec == ((void*)0))
 return;

    for (VAR_11 = VAR_12->vec; *VAR_11; VAR_11++) {
 if (VAR_11[0][0] != '/') {
     VAR_5 |= VAR_3;
     continue;
 }

 if ((VAR_7 = FUNC_6(FUNC_8(*VAR_11))) == ((void*)0))
     continue;

 FUNC_3(VAR_7, VAR_4);
 if (VAR_13) {
     VAR_9 = FUNC_1(*VAR_11, VAR_2);
     FUNC_3(VAR_9, VAR_6);
 }
 while ((VAR_8 = FUNC_7(VAR_7)) != ((void*)0)) {
     VAR_10 = FUNC_9(VAR_8->d_name);
     if (VAR_8->d_ino == 0 || (VAR_13 && !FUNC_5(VAR_9, VAR_10, 0)))
  continue;
            VAR_14 = FUNC_0(VAR_10);
            if (VAR_10[0] == '#' ||
  VAR_10[0] == '.' ||
  VAR_10[VAR_14 - 1] == '~' ||
  VAR_10[VAR_14 - 1] == '%')
                continue;
            FUNC_12(VAR_10);
 }
 FUNC_4(VAR_7);
    }
}
