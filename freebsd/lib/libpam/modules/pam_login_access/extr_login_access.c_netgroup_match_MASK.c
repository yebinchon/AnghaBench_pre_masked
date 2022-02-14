
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int domain ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (char*,int) ;
 int FUNC_1 (char const*,char const*,char const*,char*) ;
 int FUNC_2 (int ,char*) ;

__attribute__((used)) static int
FUNC_3(const char *VAR_3, const char *VAR_4, const char *VAR_5)
{
    char VAR_6[1024];
    unsigned int VAR_7;

    if (FUNC_0(VAR_6, sizeof(VAR_6)) != 0 || *VAR_6 == '\0') {
 FUNC_2(VAR_0, "NIS netgroup support disabled: no NIS domain");
 return (VAR_1);
    }


    for (VAR_7 = 0; VAR_7 < sizeof(VAR_6); ++VAR_7)
 if (VAR_6[VAR_7] == '\0')
     break;
    if (VAR_7 == sizeof(VAR_6)) {
 FUNC_2(VAR_0, "NIS netgroup support disabled: invalid NIS domain");
 return (VAR_1);
    }

    if (FUNC_1(VAR_3, VAR_4, VAR_5, VAR_6) == 1)
 return (VAR_2);
    return (VAR_1);
}
