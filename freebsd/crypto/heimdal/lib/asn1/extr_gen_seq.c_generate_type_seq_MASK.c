
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {scalar_t__ type; TYPE_1__* symbol; struct TYPE_6__* subtype; } ;
typedef TYPE_2__ Type ;
struct TYPE_7__ {char* name; char* gen_name; TYPE_2__* type; } ;
struct TYPE_5__ {char* gen_name; } ;
typedef TYPE_3__ Symbol ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int) ;
 int FUNC_1 (int ,char*,...) ;
 int VAR_5 ;
 int FUNC_2 (char*) ;
 int VAR_6 ;

void
FUNC_3 (const Symbol *VAR_7)
{
    char *VAR_8;
    Type *VAR_9;

    if (!FUNC_2(VAR_7->name))
 return;
    VAR_9 = VAR_7->type;
    while(VAR_9->type == VAR_2)
 VAR_9 = VAR_9->subtype;

    if (VAR_9->type != VAR_0 && VAR_9->type != VAR_1) {
 FUNC_1(VAR_6, "%s not seq of %d\n", VAR_7->name, (int)VAR_9->type);
 return;
    }






    if (VAR_9->subtype->type != VAR_3) {
 FUNC_1(VAR_6, "%s subtype is not a type, can't generate "
        "sequence code for this case: %d\n",
  VAR_7->name, (int)VAR_9->subtype->type);
 FUNC_0(1);
    }

    VAR_8 = VAR_9->subtype->symbol->gen_name;

    FUNC_1 (VAR_5,
      "ASN1EXP int   ASN1CALL add_%s  (%s *, const %s *);\n"
      "ASN1EXP int   ASN1CALL remove_%s  (%s *, unsigned int);\n",
      VAR_7->gen_name, VAR_7->gen_name, VAR_8,
      VAR_7->gen_name, VAR_7->gen_name);

    FUNC_1 (VAR_4, "int ASN1CALL\n"
      "add_%s(%s *data, const %s *element)\n"
      "{\n",
      VAR_7->gen_name, VAR_7->gen_name, VAR_8);

    FUNC_1 (VAR_4,
      "int ret;\n"
      "void *ptr;\n"
      "\n"
      "ptr = realloc(data->val, \n"
      "\t(data->len + 1) * sizeof(data->val[0]));\n"
      "if (ptr == NULL) return ENOMEM;\n"
      "data->val = ptr;\n\n"
      "ret = copy_%s(element, &data->val[data->len]);\n"
      "if (ret) return ret;\n"
      "data->len++;\n"
      "return 0;\n",
      VAR_8);

    FUNC_1 (VAR_4, "}\n\n");

    FUNC_1 (VAR_4, "int ASN1CALL\n"
      "remove_%s(%s *data, unsigned int element)\n"
      "{\n",
      VAR_7->gen_name, VAR_7->gen_name);

    FUNC_1 (VAR_4,
      "void *ptr;\n"
      "\n"
      "if (data->len == 0 || element >= data->len)\n"
      "\treturn ASN1_OVERRUN;\n"
      "free_%s(&data->val[element]);\n"
      "data->len--;\n"

      "if (element < data->len)\n"
      "\tmemmove(&data->val[element], &data->val[element + 1], \n"
      "\t\tsizeof(data->val[0]) * (data->len - element));\n"

      "ptr = realloc(data->val, data->len * sizeof(data->val[0]));\n"
      "if (ptr != NULL || data->len == 0) data->val = ptr;\n"
      "return 0;\n",
      VAR_8);

    FUNC_1 (VAR_4, "}\n\n");
}
