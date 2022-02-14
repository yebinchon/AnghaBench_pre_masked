
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_5__ ;
typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct symtab {int dummy; } ;
struct symbol {int dummy; } ;
typedef struct symbol minimal_symbol ;
struct TYPE_7__ {int name; } ;
typedef TYPE_1__ asection ;
struct TYPE_9__ {int (* describe_location ) (struct symbol*,int ) ;} ;
struct TYPE_8__ {scalar_t__ la_language; } ;
typedef int CORE_ADDR ;


 int FUNC_0 (int ) ;
 char* FUNC_1 (struct symbol*) ;
 int VAR_0 ;
 int FUNC_2 (long) ;
 long FUNC_3 (struct symbol*) ;
 TYPE_1__* FUNC_4 (struct symbol*) ;
 int FUNC_5 (struct symbol*) ;
 int FUNC_6 (struct symbol*) ;
 TYPE_5__* FUNC_7 (struct symbol*) ;
 long FUNC_8 (struct symbol*) ;
 int FUNC_9 (struct symbol*) ;
 int VAR_1 ;
 TYPE_4__* VAR_2 ;
 int FUNC_10 (char*,...) ;
 int FUNC_11 (int ,char*,scalar_t__,int ) ;
 int VAR_3 ;
 int FUNC_12 (int ) ;
 scalar_t__ VAR_4 ;
 struct symbol* FUNC_13 (char*,int *,int *) ;
 struct symbol* FUNC_14 (char*,int ,int ,int*,struct symtab**) ;
 int FUNC_15 (int ,TYPE_1__*) ;
 int FUNC_16 (int ,int,int ) ;
 int FUNC_17 (char*,...) ;
 scalar_t__ FUNC_18 (TYPE_1__*) ;
 int FUNC_19 (struct symbol*,int ) ;

__attribute__((used)) static void
FUNC_20 (char *VAR_5, int VAR_6)
{
  struct symbol *VAR_7;
  struct minimal_symbol *VAR_8;
  long VAR_9;
  long VAR_10;
  asection *VAR_11;
  CORE_ADDR VAR_12;
  int VAR_13;


  if (VAR_5 == 0)
    FUNC_10 ("Argument required.");

  VAR_7 = FUNC_14 (VAR_5, FUNC_12 (0), VAR_1,
         &VAR_13, (struct symtab **) ((void*)0));
  if (VAR_7 == ((void*)0))
    {
      if (VAR_13)
 {
   FUNC_17 ("Symbol \"");
   FUNC_11 (VAR_3, VAR_5,
       VAR_2->la_language, VAR_0);
   FUNC_17 ("\" is a field of the local class variable ");
   if (VAR_2->la_language == VAR_4)
     FUNC_17 ("`self'\n");
   else
     FUNC_17 ("`this'\n");
   return;
 }

      VAR_8 = FUNC_13 (VAR_5, ((void*)0), ((void*)0));

      if (VAR_8 != ((void*)0))
 {
   VAR_12 = FUNC_9 (VAR_8);

   FUNC_17 ("Symbol \"");
   FUNC_11 (VAR_3, VAR_5,
       VAR_2->la_language, VAR_0);
   FUNC_17 ("\" is at ");
   FUNC_16 (VAR_12, 1, VAR_3);
   FUNC_17 (" in a file compiled without debugging");
   VAR_11 = FUNC_4 (VAR_8);
   if (FUNC_18 (VAR_11))
     {
       VAR_12 = FUNC_15 (VAR_12, VAR_11);
       FUNC_17 (",\n -- loaded at ");
       FUNC_16 (VAR_12, 1, VAR_3);
       FUNC_17 (" in overlay section %s", VAR_11->name);
     }
   FUNC_17 (".\n");
 }
      else
 FUNC_10 ("No symbol \"%s\" in current context.", VAR_5);
      return;
    }

  FUNC_17 ("Symbol \"");
  FUNC_11 (VAR_3, FUNC_1 (VAR_7),
      VAR_2->la_language, VAR_0);
  FUNC_17 ("\" is ");
  VAR_9 = FUNC_8 (VAR_7);
  VAR_10 = FUNC_3 (VAR_7);
  VAR_11 = FUNC_4 (VAR_7);

  switch (FUNC_6 (VAR_7))
    {
    case 142:
    case 141:
      FUNC_17 ("constant");
      break;

    case 138:
      FUNC_17 ("a label at address ");
      FUNC_16 (VAR_12 = FUNC_9 (VAR_7),
        1, VAR_3);
      if (FUNC_18 (VAR_11))
 {
   VAR_12 = FUNC_15 (VAR_12, VAR_11);
   FUNC_17 (",\n -- loaded at ");
   FUNC_16 (VAR_12, 1, VAR_3);
   FUNC_17 (" in overlay section %s", VAR_11->name);
 }
      break;

    case 144:
    case 143:





      FUNC_7 (VAR_7)->describe_location (VAR_7, VAR_3);
      break;

    case 133:
      FUNC_17 ("a variable in register %s", FUNC_2 (VAR_9));
      break;

    case 130:
      FUNC_17 ("static storage at address ");
      FUNC_16 (VAR_12 = FUNC_9 (VAR_7),
        1, VAR_3);
      if (FUNC_18 (VAR_11))
 {
   VAR_12 = FUNC_15 (VAR_12, VAR_11);
   FUNC_17 (",\n -- loaded at ");
   FUNC_16 (VAR_12, 1, VAR_3);
   FUNC_17 (" in overlay section %s", VAR_11->name);
 }
      break;

    case 139:
      FUNC_17 ("external global (indirect addressing), at address *(");
      FUNC_16 (VAR_12 = FUNC_9 (VAR_7),
        1, VAR_3);
      FUNC_17 (")");
      if (FUNC_18 (VAR_11))
 {
   VAR_12 = FUNC_15 (VAR_12, VAR_11);
   FUNC_17 (",\n -- loaded at ");
   FUNC_16 (VAR_12, 1, VAR_3);
   FUNC_17 (" in overlay section %s", VAR_11->name);
 }
      break;

    case 132:
      FUNC_17 ("an argument in register %s", FUNC_2 (VAR_9));
      break;

    case 131:
      FUNC_17 ("address of an argument in register %s", FUNC_2 (VAR_9));
      break;

    case 148:
      FUNC_17 ("an argument at offset %ld", VAR_9);
      break;

    case 136:
      FUNC_17 ("an argument at frame offset %ld", VAR_9);
      break;

    case 137:
      FUNC_17 ("a local variable at frame offset %ld", VAR_9);
      break;

    case 134:
      FUNC_17 ("a reference argument at offset %ld", VAR_9);
      break;

    case 147:
      FUNC_17 ("a variable at offset %ld from register %s",
         VAR_9, FUNC_2 (VAR_10));
      break;

    case 146:
      FUNC_17 ("an argument at offset %ld from register %s",
         VAR_9, FUNC_2 (VAR_10));
      break;

    case 129:
      FUNC_17 ("a typedef");
      break;

    case 145:
      FUNC_17 ("a function at address ");
      FUNC_16 (VAR_12 = FUNC_0 (FUNC_5 (VAR_7)),
        1, VAR_3);
      if (FUNC_18 (VAR_11))
 {
   VAR_12 = FUNC_15 (VAR_12, VAR_11);
   FUNC_17 (",\n -- loaded at ");
   FUNC_16 (VAR_12, 1, VAR_3);
   FUNC_17 (" in overlay section %s", VAR_11->name);
 }
      break;

    case 128:
      {
 struct minimal_symbol *VAR_14;

 VAR_14 = FUNC_13 (FUNC_1 (VAR_7), ((void*)0), ((void*)0));
 if (VAR_14 == ((void*)0))
   FUNC_17 ("unresolved");
 else
   {
     VAR_11 = FUNC_4 (VAR_14);
     FUNC_17 ("static storage at address ");
     FUNC_16 (VAR_12 = FUNC_9 (VAR_14),
       1, VAR_3);
     if (FUNC_18 (VAR_11))
       {
  VAR_12 = FUNC_15 (VAR_12, VAR_11);
  FUNC_17 (",\n -- loaded at ");
  FUNC_16 (VAR_12, 1, VAR_3);
  FUNC_17 (" in overlay section %s", VAR_11->name);
       }
   }
      }
      break;

    case 140:
      FUNC_17 (
   "a thread-local variable at offset %ld from the thread base register %s",
   VAR_9, FUNC_2 (VAR_10));
      break;

    case 135:
      FUNC_17 ("optimized out");
      break;

    default:
      FUNC_17 ("of unknown (botched) type");
      break;
    }
  FUNC_17 (".\n");
}
