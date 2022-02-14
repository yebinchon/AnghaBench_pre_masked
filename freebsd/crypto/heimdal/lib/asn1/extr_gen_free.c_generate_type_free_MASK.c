
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* gen_name; int type; int name; } ;
typedef TYPE_1__ Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int ,int) ;
 scalar_t__ FUNC_2 (int ) ;

void
FUNC_3 (const Symbol *VAR_3)
{
    int VAR_4 = FUNC_2(VAR_3->name) ? VAR_1 : VAR_0;

    FUNC_0 (VAR_2, "void ASN1CALL\n"
      "free_%s(%s *data)\n"
      "{\n",
      VAR_3->gen_name, VAR_3->gen_name);

    FUNC_1 ("data", VAR_3->type, VAR_4);
    FUNC_0 (VAR_2, "}\n\n");
}
