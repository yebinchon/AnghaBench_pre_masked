
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int time_t ;
struct stat {int st_mtime; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (int ,char*,char const*) ;
 int FUNC_1 (char const*,struct stat*) ;
 long long FUNC_2 (char const*,char**,int ) ;

__attribute__((used)) static time_t
FUNC_3(const char *VAR_2)
{
    struct stat VAR_3;
    char *VAR_4;
    long long VAR_5;

    if (FUNC_1(VAR_2, &VAR_3) != -1)
        return (time_t)VAR_3.st_mtime;

    VAR_1 = 0;
    VAR_5 = FUNC_2(VAR_2, &VAR_4, 0);
    if (VAR_2 == VAR_4 || *VAR_4 || VAR_1)
        FUNC_0(VAR_0, "Can't parse timestamp '%s'", VAR_2);
    return (time_t)VAR_5;
}
