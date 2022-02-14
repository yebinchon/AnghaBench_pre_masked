
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct stat {int st_mode; } ;
typedef scalar_t__ const Char ;


 scalar_t__ FUNC_0 (int) ;
 scalar_t__ FUNC_1 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ const* FUNC_2 (scalar_t__ const*,scalar_t__ const*) ;
 int VAR_3 ;
 scalar_t__ FUNC_3 (char*,int ) ;
 char* FUNC_4 (scalar_t__ const*) ;
 int FUNC_5 (char*,struct stat*) ;
 int FUNC_6 (scalar_t__ const*) ;

int
FUNC_7(const Char *VAR_4, const Char *VAR_5, int VAR_6)
{
    struct stat VAR_7;
    char *VAR_8;

    if (VAR_4 && *VAR_4) {
 Char *VAR_9;

 VAR_9 = FUNC_2(VAR_4, VAR_5);
 VAR_8 = FUNC_4(VAR_9);
 FUNC_6(VAR_9);
    }
    else
 VAR_8 = FUNC_4(VAR_5);

    return (FUNC_5(VAR_8, &VAR_7) != -1 &&
     ((VAR_6 && FUNC_0(VAR_7.st_mode)) ||
      (FUNC_1(VAR_7.st_mode) &&

       (VAR_7.st_mode & (VAR_1 | VAR_0 | VAR_2)) &&
       FUNC_3(VAR_8, VAR_3) == 0
 )));
}
