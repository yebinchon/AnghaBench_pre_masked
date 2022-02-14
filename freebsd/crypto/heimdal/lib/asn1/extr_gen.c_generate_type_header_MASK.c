
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* name; int type; int gen_name; } ;
typedef TYPE_1__ Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ,int ,int,int) ;
 int FUNC_2 (int ,char*,...) ;
 int VAR_2 ;
 scalar_t__ FUNC_3 (char*) ;

__attribute__((used)) static void
FUNC_4 (const Symbol *VAR_3)
{
    int VAR_4 = FUNC_3(VAR_3->name) ? VAR_1 : VAR_0;

    FUNC_2 (VAR_2, "/*\n");
    FUNC_2 (VAR_2, "%s ::= ", VAR_3->name);
    FUNC_0 (0, VAR_3->type);
    FUNC_2 (VAR_2, "\n*/\n\n");

    FUNC_2 (VAR_2, "typedef ");
    FUNC_1 (0, VAR_3->gen_name, VAR_3->gen_name, VAR_3->type, VAR_1, VAR_4);

    FUNC_2 (VAR_2, "\n");
}
