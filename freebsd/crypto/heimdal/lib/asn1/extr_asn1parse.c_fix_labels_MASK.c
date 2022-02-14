
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int type; int gen_name; } ;
typedef TYPE_1__ Symbol ;


 scalar_t__ FUNC_0 (char**,char*,int ) ;
 int FUNC_1 (int,char*) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4(Symbol *VAR_0)
{
    char *VAR_1 = ((void*)0);
    if (FUNC_0(&VAR_1, "choice_%d", VAR_0->gen_name) < 0 || VAR_1 == ((void*)0))
 FUNC_1(1, "malloc");
    FUNC_2(VAR_0->type, VAR_1);
    FUNC_3(VAR_1);
}
