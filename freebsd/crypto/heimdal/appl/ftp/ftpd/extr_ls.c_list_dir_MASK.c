
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct dirent {int d_name; } ;
typedef int FILE ;
typedef int DIR ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (char**,char*,char const*,int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (char**,int) ;
 scalar_t__ FUNC_3 (int ,int) ;
 int FUNC_4 (int *,char const**,int,int) ;
 int * FUNC_5 (char const*) ;
 struct dirent* FUNC_6 (int *) ;
 void* FUNC_7 (char**,int) ;
 int FUNC_8 (int ,char*,char const*) ;

__attribute__((used)) static int
FUNC_9(FILE *VAR_2, const char *VAR_3, int VAR_4)
{
    DIR *VAR_5 = FUNC_5(VAR_3);
    struct dirent *VAR_6;
    char **VAR_7 = ((void*)0);
    int VAR_8 = 0;
    int VAR_9;

    if(VAR_5 == ((void*)0)) {
 FUNC_8(VAR_0, "%s: %m", VAR_3);
 return -1;
    }
    while((VAR_6 = FUNC_6(VAR_5)) != ((void*)0)) {
 void *VAR_10;

 if(FUNC_3(VAR_6->d_name, VAR_4))
     continue;
 VAR_10 = FUNC_7(VAR_7, (VAR_8 + 1) * sizeof(*VAR_7));
 if (VAR_10 == ((void*)0)) {
     FUNC_8(VAR_0, "%s: out of memory", VAR_3);
     FUNC_2 (VAR_7, VAR_8);
     FUNC_1 (VAR_5);
     return -1;
 }
 VAR_7 = VAR_10;
 VAR_9 = FUNC_0(&VAR_7[VAR_8], "%s/%d", VAR_3, VAR_6->d_name);
 if (VAR_9 == -1) {
     FUNC_8(VAR_0, "%s: out of memory", VAR_3);
     FUNC_2 (VAR_7, VAR_8);
     FUNC_1 (VAR_5);
     return -1;
 }
 ++VAR_8;
    }
    FUNC_1(VAR_5);
    return FUNC_4(VAR_2, (const char**)VAR_7, VAR_8, VAR_4 | VAR_1);
}
