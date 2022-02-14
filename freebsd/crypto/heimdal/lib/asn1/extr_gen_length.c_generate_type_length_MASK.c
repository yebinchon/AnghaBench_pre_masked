
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {char* gen_name; int type; } ;
typedef TYPE_1__ Symbol ;


 int VAR_0 ;
 int FUNC_0 (int ,char*,...) ;
 int FUNC_1 (char*,int ,char*,char*) ;

void
FUNC_2 (const Symbol *VAR_1)
{
    FUNC_0 (VAR_0,
      "size_t ASN1CALL\n"
      "length_%s(const %s *data)\n"
      "{\n"
      "size_t ret = 0;\n",
      VAR_1->gen_name, VAR_1->gen_name);

    FUNC_1 ("data", VAR_1->type, "ret", "Top");
    FUNC_0 (VAR_0, "return ret;\n}\n\n");
}
