
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct print_symbol_args {int depth; struct ui_file* outfile; struct symbol* symbol; } ;
struct TYPE_3__ {int owner; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (struct symbol*) ;
 scalar_t__ VAR_0 ;
 int FUNC_3 (scalar_t__,char*,struct ui_file*,int,int) ;
 scalar_t__ VAR_1 ;
 int FUNC_4 (struct symbol*) ;
 TYPE_1__* FUNC_5 (struct symbol*) ;
 int FUNC_6 (struct symbol*) ;
 int FUNC_7 (struct symbol*) ;
 scalar_t__ FUNC_8 (struct symbol*) ;
 char* FUNC_9 (struct symbol*) ;
 scalar_t__ FUNC_10 (struct symbol*) ;
 int FUNC_11 (struct symbol*) ;
 int FUNC_12 (struct symbol*) ;
 int * FUNC_13 (struct symbol*) ;
 scalar_t__ FUNC_14 (scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 unsigned int FUNC_15 (struct type*) ;
 scalar_t__ FUNC_16 (scalar_t__) ;
 int FUNC_17 (int ,TYPE_1__*) ;
 struct type* FUNC_18 (scalar_t__) ;
 int FUNC_19 (struct ui_file*,char*,...) ;
 int FUNC_20 (int ,struct ui_file*) ;
 int FUNC_21 (int ,int,struct ui_file*) ;
 int FUNC_22 (int,struct ui_file*) ;

__attribute__((used)) static int
FUNC_23 (void *VAR_4)
{
  struct symbol *VAR_5 = ((struct print_symbol_args *) VAR_4)->symbol;
  int VAR_6 = ((struct print_symbol_args *) VAR_4)->depth;
  struct ui_file *VAR_7 = ((struct print_symbol_args *) VAR_4)->outfile;

  FUNC_22 (VAR_6, VAR_7);
  if (FUNC_8 (VAR_5) == VAR_0)
    {
      FUNC_19 (VAR_7, "label %s at ", FUNC_9 (VAR_5));
      FUNC_21 (FUNC_12 (VAR_5), 1, VAR_7);
      if (FUNC_5 (VAR_5))
 FUNC_19 (VAR_7, " section %s\n",
         FUNC_17 (FUNC_5 (VAR_5)->owner,
      FUNC_5 (VAR_5)));
      else
 FUNC_19 (VAR_7, "\n");
      return 1;
    }
  if (FUNC_8 (VAR_5) == VAR_1)
    {
      if (FUNC_16 (FUNC_10 (VAR_5)))
 {
   FUNC_3 (FUNC_10 (VAR_5), "", VAR_7, 1, VAR_6);
 }
      else
 {
   FUNC_19 (VAR_7, "%s %s = ",
    (FUNC_14 (FUNC_10 (VAR_5)) == VAR_2
     ? "enum"
       : (FUNC_14 (FUNC_10 (VAR_5)) == VAR_3
   ? "struct" : "union")),
       FUNC_2 (VAR_5));
   FUNC_3 (FUNC_10 (VAR_5), "", VAR_7, 1, VAR_6);
 }
      FUNC_19 (VAR_7, ";\n");
    }
  else
    {
      if (FUNC_7 (VAR_5) == 129)
 FUNC_19 (VAR_7, "typedef ");
      if (FUNC_10 (VAR_5))
 {

   FUNC_3 (FUNC_10 (VAR_5), FUNC_9 (VAR_5),
    VAR_7,
    FUNC_14 (FUNC_10 (VAR_5)) != VAR_2,
    VAR_6);
   FUNC_19 (VAR_7, "; ");
 }
      else
 FUNC_19 (VAR_7, "%s ", FUNC_9 (VAR_5));

      switch (FUNC_7 (VAR_5))
 {
 case 141:
   FUNC_19 (VAR_7, "const %ld (0x%lx)",
       FUNC_11 (VAR_5),
       FUNC_11 (VAR_5));
   break;

 case 140:
   {
     unsigned VAR_8;
     struct type *VAR_9 = FUNC_18 (FUNC_10 (VAR_5));
     FUNC_19 (VAR_7, "const %u hex bytes:",
         FUNC_15 (VAR_9));
     for (VAR_8 = 0; VAR_8 < FUNC_15 (VAR_9); VAR_8++)
       FUNC_19 (VAR_7, " %02x",
    (unsigned) FUNC_13 (VAR_5)[VAR_8]);
   }
   break;

 case 130:
   FUNC_19 (VAR_7, "static at ");
   FUNC_21 (FUNC_12 (VAR_5), 1, VAR_7);
   if (FUNC_5 (VAR_5))
     FUNC_19 (VAR_7, " section %s",
         FUNC_17
         (FUNC_5 (VAR_5)->owner,
          FUNC_5 (VAR_5)));
   break;

 case 139:
   FUNC_19 (VAR_7, "extern global at *(");
   FUNC_21 (FUNC_12 (VAR_5), 1, VAR_7);
   FUNC_19 (VAR_7, "),");
   break;

 case 133:
   FUNC_19 (VAR_7, "register %ld", FUNC_11 (VAR_5));
   break;

 case 147:
   FUNC_19 (VAR_7, "arg at offset 0x%lx",
       FUNC_11 (VAR_5));
   break;

 case 136:
   FUNC_19 (VAR_7, "arg at offset 0x%lx from fp",
       FUNC_11 (VAR_5));
   break;

 case 134:
   FUNC_19 (VAR_7, "reference arg at 0x%lx", FUNC_11 (VAR_5));
   break;

 case 132:
   FUNC_19 (VAR_7, "parameter register %ld", FUNC_11 (VAR_5));
   break;

 case 131:
   FUNC_19 (VAR_7, "address parameter register %ld", FUNC_11 (VAR_5));
   break;

 case 137:
   FUNC_19 (VAR_7, "local at offset 0x%lx",
       FUNC_11 (VAR_5));
   break;

 case 146:
   FUNC_19 (VAR_7, "local at 0x%lx from register %d",
       FUNC_11 (VAR_5), FUNC_4 (VAR_5));
   break;

 case 145:
   FUNC_19 (VAR_7, "arg at 0x%lx from register %d",
       FUNC_11 (VAR_5), FUNC_4 (VAR_5));
   break;

 case 129:
   break;

 case 138:
   FUNC_19 (VAR_7, "label at ");
   FUNC_21 (FUNC_12 (VAR_5), 1, VAR_7);
   if (FUNC_5 (VAR_5))
     FUNC_19 (VAR_7, " section %s",
         FUNC_17
         (FUNC_5 (VAR_5)->owner,
          FUNC_5 (VAR_5)));
   break;

 case 144:
   FUNC_19 (VAR_7, "block object ");
   FUNC_20 (FUNC_6 (VAR_5), VAR_7);
   FUNC_19 (VAR_7, ", ");
   FUNC_21 (FUNC_1 (FUNC_6 (VAR_5)),
     1,
     VAR_7);
   FUNC_19 (VAR_7, "..");
   FUNC_21 (FUNC_0 (FUNC_6 (VAR_5)),
     1,
     VAR_7);
   if (FUNC_5 (VAR_5))
     FUNC_19 (VAR_7, " section %s",
         FUNC_17
         (FUNC_5 (VAR_5)->owner,
          FUNC_5 (VAR_5)));
   break;

 case 143:
 case 142:
   FUNC_19 (VAR_7, "computed at runtime");
   break;

 case 128:
   FUNC_19 (VAR_7, "unresolved");
   break;

 case 135:
   FUNC_19 (VAR_7, "optimized out");
   break;

 default:
   FUNC_19 (VAR_7, "botched symbol class %x",
       FUNC_7 (VAR_5));
   break;
 }
    }
  FUNC_19 (VAR_7, "\n");
  return 1;
}
