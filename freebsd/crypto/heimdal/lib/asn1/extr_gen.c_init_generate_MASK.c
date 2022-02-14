
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 scalar_t__ FUNC_0 (char**,char*,char const*) ;
 int FUNC_1 (int,char*,char*) ;
 int FUNC_2 (int,char*) ;
 void* FUNC_3 (char*,char*) ;
 int FUNC_4 (int *,char*,...) ;
 int FUNC_5 (char*,int *) ;
 int FUNC_6 (char*) ;
 char* VAR_0 ;
 char* VAR_1 ;
 int * VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;
 char const* VAR_5 ;
 char* VAR_6 ;
 int * VAR_7 ;
 char* FUNC_7 (char const*) ;
 char* VAR_8 ;
 int * VAR_9 ;

void
FUNC_8 (const char *VAR_10, const char *VAR_11)
{
    char *VAR_12 = ((void*)0);

    VAR_5 = VAR_10;
    if (VAR_11 != ((void*)0)) {
 VAR_1 = FUNC_7(VAR_11);
 if (VAR_1 == ((void*)0))
     FUNC_2(1, "strdup");
    }


    if (FUNC_0(&VAR_0, "%s.h", VAR_1) < 0 || VAR_0 == ((void*)0))
 FUNC_2(1, "malloc");
    if (FUNC_0(&VAR_12, "%s.hx", VAR_1) < 0 || VAR_12 == ((void*)0))
 FUNC_2(1, "malloc");
    VAR_2 = FUNC_3 (VAR_12, "w");
    if (VAR_2 == ((void*)0))
 FUNC_1 (1, "open %s", VAR_12);
    FUNC_6(VAR_12);
    VAR_12 = ((void*)0);


    if (FUNC_0(&VAR_6, "%s-priv.h", VAR_1) < 0 || VAR_6 == ((void*)0))
 FUNC_2(1, "malloc");
    if (FUNC_0(&VAR_12, "%s-priv.hx", VAR_1) < 0 || VAR_12 == ((void*)0))
 FUNC_2(1, "malloc");
    VAR_7 = FUNC_3 (VAR_12, "w");
    if (VAR_7 == ((void*)0))
 FUNC_1 (1, "open %s", VAR_12);
    FUNC_6(VAR_12);
    VAR_12 = ((void*)0);


    if (FUNC_0(&VAR_8, "%s-template.c", VAR_1) < 0 || VAR_8 == ((void*)0))
 FUNC_2(1, "malloc");
    FUNC_4 (VAR_2,
      "/* Generated from %s */\n"
      "/* Do not edit */\n\n",
      VAR_10);
    FUNC_4 (VAR_2,
      "#ifndef __%s_h__\n"
      "#define __%s_h__\n\n", VAR_1, VAR_1);
    FUNC_4 (VAR_2,
      "#include <stddef.h>\n"
      "#include <time.h>\n\n");
    FUNC_4 (VAR_2,
      "#ifndef __asn1_common_definitions__\n"
      "#define __asn1_common_definitions__\n\n");
    FUNC_4 (VAR_2,
      "typedef struct heim_integer {\n"
      "  size_t length;\n"
      "  void *data;\n"
      "  int negative;\n"
      "} heim_integer;\n\n");
    FUNC_4 (VAR_2,
      "typedef struct heim_octet_string {\n"
      "  size_t length;\n"
      "  void *data;\n"
      "} heim_octet_string;\n\n");
    FUNC_4 (VAR_2,
      "typedef char *heim_general_string;\n\n"
      );
    FUNC_4 (VAR_2,
      "typedef char *heim_utf8_string;\n\n"
      );
    FUNC_4 (VAR_2,
      "typedef struct heim_octet_string heim_printable_string;\n\n"
      );
    FUNC_4 (VAR_2,
      "typedef struct heim_octet_string heim_ia5_string;\n\n"
      );
    FUNC_4 (VAR_2,
      "typedef struct heim_bmp_string {\n"
      "  size_t length;\n"
      "  uint16_t *data;\n"
      "} heim_bmp_string;\n\n");
    FUNC_4 (VAR_2,
      "typedef struct heim_universal_string {\n"
      "  size_t length;\n"
      "  uint32_t *data;\n"
      "} heim_universal_string;\n\n");
    FUNC_4 (VAR_2,
      "typedef char *heim_visible_string;\n\n"
      );
    FUNC_4 (VAR_2,
      "typedef struct heim_oid {\n"
      "  size_t length;\n"
      "  unsigned *components;\n"
      "} heim_oid;\n\n");
    FUNC_4 (VAR_2,
      "typedef struct heim_bit_string {\n"
      "  size_t length;\n"
      "  void *data;\n"
      "} heim_bit_string;\n\n");
    FUNC_4 (VAR_2,
      "typedef struct heim_octet_string heim_any;\n"
      "typedef struct heim_octet_string heim_any_set;\n\n");
    FUNC_5("#define ASN1_MALLOC_ENCODE(T, B, BL, S, L, R)                  \\\n"
   "  do {                                                         \\\n"
   "    (BL) = length_##T((S));                                    \\\n"
   "    (B) = malloc((BL));                                        \\\n"
   "    if((B) == NULL) {                                          \\\n"
   "      (R) = ENOMEM;                                            \\\n"
   "    } else {                                                   \\\n"
   "      (R) = encode_##T(((unsigned char*)(B)) + (BL) - 1, (BL), \\\n"
   "                       (S), (L));                              \\\n"
   "      if((R) != 0) {                                           \\\n"
   "        free((B));                                             \\\n"
   "        (B) = NULL;                                            \\\n"
   "      }                                                        \\\n"
   "    }                                                          \\\n"
   "  } while (0)\n\n",
   VAR_2);
    FUNC_5("#ifdef _WIN32\n"
   "#ifndef ASN1_LIB\n"
   "#define ASN1EXP  __declspec(dllimport)\n"
   "#else\n"
   "#define ASN1EXP\n"
   "#endif\n"
   "#define ASN1CALL __stdcall\n"
   "#else\n"
   "#define ASN1EXP\n"
   "#define ASN1CALL\n"
   "#endif\n",
   VAR_2);
    FUNC_4 (VAR_2, "struct units;\n\n");
    FUNC_4 (VAR_2, "#endif\n\n");
    if (FUNC_0(&VAR_12, "%s_files", VAR_11) < 0 || VAR_12 == ((void*)0))
 FUNC_2(1, "malloc");
    VAR_3 = FUNC_3(VAR_12, "w");
    if (VAR_3 == ((void*)0))
 FUNC_1 (1, "open %s", VAR_12);


    if (VAR_4)
 return;

    VAR_9 = FUNC_3 (VAR_8, "w");
    if (VAR_9 == ((void*)0))
 FUNC_1 (1, "open %s", VAR_8);

    FUNC_4 (VAR_9,
      "/* Generated from %s */\n"
      "/* Do not edit */\n\n"
      "#include <stdio.h>\n"
      "#include <stdlib.h>\n"
      "#include <time.h>\n"
      "#include <string.h>\n"
      "#include <errno.h>\n"
      "#include <limits.h>\n"
      "#include <krb5-types.h>\n",
      VAR_10);

    FUNC_4 (VAR_9,
      "#include <%s>\n"
      "#include <%s>\n"
      "#include <der.h>\n"
      "#include <der-private.h>\n"
      "#include <asn1-template.h>\n",
      VAR_0, VAR_6);


}
