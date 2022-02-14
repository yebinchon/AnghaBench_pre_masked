
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_3__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {int type; } ;
struct TYPE_4__ {char* gen_name; TYPE_3__* type; int name; } ;
typedef TYPE_1__ Symbol ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 () ;
 int VAR_2 ;
 int FUNC_1 (char*,TYPE_3__*,int ,char*,char*,int *,int) ;
 int FUNC_2 (int ,char*,...) ;
 scalar_t__ FUNC_3 (int ) ;

void
FUNC_4 (const Symbol *VAR_3)
{
    int VAR_4 = FUNC_3(VAR_3->name) ? VAR_1 : VAR_0;

    FUNC_2 (VAR_2, "int ASN1CALL\n"
      "decode_%s(const unsigned char *p HEIMDAL_UNUSED_ATTRIBUTE,"
      " size_t len HEIMDAL_UNUSED_ATTRIBUTE, %s *data, size_t *size)\n"
      "{\n",
      VAR_3->gen_name, VAR_3->gen_name);

    switch (VAR_3->type->type) {
    case 143:
    case 149:
    case 140:
    case 141:
    case 145:
    case 146:
    case 133:
    case 130:
    case 139:
    case 144:
    case 151:
    case 129:
    case 128:
    case 131:
    case 142:
    case 147:
    case 150:
    case 138:
    case 137:
    case 136:
    case 135:
    case 134:
    case 132:
    case 148:
 FUNC_2 (VAR_2,
   "size_t ret = 0;\n"
   "size_t l HEIMDAL_UNUSED_ATTRIBUTE;\n"
   "int e HEIMDAL_UNUSED_ATTRIBUTE;\n");
 if (VAR_4)
     FUNC_2 (VAR_2, "const unsigned char *begin = p;\n");

 FUNC_2 (VAR_2, "\n");
 FUNC_2 (VAR_2, "memset(data, 0, sizeof(*data));\n");

 FUNC_1 ("data", VAR_3->type, 0, "goto fail", "Top", ((void*)0), 1);
 if (VAR_4)
     FUNC_2 (VAR_2,
       "data->_save.data = calloc(1, ret);\n"
       "if (data->_save.data == NULL) { \n"
       "e = ENOMEM; goto fail; \n"
       "}\n"
       "data->_save.length = ret;\n"
       "memcpy(data->_save.data, begin, ret);\n");
 FUNC_2 (VAR_2,
   "if(size) *size = ret;\n"
   "return 0;\n");
 FUNC_2 (VAR_2,
   "fail:\n"
   "free_%s(data);\n"
   "return e;\n",
   VAR_3->gen_name);
 break;
    default:
 FUNC_0 ();
    }
    FUNC_2 (VAR_2, "}\n\n");
}
