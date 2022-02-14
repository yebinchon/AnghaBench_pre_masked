
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {char* gen_name; int type; int name; } ;
typedef TYPE_1__ Symbol ;
typedef int FILE ;


 int FUNC_0 (int *,char*,char*,char*,char const*,...) ;
 int FUNC_1 (int *,char*) ;
 int FUNC_2 (char*,char const**,int ,char*,int *,int ,int ,int ,int) ;
 int * FUNC_3 () ;
 scalar_t__ VAR_0 ;
 scalar_t__ FUNC_4 (TYPE_1__ const*) ;

void
FUNC_5(const Symbol *VAR_1)
{
    FILE *VAR_2 = FUNC_3();
    const char *VAR_3;

    if (FUNC_4(VAR_1)) {
 FUNC_1(VAR_2, VAR_1->gen_name);
 return;
    }

    FUNC_2(VAR_1->gen_name, &VAR_3, VAR_1->name, VAR_1->gen_name, ((void*)0), VAR_1->type, 0, 0, 1);

    FUNC_0(VAR_2,
     "\n"
     "int\n"
     "decode_%s(const unsigned char *p, size_t len, %s *data, size_t *size)\n"
     "{\n"
     "    return _asn1_decode_top(asn1_%s, 0|%s, p, len, data, size);\n"
     "}\n"
     "\n",
     VAR_1->gen_name,
     VAR_1->gen_name,
     VAR_3,
     VAR_0 ? "A1_PF_ALLOW_BER" : "0");

    FUNC_0(VAR_2,
     "\n"
     "int\n"
     "encode_%s(unsigned char *p, size_t len, const %s *data, size_t *size)\n"
     "{\n"
     "    return _asn1_encode(asn1_%s, p, len, data, size);\n"
     "}\n"
     "\n",
     VAR_1->gen_name,
     VAR_1->gen_name,
     VAR_3);

    FUNC_0(VAR_2,
     "\n"
     "size_t\n"
     "length_%s(const %s *data)\n"
     "{\n"
     "    return _asn1_length(asn1_%s, data);\n"
     "}\n"
     "\n",
     VAR_1->gen_name,
     VAR_1->gen_name,
     VAR_3);


    FUNC_0(VAR_2,
     "\n"
     "void\n"
     "free_%s(%s *data)\n"
     "{\n"
     "    _asn1_free(asn1_%s, data);\n"
     "}\n"
     "\n",
     VAR_1->gen_name,
     VAR_1->gen_name,
     VAR_3);

    FUNC_0(VAR_2,
     "\n"
     "int\n"
     "copy_%s(const %s *from, %s *to)\n"
     "{\n"
     "    return _asn1_copy_top(asn1_%s, from, to);\n"
     "}\n"
     "\n",
     VAR_1->gen_name,
     VAR_1->gen_name,
     VAR_1->gen_name,
     VAR_3);
}
