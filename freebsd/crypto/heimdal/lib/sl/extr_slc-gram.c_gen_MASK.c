
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int assignment; } ;
struct assignment {TYPE_1__ u; struct assignment* next; } ;


 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_0 ;
 int FUNC_3 (int ,char*) ;

__attribute__((used)) static void
FUNC_4(struct assignment *VAR_1)
{
    struct assignment *VAR_2;
    FUNC_0(0, "#include <stdio.h>\n");
    FUNC_0(0, "#include <getarg.h>\n");
    FUNC_0(0, "#include <sl.h>\n");
    FUNC_0(0, "#include \"%s\"\n\n", VAR_0);

    FUNC_3(0, "#include <stdio.h>\n");
    FUNC_3(0, "#include <sl.h>\n");
    FUNC_3(0, "\n");


    for(VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 FUNC_2(VAR_2->u.assignment);

    FUNC_0(0, "SL_cmd commands[] = {\n");
    for(VAR_2 = VAR_1; VAR_2 != ((void*)0); VAR_2 = VAR_2->next)
 FUNC_1(VAR_2->u.assignment);
    FUNC_0(1, "{ NULL }\n");
    FUNC_0(0, "};\n");

    FUNC_3(0, "extern SL_cmd commands[];\n");
}
