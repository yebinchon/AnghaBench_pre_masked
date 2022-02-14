
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct stat {int dummy; } ;
struct TYPE_4__ {int name; } ;
typedef TYPE_1__ Path ;


 scalar_t__ FUNC_0 (int ) ;
 int VAR_0 ;
 int VAR_1 ;
 char* FUNC_1 (char const*) ;
 scalar_t__ FUNC_2 (char*,struct stat*) ;
 int VAR_2 ;
 TYPE_1__* VAR_3 ;
 int FUNC_3 (int ,char*,char*) ;
 int FUNC_4 (char*) ;
 int VAR_4 ;
 char* FUNC_5 (int ,char const*,int ) ;

__attribute__((used)) static char *
FUNC_6(Path *VAR_5, const char *VAR_6)
{
    struct stat VAR_7;
    char *VAR_8;

    if (VAR_5 != VAR_3) {
 VAR_8 = FUNC_5(VAR_5->name, VAR_6, VAR_1);
    } else {



 VAR_8 = FUNC_1(VAR_6);
    }

    if (FUNC_0(VAR_0)) {
 FUNC_3(VAR_2, "checking %s ...\n", VAR_8);
    }

    if (FUNC_2(VAR_8, &VAR_7) == 0) {
 VAR_4 += 1;
 return (VAR_8);
    }
    FUNC_4(VAR_8);
    return ((void*)0);
}
