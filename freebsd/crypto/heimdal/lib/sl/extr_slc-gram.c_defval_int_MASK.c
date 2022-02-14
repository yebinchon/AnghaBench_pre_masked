
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int value; } ;
struct assignment {TYPE_1__ u; } ;


 int FUNC_0 (int,char*,char const*,...) ;

__attribute__((used)) static void FUNC_1(const char *VAR_0, struct assignment *VAR_1)
{
    if(VAR_1 != ((void*)0))
 FUNC_0(1, "opt.%s = %s;\n", VAR_0, VAR_1->u.value);
    else
 FUNC_0(1, "opt.%s = 0;\n", VAR_0);
}
