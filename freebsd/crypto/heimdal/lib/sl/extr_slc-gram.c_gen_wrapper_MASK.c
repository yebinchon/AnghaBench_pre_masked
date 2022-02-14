
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct type_handler {char* getarg_type; int (* free ) (char*) ;int (* defval ) (char*,struct assignment*) ;} ;
struct TYPE_2__ {char* value; struct assignment* assignment; } ;
struct assignment {TYPE_1__ u; } ;


 int VAR_0 ;
 int FUNC_0 (int,char*,...) ;
 int FUNC_1 (struct assignment*,char*) ;
 int FUNC_2 (int) ;
 struct assignment* FUNC_3 (struct assignment*,char*) ;
 struct type_handler* FUNC_4 (struct assignment*) ;
 struct assignment* FUNC_5 (struct assignment*,char*) ;
 int FUNC_6 (int ,char*,...) ;
 int FUNC_7 (char*) ;
 int FUNC_8 (char*) ;
 int FUNC_9 (struct assignment*,char*) ;
 int FUNC_10 (int ,char*,char*,...) ;
 char* FUNC_11 (struct assignment*) ;
 char* FUNC_12 (char*) ;
 int FUNC_13 (char*,char**,int ) ;
 int FUNC_14 (char*,struct assignment*) ;
 int FUNC_15 (char*) ;
 int FUNC_16 (char*) ;

__attribute__((used)) static void
FUNC_17(struct assignment *VAR_1)
{
    struct assignment *VAR_2;
    struct assignment *VAR_3;
    struct assignment *VAR_4;
    struct assignment *VAR_5;
    struct assignment *VAR_6;
    char *VAR_7, *VAR_8;
    int VAR_9 = 0;
    int VAR_10 = 0;

    VAR_2 = FUNC_3(VAR_1, "name");
    VAR_7 = FUNC_12(VAR_2->u.value);
    FUNC_8(VAR_7);
    VAR_3 = FUNC_3(VAR_1, "argument");
    if (VAR_3)
        VAR_10++;
    VAR_4 = FUNC_3(VAR_1, "option");
    VAR_5 = FUNC_3(VAR_1, "function");
    if(VAR_5)
 VAR_8 = VAR_5->u.value;
    else
 VAR_8 = VAR_7;


    if(VAR_4 != ((void*)0)) {
 FUNC_9(VAR_4, VAR_7);
 FUNC_10(0, "int %s(struct %s_options*, int, char **);\n", VAR_8, VAR_7);
    } else {
 FUNC_10(0, "int %s(void*, int, char **);\n", VAR_8);
    }

    FUNC_6(VAR_0, "static int\n");
    FUNC_6(VAR_0, "%s_wrap(int argc, char **argv)\n", VAR_7);
    FUNC_6(VAR_0, "{\n");
    if(VAR_4 != ((void*)0))
 FUNC_0(1, "struct %s_options opt;\n", VAR_7);
    FUNC_0(1, "int ret;\n");
    FUNC_0(1, "int optidx = 0;\n");
    FUNC_0(1, "struct getargs args[] = {\n");
    for(VAR_6 = FUNC_3(VAR_1, "option");
 VAR_6 != ((void*)0);
 VAR_6 = FUNC_5(VAR_6, "option")) {
 struct assignment *VAR_11 = FUNC_3(VAR_6->u.assignment, "type");
 struct assignment *VAR_12 = FUNC_3(VAR_6->u.assignment, "long");
 struct assignment *VAR_13 = FUNC_3(VAR_6->u.assignment, "short");
 struct assignment *VAR_14 = FUNC_3(VAR_6->u.assignment, "argument");
 struct assignment *VAR_15 = FUNC_3(VAR_6->u.assignment, "help");

 struct type_handler *VAR_16;

 FUNC_0(2, "{ ");
 if(VAR_12)
     FUNC_6(VAR_0, "\"%s\", ", VAR_12->u.value);
 else
     FUNC_6(VAR_0, "NULL, ");
 if(VAR_13)
     FUNC_6(VAR_0, "'%c', ", *VAR_13->u.value);
 else
     FUNC_6(VAR_0, "0, ");
 VAR_16 = FUNC_4(VAR_11);
 FUNC_6(VAR_0, "%s, ", VAR_16->getarg_type);
 FUNC_6(VAR_0, "NULL, ");
 if(VAR_15)
     FUNC_6(VAR_0, "\"%s\", ", VAR_15->u.value);
 else
     FUNC_6(VAR_0, "NULL, ");
 if(VAR_14) {
     FUNC_6(VAR_0, "\"%s\"", VAR_14->u.value);
            VAR_10++;
 } else
     FUNC_6(VAR_0, "NULL");
 FUNC_6(VAR_0, " },\n");
    }
    FUNC_0(2, "{ \"help\", 'h', arg_flag, NULL, NULL, NULL }\n");
    FUNC_0(1, "};\n");
    FUNC_0(1, "int help_flag = 0;\n");

    for(VAR_6 = FUNC_3(VAR_1, "option");
 VAR_6 != ((void*)0);
 VAR_6 = FUNC_5(VAR_6, "option")) {
 char *VAR_17;
 struct assignment *VAR_18 = FUNC_3(VAR_6->u.assignment, "type");

 struct assignment *VAR_19 = FUNC_3(VAR_6->u.assignment, "default");

 struct type_handler *VAR_20;

 VAR_17 = FUNC_11(VAR_6->u.assignment);
 VAR_20 = FUNC_4(VAR_18);
 (*VAR_20->defval)(VAR_17, VAR_19);
 FUNC_7(VAR_17);
    }

    for(VAR_6 = FUNC_3(VAR_1, "option");
 VAR_6 != ((void*)0);
 VAR_6 = FUNC_5(VAR_6, "option")) {
 char *VAR_21;
 VAR_21 = FUNC_11(VAR_6->u.assignment);
 FUNC_0(1, "args[%d].value = &opt.%s;\n", VAR_9++, VAR_21);
 FUNC_7(VAR_21);
    }
    FUNC_0(1, "args[%d].value = &help_flag;\n", VAR_9++);
    FUNC_0(1, "if(getarg(args, %d, argc, argv, &optidx))\n", VAR_9);
    FUNC_0(2, "goto usage;\n");

    {
 int VAR_22 = -1;
 int VAR_23 = -1;
 char *VAR_24;
 if(VAR_10 == 0) {
     VAR_23 = 0;
 } else {
     if((VAR_6 = FUNC_3(VAR_1, "min_args")) != ((void*)0)) {
  VAR_22 = FUNC_13(VAR_6->u.value, &VAR_24, 0);
  if(*VAR_24 != '\0') {
      FUNC_1(VAR_6, "min_args is not numeric");
      FUNC_2(1);
  }
  if(VAR_22 < 0) {
      FUNC_1(VAR_6, "min_args must be non-negative");
      FUNC_2(1);
  }
     }
     if((VAR_6 = FUNC_3(VAR_1, "max_args")) != ((void*)0)) {
  VAR_23 = FUNC_13(VAR_6->u.value, &VAR_24, 0);
  if(*VAR_24 != '\0') {
      FUNC_1(VAR_6, "max_args is not numeric");
      FUNC_2(1);
  }
  if(VAR_23 < 0) {
      FUNC_1(VAR_6, "max_args must be non-negative");
      FUNC_2(1);
  }
     }
 }
 if(VAR_22 != -1 || VAR_23 != -1) {
     if(VAR_22 == VAR_23) {
  FUNC_0(1, "if(argc - optidx != %d) {\n",
         VAR_22);
  FUNC_0(2, "fprintf(stderr, \"Need exactly %u parameters (%%u given).\\n\\n\", argc - optidx);\n", VAR_22);
  FUNC_0(2, "goto usage;\n");
  FUNC_0(1, "}\n");
     } else {
  if(VAR_23 != -1) {
      FUNC_0(1, "if(argc - optidx > %d) {\n", VAR_23);
      FUNC_0(2, "fprintf(stderr, \"Arguments given (%%u) are more than expected (%u).\\n\\n\", argc - optidx);\n", VAR_23);
      FUNC_0(2, "goto usage;\n");
      FUNC_0(1, "}\n");
  }
  if(VAR_22 != -1) {
      FUNC_0(1, "if(argc - optidx < %d) {\n", VAR_22);
      FUNC_0(2, "fprintf(stderr, \"Arguments given (%%u) are less than expected (%u).\\n\\n\", argc - optidx);\n", VAR_22);
      FUNC_0(2, "goto usage;\n");
      FUNC_0(1, "}\n");
  }
     }
 }
    }

    FUNC_0(1, "if(help_flag)\n");
    FUNC_0(2, "goto usage;\n");

    FUNC_0(1, "ret = %s(%s, argc - optidx, argv + optidx);\n",
    VAR_8, VAR_4 ? "&opt": "NULL");


    for(VAR_6 = FUNC_3(VAR_1, "option");
 VAR_6 != ((void*)0);
 VAR_6 = FUNC_5(VAR_6, "option")) {
 char *VAR_25;
 struct assignment *VAR_26 = FUNC_3(VAR_6->u.assignment, "type");
 struct type_handler *VAR_27;
 VAR_27 = FUNC_4(VAR_26);
 if(VAR_27->free == ((void*)0))
     continue;
 VAR_25 = FUNC_11(VAR_6->u.assignment);
 (*VAR_27->free)(VAR_25);
 FUNC_7(VAR_25);
    }
    FUNC_0(1, "return ret;\n");

    FUNC_0(0, "usage:\n");
    FUNC_0(1, "arg_printusage (args, %d, \"%s\", \"%s\");\n", VAR_9,
    VAR_2->u.value, VAR_3 ? VAR_3->u.value : "");

    for(VAR_6 = FUNC_3(VAR_1, "option");
 VAR_6 != ((void*)0);
 VAR_6 = FUNC_5(VAR_6, "option")) {
 char *VAR_28;
 struct assignment *VAR_29 = FUNC_3(VAR_6->u.assignment, "type");
 struct type_handler *VAR_30;
 VAR_30 = FUNC_4(VAR_29);
 if(VAR_30->free == ((void*)0))
     continue;
 VAR_28 = FUNC_11(VAR_6->u.assignment);
 (*VAR_30->free)(VAR_28);
 FUNC_7(VAR_28);
    }
    FUNC_0(1, "return 0;\n");
    FUNC_0(0, "}\n");
    FUNC_0(0, "\n");
}
