
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;
struct symbol {int dummy; } ;
struct minimal_symbol {int dummy; } ;
struct block {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
struct TYPE_2__ {int la_language; } ;
typedef int LONGEST ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct minimal_symbol*) ;
 int FUNC_2 (unsigned char,struct ui_file*) ;
 int FUNC_3 (struct ui_file*,char*,unsigned int,unsigned int,int ) ;
 int VAR_0 ;
 char* FUNC_4 (struct minimal_symbol*) ;
 struct type* FUNC_5 (struct symbol*) ;
 int FUNC_6 (struct minimal_symbol*) ;
 int FUNC_7 (struct type*) ;
 int FUNC_8 (struct type*) ;
 int FUNC_9 (struct type*,unsigned int) ;
 char* FUNC_10 (struct type*,unsigned int) ;
 struct type* FUNC_11 (struct type*,unsigned int) ;
 int FUNC_12 (struct type*) ;
 unsigned int FUNC_13 (struct type*) ;
 struct type* FUNC_14 (struct type*) ;
 int FUNC_15 (struct type*) ;
 char* FUNC_16 (int ) ;
 int VAR_1 ;
 unsigned int VAR_2 ;
 int VAR_3 ;
 struct type* VAR_4 ;
 struct type* FUNC_17 (struct type*) ;
 int FUNC_18 (struct value*,struct ui_file*,int,int,int,int) ;
 int FUNC_19 (struct type*) ;
 int FUNC_20 (struct type*) ;
 int FUNC_21 (char*,int ,struct ui_file*,char*) ;
 int FUNC_22 (char*,struct type*,struct ui_file*) ;
 int FUNC_23 (struct type*,struct type*,char*,int,int ,struct ui_file*,int,int,int,int *,int ) ;
 TYPE_1__* VAR_5 ;
 int VAR_6 ;
 int FUNC_24 (char*,...) ;
 int FUNC_25 (char*,struct type*) ;
 int FUNC_26 (struct ui_file*,char*,...) ;
 int FUNC_27 (char*,struct ui_file*) ;
 int FUNC_28 (struct ui_file*) ;
 int VAR_7 ;
 struct minimal_symbol* FUNC_29 (int ) ;
 struct type* FUNC_30 (struct type*) ;
 struct symbol* FUNC_31 (int ,struct block*,int ,int*,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_32 (int ,struct ui_file*,int ) ;
 int FUNC_33 (int ,int,struct ui_file*) ;
 int FUNC_34 (char*,struct type*,struct ui_file*) ;
 int FUNC_35 (int ,struct ui_file*) ;
 int FUNC_36 (struct ui_file*,char,int ,int) ;
 unsigned int VAR_10 ;
 int FUNC_37 (char*,struct type*,int,int ,struct ui_file*) ;
 int FUNC_38 (int,struct ui_file*) ;
 int VAR_11 ;
 int FUNC_39 (struct type*,char*,struct ui_file*,int) ;
 int VAR_12 ;
 int FUNC_40 (struct type*,char*) ;
 int FUNC_41 (struct type*,char*) ;
 int FUNC_42 (struct type*,char*,int ,struct ui_file*,int,int,int,int,unsigned int) ;
 unsigned int FUNC_43 (int ,int,int,struct ui_file*) ;
 int FUNC_44 (struct type*,char*,struct ui_file*) ;
 int FUNC_45 (struct value*) ;
 struct value* FUNC_46 (struct type*,int ,int *) ;
 int VAR_13 ;

int
FUNC_47 (struct type *VAR_14, char *VAR_15, int VAR_16,
      CORE_ADDR VAR_17, struct ui_file *VAR_18, int VAR_19,
      int VAR_20, int VAR_21, enum val_prettyprint VAR_22)
{
  unsigned int VAR_23 = 0;
  unsigned VAR_24;
  struct type *VAR_25;
  unsigned VAR_26;
  LONGEST VAR_27;
  CORE_ADDR VAR_28;

  FUNC_0 (VAR_14);
  switch (FUNC_7 (VAR_14))
    {
    case 145:
      VAR_25 = FUNC_17 (FUNC_14 (VAR_14));
      if (FUNC_12 (VAR_14) > 0 && FUNC_12 (FUNC_14 (VAR_14)) > 0)
 {
   VAR_26 = FUNC_12 (VAR_25);
   VAR_24 = FUNC_12 (VAR_14) / VAR_26;
   if (VAR_9)
     {
       FUNC_38 (2 + 2 * VAR_21, VAR_18);
     }

   if (VAR_26 == 1 &&
       ((FUNC_7 (VAR_25) == 137)
        || ((VAR_5->la_language == VAR_7)
     && (FUNC_7 (VAR_25) == 143)))
       && (VAR_19 == 0 || VAR_19 == 's'))
     {


       if (VAR_11)
  {
    unsigned int VAR_29;


    for (VAR_29 = 0;
         (VAR_15 + VAR_16)[VAR_29]
         && VAR_29 < VAR_24 && VAR_29 < VAR_10;
         VAR_29++);
    VAR_24 = VAR_29;
  }

       FUNC_3 (VAR_18, VAR_15 + VAR_16, VAR_24, VAR_26, 0);
       VAR_23 = VAR_24;
     }
   else
     {
       FUNC_26 (VAR_18, "{");


       if (FUNC_20 (VAR_25))
  {
    VAR_23 = 1;
    FUNC_26 (VAR_18, "%d vtable entries", VAR_24 - 1);
  }
       else
  {
    VAR_23 = 0;
  }
       FUNC_42 (VAR_14, VAR_15 + VAR_16, VAR_17, VAR_18,
         VAR_19, VAR_20, VAR_21, VAR_22, VAR_23);
       FUNC_26 (VAR_18, "}");
     }
   break;
 }

      VAR_28 = VAR_17;
      goto print_unpacked_pointer;

    case 134:
      if (VAR_19 && VAR_19 != 's')
 {
   FUNC_37 (VAR_15 + VAR_16, VAR_14, VAR_19, 0, VAR_18);
   break;
 }
      if (VAR_13 && FUNC_20 (VAR_14))
 {



   CORE_ADDR VAR_30
     = FUNC_25 (VAR_15 + VAR_16, VAR_14);
   FUNC_35 (VAR_30, VAR_18);
   break;
 }
      VAR_25 = FUNC_17 (FUNC_14 (VAR_14));
      if (FUNC_7 (VAR_25) == 135)
 {
   FUNC_22 (VAR_15 + VAR_16, VAR_14, VAR_18);
 }
      else if (FUNC_7 (VAR_25) == 136)
 {
   FUNC_21 (VAR_15 + VAR_16,
     FUNC_8 (FUNC_14 (VAR_14)),
     VAR_18, "&");
 }
      else
 {
   VAR_28 = FUNC_41 (VAR_14, VAR_15 + VAR_16);
 print_unpacked_pointer:

   if (FUNC_7 (VAR_25) == 138)
     {

       FUNC_35 (VAR_28, VAR_18);

       return (0);
     }

   if (VAR_3 && VAR_19 != 's')
     {
       FUNC_33 (VAR_28, 1, VAR_18);
     }





   if (FUNC_12 (VAR_25) == 1
       && FUNC_7 (VAR_25) == 137
       && (VAR_19 == 0 || VAR_19 == 's')
       && VAR_28 != 0)
     {
       VAR_23 = FUNC_43 (VAR_28, -1, FUNC_12 (VAR_25), VAR_18);
     }
   else if (FUNC_19 (VAR_14))
     {

       CORE_ADDR VAR_31 = FUNC_41 (VAR_14, VAR_15 + VAR_16);

       struct minimal_symbol *VAR_32 =
       FUNC_29 (VAR_31);
       if ((VAR_32 != ((void*)0)) &&
    (VAR_31 == FUNC_6 (VAR_32)))
  {
    FUNC_27 (" <", VAR_18);
    FUNC_27 (FUNC_4 (VAR_32), VAR_18);
    FUNC_27 (">", VAR_18);
  }
       if (VAR_31 && VAR_13)
  {
    struct value *VAR_33;
    struct symbol *VAR_34 = (struct symbol *) ((void*)0);
    struct type *VAR_35;
    struct block *VAR_36 = (struct block *) ((void*)0);
    int VAR_37;

    if (VAR_32 != ((void*)0))
      VAR_34 = FUNC_31 (FUNC_1 (VAR_32), VAR_36,
       VAR_1, &VAR_37, ((void*)0));

    if (VAR_34)
      {
        VAR_35 = FUNC_5 (VAR_34);
      }
    else
      {
        VAR_35 = FUNC_14 (VAR_14);
      }
    VAR_33 = FUNC_46 (VAR_35, VAR_31, ((void*)0));
    FUNC_18 (VAR_33, VAR_18, VAR_19,
        VAR_20, VAR_21 + 1, VAR_22);
    if (VAR_22)
      {
        FUNC_26 (VAR_18, "\n");
        FUNC_38 (2 + 2 * VAR_21, VAR_18);
      }
  }
     }




   return VAR_23;
 }
      break;

    case 136:
      FUNC_24 ("not implemented: member type in c_val_print");
      break;

    case 132:
      VAR_25 = FUNC_17 (FUNC_14 (VAR_14));
      if (FUNC_7 (VAR_25) == 136)
 {
   FUNC_21 (VAR_15 + VAR_16,
     FUNC_8 (VAR_25),
     VAR_18, "");
   break;
 }
      if (VAR_3)
 {
   CORE_ADDR VAR_38
     = FUNC_25 (VAR_15 + VAR_16, VAR_14);
   FUNC_26 (VAR_18, "@");
   FUNC_33 (VAR_38, 1, VAR_18);
   if (VAR_20)
     FUNC_27 (": ", VAR_18);
 }

      if (VAR_20)
 {
   if (FUNC_7 (VAR_25) != 130)
     {
       struct value *VAR_39 =
       FUNC_46
       (FUNC_14 (VAR_14),
        FUNC_41 (FUNC_30 (VAR_4),
          VAR_15 + VAR_16),
        ((void*)0));
       FUNC_18 (VAR_39, VAR_18, VAR_19, VAR_20,
    VAR_21, VAR_22);
     }
   else
     FUNC_27 ("???", VAR_18);
 }
      break;

    case 129:
      if (VAR_21 && !VAR_12)
 {
   FUNC_26 (VAR_18, "{...}");
   break;
 }

    case 131:

      if (VAR_13 && FUNC_20 (VAR_14))
 {



   int VAR_40 = (VAR_16 +
   FUNC_9 (VAR_14, VAR_2) / 8);
   struct type *VAR_41 = FUNC_11 (VAR_14, VAR_2);
   CORE_ADDR VAR_42
     = FUNC_25 (VAR_15 + VAR_40, VAR_41);

   FUNC_35 (VAR_42, VAR_18);
 }
      else
 FUNC_23 (VAR_14, VAR_14, VAR_15, VAR_16, VAR_17, VAR_18, VAR_19,
          VAR_21, VAR_22, ((void*)0), 0);
      break;

    case 141:
      if (VAR_19)
 {
   FUNC_37 (VAR_15 + VAR_16, VAR_14, VAR_19, 0, VAR_18);
   break;
 }
      VAR_24 = FUNC_13 (VAR_14);
      VAR_27 = FUNC_40 (VAR_14, VAR_15 + VAR_16);
      for (VAR_23 = 0; VAR_23 < VAR_24; VAR_23++)
 {
   VAR_0;
   if (VAR_27 == FUNC_9 (VAR_14, VAR_23))
     {
       break;
     }
 }
      if (VAR_23 < VAR_24)
 {
   FUNC_27 (FUNC_10 (VAR_14, VAR_23), VAR_18);
 }
      else
 {
   FUNC_36 (VAR_18, 'd', 0, VAR_27);
 }
      break;

    case 138:
      if (VAR_19)
 {
   FUNC_37 (VAR_15 + VAR_16, VAR_14, VAR_19, 0, VAR_18);
   break;
 }


      FUNC_26 (VAR_18, "{");
      FUNC_39 (VAR_14, "", VAR_18, -1);
      FUNC_26 (VAR_18, "} ");

      FUNC_32 (VAR_17, VAR_18, VAR_6);
      break;

    case 144:
      VAR_19 = VAR_19 ? VAR_19 : VAR_8;
      if (VAR_19)
 FUNC_37 (VAR_15 + VAR_16, VAR_14, VAR_19, 0, VAR_18);
      else
 {
   VAR_27 = FUNC_40 (VAR_14, VAR_15 + VAR_16);
   if (VAR_27 == 0)
     FUNC_27 ("false", VAR_18);
   else if (VAR_27 == 1)
     FUNC_27 ("true", VAR_18);
   else
     FUNC_36 (VAR_18, 'd', 0, VAR_27);
 }
      break;

    case 133:
    case 137:
      VAR_19 = VAR_19 ? VAR_19 : VAR_8;
      if (VAR_19)
 {
   FUNC_37 (VAR_15 + VAR_16, VAR_14, VAR_19, 0, VAR_18);
 }
      else
 {
   FUNC_44 (VAR_14, VAR_15 + VAR_16, VAR_18);




   if (FUNC_12 (VAR_14) == 1)
     {
       FUNC_27 (" ", VAR_18);
       FUNC_2 ((unsigned char) FUNC_40 (VAR_14, VAR_15 + VAR_16),
        VAR_18);
     }
 }
      break;

    case 143:
      VAR_19 = VAR_19 ? VAR_19 : VAR_8;
      if (VAR_19)
 {
   FUNC_37 (VAR_15 + VAR_16, VAR_14, VAR_19, 0, VAR_18);
 }
      else
 {
   VAR_27 = FUNC_40 (VAR_14, VAR_15 + VAR_16);
   if (FUNC_15 (VAR_14))
     FUNC_26 (VAR_18, "%u", (unsigned int) VAR_27);
   else
     FUNC_26 (VAR_18, "%d", (int) VAR_27);
   FUNC_27 (" ", VAR_18);
   FUNC_2 ((unsigned char) VAR_27, VAR_18);
 }
      break;

    case 139:
      if (VAR_19)
 {
   FUNC_37 (VAR_15 + VAR_16, VAR_14, VAR_19, 0, VAR_18);
 }
      else
 {
   FUNC_34 (VAR_15 + VAR_16, VAR_14, VAR_18);
 }
      break;

    case 135:
      {
 struct value *VAR_43 = FUNC_46 (VAR_14, VAR_17, ((void*)0));
 FUNC_22 (FUNC_16 (FUNC_45 (VAR_43)),
          FUNC_30 (VAR_14), VAR_18);
 break;
      }

    case 128:
      FUNC_26 (VAR_18, "void");
      break;

    case 140:
      FUNC_26 (VAR_18, "<error type>");
      break;

    case 130:



      FUNC_26 (VAR_18, "<incomplete type>");
      break;

    case 142:
      if (VAR_19)
 FUNC_37 (VAR_15 + VAR_16,
    FUNC_14 (VAR_14),
    VAR_19, 0, VAR_18);
      else
 FUNC_34 (VAR_15 + VAR_16, FUNC_14 (VAR_14),
   VAR_18);
      FUNC_26 (VAR_18, " + ");
      if (VAR_19)
 FUNC_37 (VAR_15 + VAR_16
    + FUNC_12 (FUNC_14 (VAR_14)),
    FUNC_14 (VAR_14),
    VAR_19, 0, VAR_18);
      else
 FUNC_34 (VAR_15 + VAR_16
   + FUNC_12 (FUNC_14 (VAR_14)),
   FUNC_14 (VAR_14),
   VAR_18);
      FUNC_26 (VAR_18, " * I");
      break;

    default:
      FUNC_24 ("Invalid C/C++ type code %d in symbol table.", FUNC_7 (VAR_14));
    }
  FUNC_28 (VAR_18);
  return (0);
}
