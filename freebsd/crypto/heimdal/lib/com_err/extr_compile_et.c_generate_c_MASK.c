
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_code {int number; char* string; struct error_code* next; } ;
typedef int FILE ;


 int VAR_0 ;
 struct error_code* VAR_1 ;
 int FUNC_0 (int *) ;
 char* VAR_2 ;
 int * FUNC_1 (int ,char*) ;
 int FUNC_2 (int *,char*,...) ;
 char* VAR_3 ;
 char* VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static int
FUNC_3(void)
{
    int VAR_7;
    struct error_code *VAR_8;

    FILE *VAR_9 = FUNC_1(VAR_0, "w");
    if(VAR_9 == ((void*)0))
 return 1;

    FUNC_2(VAR_9, "/* Generated from %s */\n", VAR_2);
    if(VAR_4)
 FUNC_2(VAR_9, "/* %s */\n", VAR_4);
    FUNC_2(VAR_9, "\n");
    FUNC_2(VAR_9, "#include <stddef.h>\n");
    FUNC_2(VAR_9, "#include <com_err.h>\n");
    FUNC_2(VAR_9, "#include \"%s\"\n", VAR_3);
    FUNC_2(VAR_9, "\n");
    FUNC_2(VAR_9, "#define N_(x) (x)\n");
    FUNC_2(VAR_9, "\n");

    FUNC_2(VAR_9, "static const char *%s_error_strings[] = {\n", VAR_5);

    for(VAR_8 = VAR_1, VAR_7 = 0; VAR_8; VAR_8 = VAR_8->next, VAR_7++) {
 while(VAR_7 < VAR_8->number) {
     FUNC_2(VAR_9, "\t/* %03d */ \"Reserved %s error (%d)\",\n",
      VAR_7, VAR_5, VAR_7);
     VAR_7++;

 }
 FUNC_2(VAR_9, "\t/* %03d */ N_(\"%s\"),\n",
  VAR_8->number, VAR_8->string);
    }

    FUNC_2(VAR_9, "\tNULL\n");
    FUNC_2(VAR_9, "};\n");
    FUNC_2(VAR_9, "\n");
    FUNC_2(VAR_9, "#define num_errors %d\n", VAR_6);
    FUNC_2(VAR_9, "\n");
    FUNC_2(VAR_9,
     "void initialize_%s_error_table_r(struct et_list **list)\n",
     VAR_5);
    FUNC_2(VAR_9, "{\n");
    FUNC_2(VAR_9,
     "    initialize_error_table_r(list, %s_error_strings, "
     "num_errors, ERROR_TABLE_BASE_%s);\n", VAR_5, VAR_5);
    FUNC_2(VAR_9, "}\n");
    FUNC_2(VAR_9, "\n");
    FUNC_2(VAR_9, "void initialize_%s_error_table(void)\n", VAR_5);
    FUNC_2(VAR_9, "{\n");
    FUNC_2(VAR_9,
     "    init_error_table(%s_error_strings, ERROR_TABLE_BASE_%s, "
     "num_errors);\n", VAR_5, VAR_5);
    FUNC_2(VAR_9, "}\n");

    FUNC_0(VAR_9);
    return 0;
}
