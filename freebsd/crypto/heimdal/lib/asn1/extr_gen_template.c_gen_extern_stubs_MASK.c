
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int FILE ;


 int FUNC_0 (int *,char*,char const*,char const*,char const*,char const*,char const*,char const*,char const*) ;

__attribute__((used)) static void
FUNC_1(FILE *VAR_0, const char *VAR_1)
{
    FUNC_0(VAR_0,
     "static const struct asn1_type_func asn1_extern_%s = {\n"
     "\t(asn1_type_encode)encode_%s,\n"
     "\t(asn1_type_decode)decode_%s,\n"
     "\t(asn1_type_length)length_%s,\n"
     "\t(asn1_type_copy)copy_%s,\n"
     "\t(asn1_type_release)free_%s,\n"
     "\tsizeof(%s)\n"
     "};\n",
     VAR_1, VAR_1, VAR_1, VAR_1,
     VAR_1, VAR_1, VAR_1);
}
