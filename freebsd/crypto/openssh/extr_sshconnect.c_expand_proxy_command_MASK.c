
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int user; } ;


 int VAR_0 ;
 int FUNC_0 (char*) ;
 TYPE_1__ VAR_1 ;
 char* FUNC_1 (char*,char*,char const*,char*,char*,char*,int ,char*) ;
 int FUNC_2 (char*,int,char*,int) ;
 int FUNC_3 (char**,char*,char const*) ;

__attribute__((used)) static char *
FUNC_4(const char *VAR_2, const char *VAR_3,
    const char *VAR_4, int VAR_5)
{
 char *VAR_6, *VAR_7, VAR_8[VAR_0];

 FUNC_2(VAR_8, sizeof VAR_8, "%d", VAR_5);
 FUNC_3(&VAR_6, "exec %s", VAR_2);
 VAR_7 = FUNC_1(VAR_6, "h", VAR_4, "p", VAR_8,
     "r", VAR_1.user, (char *)((void*)0));
 FUNC_0(VAR_6);
 return VAR_7;
}
