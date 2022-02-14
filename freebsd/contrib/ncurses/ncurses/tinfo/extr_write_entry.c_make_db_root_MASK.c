
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef int fullpath ;
typedef int DB ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 scalar_t__ FUNC_1 (char const*,int) ;
 scalar_t__ FUNC_2 (int *) ;
 int * FUNC_3 (char*,int ) ;
 int FUNC_4 (char*,char const*,int) ;
 int FUNC_5 (char const*,int) ;
 int FUNC_6 (char const*,struct stat*) ;

__attribute__((used)) static int
FUNC_7(const char *VAR_5)
{
    int VAR_6;
    char VAR_7[VAR_0];

    if ((VAR_6 = FUNC_4(VAR_7, VAR_5, sizeof(VAR_7))) == 0) {
 struct stat VAR_8;

 if ((VAR_6 = FUNC_6(VAR_5, &VAR_8)) < 0) {
     VAR_6 = FUNC_5(VAR_5

         ,0777

  );
 } else if (FUNC_1(VAR_5, VAR_1 | VAR_3 | VAR_4) < 0) {
     VAR_6 = -1;
 } else if (!(FUNC_0(VAR_8.st_mode))) {
     VAR_6 = -1;
 }

    }
    return VAR_6;
}
