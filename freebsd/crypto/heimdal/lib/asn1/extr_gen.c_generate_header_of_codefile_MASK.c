
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;
 int VAR_0 ;
 int FUNC_0 () ;
 scalar_t__ FUNC_1 (char**,char*,int ,char const*) ;
 int * VAR_1 ;
 int FUNC_2 (int,char*,char*) ;
 int FUNC_3 (int,char*) ;
 int * FUNC_4 (char*,char*) ;
 int FUNC_5 (int *,char*,...) ;
 int FUNC_6 (char*) ;
 char* VAR_2 ;
 int VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;

void
FUNC_7(const char *VAR_6)
{
    char *VAR_7 = ((void*)0);

    if (VAR_1 != ((void*)0))
 FUNC_0();

    if (FUNC_1 (&VAR_7, "%d_%s.x", VAR_0, VAR_6) < 0 || VAR_7 == ((void*)0))
 FUNC_3(1, "malloc");
    VAR_1 = FUNC_4 (VAR_7, "w");
    if (VAR_1 == ((void*)0))
 FUNC_2 (1, "fopen %s", VAR_7);
    FUNC_5(&VAR_3, "%s ", VAR_7);
    FUNC_6(VAR_7);
    VAR_7 = ((void*)0);
    FUNC_5 (VAR_1,
      "/* Generated from %s */\n"
      "/* Do not edit */\n\n"
      "#define  ASN1_LIB\n\n"
      "#include <stdio.h>\n"
      "#include <stdlib.h>\n"
      "#include <time.h>\n"
      "#include <string.h>\n"
      "#include <errno.h>\n"
      "#include <limits.h>\n"
      "#include <krb5-types.h>\n",
      VAR_4);

    FUNC_5 (VAR_1,
      "#include <%s>\n"
      "#include <%s>\n",
      VAR_2, VAR_5);
    FUNC_5 (VAR_1,
      "#include <asn1_err.h>\n"
      "#include <der.h>\n"
      "#include <der-private.h>\n"
      "#include <asn1-template.h>\n"
      "#include <parse_units.h>\n\n");

}
