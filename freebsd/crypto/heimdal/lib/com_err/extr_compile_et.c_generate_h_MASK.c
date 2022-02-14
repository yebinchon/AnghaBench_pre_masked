
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct error_code {char* name; int number; struct error_code* next; } ;
typedef int fn ;
typedef int FILE ;


 int VAR_0 ;
 struct error_code* VAR_1 ;
 int FUNC_0 (int *) ;
 char* VAR_2 ;
 int * FUNC_1 (char*,char*) ;
 int FUNC_2 (int *,char*,...) ;
 char* VAR_3 ;
 char* VAR_4 ;
 int FUNC_3 (unsigned char) ;
 char* VAR_5 ;
 int FUNC_4 (char*,int,char*,char*) ;

__attribute__((used)) static int
FUNC_5(void)
{
    struct error_code *VAR_6;
    char VAR_7[128];
    FILE *VAR_8 = FUNC_1(VAR_3, "w");
    char *VAR_9;

    if(VAR_8 == ((void*)0))
 return 1;

    FUNC_4(VAR_7, sizeof(VAR_7), "__%s__", VAR_3);
    for(VAR_9 = VAR_7; *VAR_9; VAR_9++)
 if(!FUNC_3((unsigned char)*VAR_9))
     *VAR_9 = '_';

    FUNC_2(VAR_8, "/* Generated from %s */\n", VAR_2);
    if(VAR_4)
 FUNC_2(VAR_8, "/* %s */\n", VAR_4);
    FUNC_2(VAR_8, "\n");
    FUNC_2(VAR_8, "#ifndef %s\n", VAR_7);
    FUNC_2(VAR_8, "#define %s\n", VAR_7);
    FUNC_2(VAR_8, "\n");
    FUNC_2(VAR_8, "struct et_list;\n");
    FUNC_2(VAR_8, "\n");
    FUNC_2(VAR_8,
     "void initialize_%s_error_table_r(struct et_list **);\n",
     VAR_5);
    FUNC_2(VAR_8, "\n");
    FUNC_2(VAR_8, "void initialize_%s_error_table(void);\n", VAR_5);
    FUNC_2(VAR_8, "#define init_%s_err_tbl initialize_%s_error_table\n",
     VAR_5, VAR_5);
    FUNC_2(VAR_8, "\n");
    FUNC_2(VAR_8, "typedef enum %s_error_number{\n", VAR_5);

    for(VAR_6 = VAR_1; VAR_6; VAR_6 = VAR_6->next) {
 FUNC_2(VAR_8, "\t%s = %ld%s\n", VAR_6->name, VAR_0 + VAR_6->number,
  (VAR_6->next != ((void*)0)) ? "," : "");
    }

    FUNC_2(VAR_8, "} %s_error_number;\n", VAR_5);
    FUNC_2(VAR_8, "\n");
    FUNC_2(VAR_8, "#define ERROR_TABLE_BASE_%s %ld\n", VAR_5, VAR_0);
    FUNC_2(VAR_8, "\n");
    FUNC_2(VAR_8, "#define COM_ERR_BINDDOMAIN_%s \"heim_com_err%ld\"\n", VAR_5, VAR_0);
    FUNC_2(VAR_8, "\n");
    FUNC_2(VAR_8, "#endif /* %s */\n", VAR_7);


    FUNC_0(VAR_8);
    return 0;
}
