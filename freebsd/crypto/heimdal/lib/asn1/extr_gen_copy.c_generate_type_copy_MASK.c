
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
 int FUNC_0 (char*,char*,int ,int) ;
 int FUNC_1 (int ,char*,...) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ VAR_3 ;

void
FUNC_3 (const Symbol *VAR_4)
{
  int VAR_5 = FUNC_2(VAR_4->name) ? VAR_1 : VAR_0;

  VAR_3 = 0;

  FUNC_1 (VAR_2, "int ASN1CALL\n"
    "copy_%s(const %s *from, %s *to)\n"
    "{\n"
    "memset(to, 0, sizeof(*to));\n",
    VAR_4->gen_name, VAR_4->gen_name, VAR_4->gen_name);
  FUNC_0 ("from", "to", VAR_4->type, VAR_5);
  FUNC_1 (VAR_2, "return 0;\n");

  if (VAR_3)
      FUNC_1 (VAR_2, "fail:\n"
        "free_%s(to);\n"
        "return ENOMEM;\n",
        VAR_4->gen_name);

  FUNC_1(VAR_2,
   "}\n\n");
}
