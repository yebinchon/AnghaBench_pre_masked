
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type_handler {int c_type; } ;
struct TYPE_2__ {int assignment; } ;
struct assignment {TYPE_1__ u; } ;


 struct assignment* FUNC_0 (int ,char*) ;
 struct type_handler* FUNC_1 (struct assignment*) ;
 struct assignment* FUNC_2 (struct assignment*,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (int,char*,...) ;
 char* FUNC_5 (int ) ;

__attribute__((used)) static void
FUNC_6(struct assignment *VAR_0, const char *VAR_1)
{
    struct assignment *VAR_2;

    FUNC_4(0, "struct %s_options {\n", VAR_1);

    for(VAR_2 = VAR_0;
 VAR_2 != ((void*)0);
 VAR_2 = FUNC_2(VAR_2, "option")) {
 struct assignment *VAR_3;
 struct type_handler *VAR_4;
 char *VAR_5;

 VAR_5 = FUNC_5(VAR_2->u.assignment);
 VAR_3 = FUNC_0(VAR_2->u.assignment, "type");
 VAR_4 = FUNC_1(VAR_3);
 FUNC_4(1, "%s %s;\n", VAR_4->c_type, VAR_5);
 FUNC_3(VAR_5);
    }
    FUNC_4(0, "};\n");
}
