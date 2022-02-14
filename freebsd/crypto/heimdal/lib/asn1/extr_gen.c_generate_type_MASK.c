
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_1__ ;


struct TYPE_12__ {char* gen_name; int name; int type; } ;
typedef TYPE_1__ Symbol ;
typedef int FILE ;


 int FUNC_0 () ;
 int * VAR_0 ;
 int FUNC_1 (int *,char*,...) ;
 int FUNC_2 (int ,char*) ;
 int FUNC_3 (char*) ;
 int FUNC_4 (TYPE_1__ const*) ;
 int FUNC_5 (TYPE_1__ const*) ;
 int FUNC_6 (TYPE_1__ const*) ;
 int FUNC_7 (TYPE_1__ const*) ;
 int FUNC_8 (TYPE_1__ const*) ;
 int FUNC_9 (TYPE_1__ const*) ;
 int FUNC_10 (TYPE_1__ const*) ;
 int FUNC_11 (TYPE_1__ const*) ;
 int * VAR_1 ;
 scalar_t__ FUNC_12 (int ) ;
 scalar_t__ FUNC_13 (TYPE_1__ const*) ;
 int VAR_2 ;
 int * VAR_3 ;
 scalar_t__ VAR_4 ;

void
FUNC_14 (const Symbol *VAR_5)
{
    FILE *VAR_6;
    const char * VAR_7;

    if (!VAR_2)
 FUNC_3(VAR_5->gen_name);

    FUNC_9 (VAR_5);

    if (VAR_4)
 FUNC_4(VAR_5);

    if (VAR_4 == 0 || FUNC_13(VAR_5) == 0) {
 FUNC_7 (VAR_5);
 FUNC_6 (VAR_5);
 FUNC_8 (VAR_5);
 FUNC_10 (VAR_5);
 FUNC_5 (VAR_5);
    }
    FUNC_11 (VAR_5);
    FUNC_2 (VAR_5->type, VAR_5->gen_name);



    if (FUNC_12(VAR_5->name)) {
 VAR_6 = VAR_1;
 VAR_7 = "ASN1EXP ";
    } else {
 VAR_6 = VAR_3;
 VAR_7 = "";
    }

    FUNC_1 (VAR_6,
      "%sint    ASN1CALL "
      "decode_%s(const unsigned char *, size_t, %s *, size_t *);\n",
      VAR_7,
      VAR_5->gen_name, VAR_5->gen_name);
    FUNC_1 (VAR_6,
      "%sint    ASN1CALL "
      "encode_%s(unsigned char *, size_t, const %s *, size_t *);\n",
      VAR_7,
      VAR_5->gen_name, VAR_5->gen_name);
    FUNC_1 (VAR_6,
      "%ssize_t ASN1CALL length_%s(const %s *);\n",
      VAR_7,
      VAR_5->gen_name, VAR_5->gen_name);
    FUNC_1 (VAR_6,
      "%sint    ASN1CALL copy_%s  (const %s *, %s *);\n",
      VAR_7,
      VAR_5->gen_name, VAR_5->gen_name, VAR_5->gen_name);
    FUNC_1 (VAR_6,
      "%svoid   ASN1CALL free_%s  (%s *);\n",
      VAR_7,
      VAR_5->gen_name, VAR_5->gen_name);

    FUNC_1(VAR_6, "\n\n");

    if (!VAR_2) {
 FUNC_1(VAR_0, "\n\n");
 FUNC_0();
 }
}
