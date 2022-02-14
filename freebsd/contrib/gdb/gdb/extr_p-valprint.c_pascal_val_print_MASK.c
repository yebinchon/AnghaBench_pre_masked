
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
typedef int ULONGEST ;
struct TYPE_2__ {int la_language; } ;
typedef int LONGEST ;
typedef void* CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int FUNC_1 (struct minimal_symbol*) ;
 int VAR_0 ;
 int FUNC_2 (unsigned char,struct ui_file*) ;
 int FUNC_3 (struct ui_file*,char*,unsigned int,int,int ) ;
 int VAR_1 ;
 char* FUNC_4 (struct minimal_symbol*) ;
 struct type* FUNC_5 (struct symbol*) ;
 void* FUNC_6 (struct minimal_symbol*) ;
 int VAR_2 ;
 int const FUNC_7 (struct type*) ;
 int const VAR_3 ;
 int FUNC_8 (struct type*) ;
 int FUNC_9 (struct type*,unsigned int) ;
 char* FUNC_10 (struct type*,unsigned int) ;
 struct type* FUNC_11 (struct type*,unsigned int) ;
 struct type* FUNC_12 (struct type*) ;
 int FUNC_13 (struct type*) ;
 unsigned int FUNC_14 (struct type*) ;
 int FUNC_15 (struct type*) ;
 struct type* FUNC_16 (struct type*) ;
 int FUNC_17 (struct type*) ;
 int VAR_4 ;
 unsigned int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 struct type* FUNC_18 (struct type*) ;
 int FUNC_19 (struct value*,struct ui_file*,int,int,int,int) ;
 TYPE_1__* VAR_8 ;
 int VAR_9 ;
 int FUNC_20 (char*,...) ;
 void* FUNC_21 (char*,int) ;
 int FUNC_22 (struct ui_file*,char*,...) ;
 int FUNC_23 (char*,struct ui_file*) ;
 int FUNC_24 (struct ui_file*) ;
 int FUNC_25 (struct type*,int*,int*) ;
 int FUNC_26 (struct type*,int*,int*,int*,int*,int *) ;
 int VAR_10 ;
 struct minimal_symbol* FUNC_27 (void*) ;
 struct type* FUNC_28 (int ) ;
 struct symbol* FUNC_29 (int ,struct block*,int ,int*,int *) ;
 int VAR_11 ;
 int FUNC_30 (struct type*) ;
 int FUNC_31 (struct type*) ;
 int FUNC_32 (char*,int ,struct ui_file*,char*) ;
 int FUNC_33 (char*,struct type*,struct ui_file*) ;
 int FUNC_34 (struct type*,char*,void*,struct ui_file*,int,int,int,int *,int ) ;
 int VAR_12 ;
 int FUNC_35 (void*,struct ui_file*,int ) ;
 int FUNC_36 (void*,int,struct ui_file*) ;
 int FUNC_37 (char*,struct type*,struct ui_file*) ;
 int FUNC_38 (struct ui_file*,char,int ,int) ;
 unsigned int VAR_13 ;
 int FUNC_39 (char*,struct type*,int,int ,struct ui_file*) ;
 int FUNC_40 (int,struct ui_file*) ;
 int FUNC_41 (struct type*,int,struct ui_file*) ;
 int FUNC_42 (int ,void*,int) ;
 int VAR_14 ;
 int FUNC_43 (struct type*,char*,struct ui_file*,int) ;
 int VAR_15 ;
 int FUNC_44 (struct type*,char*) ;
 void* FUNC_45 (struct type*,char*) ;
 int FUNC_46 (struct type*,char*,void*,struct ui_file*,int,int,int,int,unsigned int) ;
 unsigned int FUNC_47 (void*,int,int,struct ui_file*) ;
 int FUNC_48 (struct type*,char*,struct ui_file*) ;
 struct value* FUNC_49 (struct type*,void*,int *) ;
 int FUNC_50 (struct type*,char*,int) ;
 int VAR_16 ;
 int FUNC_51 (void*) ;
 void* FUNC_52 (int) ;

int
FUNC_53 (struct type *VAR_17, char *VAR_18, int VAR_19,
    CORE_ADDR VAR_20, struct ui_file *VAR_21, int VAR_22,
    int VAR_23, int VAR_24, enum val_prettyprint VAR_25)
{
  unsigned int VAR_26 = 0;
  unsigned VAR_27;
  struct type *VAR_28;
  unsigned VAR_29;
  int VAR_30, VAR_31, VAR_32;
  int VAR_33;
  LONGEST VAR_34;
  CORE_ADDR VAR_35;

  FUNC_0 (VAR_17);
  switch (FUNC_7 (VAR_17))
    {
    case 145:
      if (FUNC_13 (VAR_17) > 0 && FUNC_13 (FUNC_16 (VAR_17)) > 0)
 {
   VAR_28 = FUNC_18 (FUNC_16 (VAR_17));
   VAR_29 = FUNC_13 (VAR_28);
   VAR_27 = FUNC_13 (VAR_17) / VAR_29;
   if (VAR_12)
     {
       FUNC_40 (2 + 2 * VAR_24, VAR_21);
     }

   if (VAR_29 == 1 &&
       ((FUNC_7 (VAR_28) == 137)
        || ((VAR_8->la_language == VAR_10)
     && (FUNC_7 (VAR_28) == 142)))
       && (VAR_22 == 0 || VAR_22 == 's'))
     {


       if (VAR_14)
  {
    unsigned int VAR_36;


    for (VAR_36 = 0;
         (VAR_18 + VAR_19)[VAR_36]
         && VAR_36 < VAR_27 && VAR_36 < VAR_13;
         VAR_36++);
    VAR_27 = VAR_36;
  }

       FUNC_3 (VAR_21, VAR_18 + VAR_19, VAR_27, 1, 0);
       VAR_26 = VAR_27;
     }
   else
     {
       FUNC_22 (VAR_21, "{");


       if (FUNC_31 (VAR_28))
  {
    VAR_26 = 1;
    FUNC_22 (VAR_21, "%d vtable entries", VAR_27 - 1);
  }
       else
  {
    VAR_26 = 0;
  }
       FUNC_46 (VAR_17, VAR_18 + VAR_19, VAR_20, VAR_21,
         VAR_22, VAR_23, VAR_24, VAR_25, VAR_26);
       FUNC_22 (VAR_21, "}");
     }
   break;
 }

      VAR_35 = VAR_20;
      goto print_unpacked_pointer;

    case 135:
      if (VAR_22 && VAR_22 != 's')
 {
   FUNC_39 (VAR_18 + VAR_19, VAR_17, VAR_22, 0, VAR_21);
   break;
 }
      if (VAR_16 && FUNC_31 (VAR_17))
 {




   FUNC_35 (FUNC_21 (VAR_18 + VAR_19, FUNC_13 (VAR_17)),
      VAR_21, VAR_9);
   break;
 }
      VAR_28 = FUNC_18 (FUNC_16 (VAR_17));
      if (FUNC_7 (VAR_28) == VAR_3)
 {
   FUNC_33 (VAR_18 + VAR_19, VAR_17, VAR_21);
 }
      else if (FUNC_7 (VAR_28) == 136)
 {
   FUNC_32 (VAR_18 + VAR_19,
     FUNC_8 (FUNC_16 (VAR_17)),
         VAR_21, "&");
 }
      else
 {
   VAR_35 = FUNC_45 (VAR_17, VAR_18 + VAR_19);
 print_unpacked_pointer:
   VAR_28 = FUNC_18 (FUNC_16 (VAR_17));

   if (FUNC_7 (VAR_28) == 138)
     {

       FUNC_35 (VAR_35, VAR_21, VAR_9);

       return (0);
     }

   if (VAR_6 && VAR_22 != 's')
     {
       FUNC_36 (VAR_35, 1, VAR_21);
     }



   if (FUNC_13 (VAR_28) == 1
       && FUNC_7 (VAR_28) == 137
       && (VAR_22 == 0 || VAR_22 == 's')
       && VAR_35 != 0)
     {

       VAR_26 = FUNC_47 (VAR_35, -1, 1, VAR_21);
     }





          if (FUNC_26 (VAR_28, &VAR_30, &VAR_31,
                                     &VAR_32, &VAR_33, ((void*)0))
       && VAR_35 != 0)
     {
       ULONGEST VAR_37;
              void *VAR_38;
              VAR_38 = FUNC_52 (VAR_31);
              FUNC_42 (VAR_35 + VAR_30, VAR_38, VAR_31);
       VAR_37 = FUNC_21 (VAR_38, VAR_31);
              FUNC_51 (VAR_38);
              VAR_26 = FUNC_47 (VAR_35 + VAR_32, VAR_37, VAR_33, VAR_21);
     }
   else if (FUNC_30 (VAR_17))
     {

       CORE_ADDR VAR_39 = FUNC_45 (VAR_17, VAR_18 + VAR_19);

       struct minimal_symbol *VAR_40 =
       FUNC_27 (VAR_39);
       if ((VAR_40 != ((void*)0))
    && (VAR_39 == FUNC_6 (VAR_40)))
  {
    FUNC_23 (" <", VAR_21);
    FUNC_23 (FUNC_4 (VAR_40), VAR_21);
    FUNC_23 (">", VAR_21);
  }
       if (VAR_39 && VAR_16)
  {
    struct value *VAR_41;
    struct symbol *VAR_42 = (struct symbol *) ((void*)0);
    struct type *VAR_43;
    struct block *VAR_44 = (struct block *) ((void*)0);
    int VAR_45;

    if (VAR_40 != ((void*)0))
      VAR_42 = FUNC_29 (FUNC_1 (VAR_40), VAR_44,
       VAR_4, &VAR_45, ((void*)0));

    if (VAR_42)
      {
        VAR_43 = FUNC_5 (VAR_42);
      }
    else
      {
        VAR_43 = FUNC_16 (VAR_17);
      }
    VAR_41 = FUNC_49 (VAR_43, VAR_39, ((void*)0));
    FUNC_19 (VAR_41, VAR_21, VAR_22, VAR_23,
        VAR_24 + 1, VAR_25);
    if (VAR_25)
      {
        FUNC_22 (VAR_21, "\n");
        FUNC_40 (2 + 2 * VAR_24, VAR_21);
      }
  }
     }




   return VAR_26;
 }
      break;

    case 136:
      FUNC_20 ("not implemented: member type in pascal_val_print");
      break;

    case 133:
      VAR_28 = FUNC_18 (FUNC_16 (VAR_17));
      if (FUNC_7 (VAR_28) == 136)
 {
   FUNC_32 (VAR_18 + VAR_19,
         FUNC_8 (VAR_28),
         VAR_21, "");
   break;
 }
      if (VAR_6)
 {
   FUNC_22 (VAR_21, "@");

   FUNC_36
     (FUNC_21 (VAR_18 + VAR_19,
           VAR_2 / VAR_0),
      1, VAR_21);
   if (VAR_23)
     FUNC_23 (": ", VAR_21);
 }

      if (VAR_23)
 {
   if (FUNC_7 (VAR_28) != 130)
     {
       struct value *VAR_46 =
       FUNC_49
       (FUNC_16 (VAR_17),
        FUNC_45 (FUNC_28 (VAR_7),
          VAR_18 + VAR_19),
        ((void*)0));
       FUNC_19 (VAR_46, VAR_21, VAR_22, VAR_23,
    VAR_24 + 1, VAR_25);
     }
   else
     FUNC_23 ("???", VAR_21);
 }
      break;

    case 129:
      if (VAR_24 && !VAR_15)
 {
   FUNC_22 (VAR_21, "{...}");
   break;
 }

    case 131:
      if (VAR_16 && FUNC_31 (VAR_17))
 {




   FUNC_35
     (FUNC_21 (VAR_18 + VAR_19 + FUNC_9 (VAR_17, VAR_5) / 8,
           FUNC_13 (FUNC_11 (VAR_17, VAR_5))),
      VAR_21, VAR_9);
 }
      else
 {
          if (FUNC_26 (VAR_17, &VAR_30, &VAR_31,
                                     &VAR_32, &VAR_33, ((void*)0)))
     {
       VAR_27 = FUNC_21 (VAR_18 + VAR_19 + VAR_30, VAR_31);
       FUNC_3 (VAR_21, VAR_18 + VAR_19 + VAR_32, VAR_27, VAR_33, 0);
     }
   else
     FUNC_34 (VAR_17, VAR_18 + VAR_19, VAR_20, VAR_21, VAR_22,
           VAR_24, VAR_25, ((void*)0), 0);
 }
      break;

    case 141:
      if (VAR_22)
 {
   FUNC_39 (VAR_18 + VAR_19, VAR_17, VAR_22, 0, VAR_21);
   break;
 }
      VAR_27 = FUNC_14 (VAR_17);
      VAR_34 = FUNC_44 (VAR_17, VAR_18 + VAR_19);
      for (VAR_26 = 0; VAR_26 < VAR_27; VAR_26++)
 {
   VAR_1;
   if (VAR_34 == FUNC_9 (VAR_17, VAR_26))
     {
       break;
     }
 }
      if (VAR_26 < VAR_27)
 {
   FUNC_23 (FUNC_10 (VAR_17, VAR_26), VAR_21);
 }
      else
 {
   FUNC_38 (VAR_21, 'd', 0, VAR_34);
 }
      break;

    case 138:
      if (VAR_22)
 {
   FUNC_39 (VAR_18 + VAR_19, VAR_17, VAR_22, 0, VAR_21);
   break;
 }


      FUNC_22 (VAR_21, "{");
      FUNC_43 (VAR_17, "", VAR_21, -1);
      FUNC_22 (VAR_21, "} ");

      FUNC_35 (VAR_20, VAR_21, VAR_9);
      break;

    case 143:
      VAR_22 = VAR_22 ? VAR_22 : VAR_11;
      if (VAR_22)
 FUNC_39 (VAR_18 + VAR_19, VAR_17, VAR_22, 0, VAR_21);
      else
 {
   VAR_34 = FUNC_44 (VAR_17, VAR_18 + VAR_19);
   if (VAR_34 == 0)
     FUNC_23 ("false", VAR_21);
   else if (VAR_34 == 1)
     FUNC_23 ("true", VAR_21);
   else
     {
       FUNC_23 ("true (", VAR_21);
       FUNC_22 (VAR_21, "%ld)", (long int) VAR_34);
     }
 }
      break;

    case 134:
    case 137:
      VAR_22 = VAR_22 ? VAR_22 : VAR_11;
      if (VAR_22)
 {
   FUNC_39 (VAR_18 + VAR_19, VAR_17, VAR_22, 0, VAR_21);
 }
      else
 {
   FUNC_48 (VAR_17, VAR_18 + VAR_19, VAR_21);
 }
      break;

    case 142:
      VAR_22 = VAR_22 ? VAR_22 : VAR_11;
      if (VAR_22)
 {
   FUNC_39 (VAR_18 + VAR_19, VAR_17, VAR_22, 0, VAR_21);
 }
      else
 {
   VAR_34 = FUNC_44 (VAR_17, VAR_18 + VAR_19);
   if (FUNC_17 (VAR_17))
     FUNC_22 (VAR_21, "%u", (unsigned int) VAR_34);
   else
     FUNC_22 (VAR_21, "%d", (int) VAR_34);
   FUNC_23 (" ", VAR_21);
   FUNC_2 ((unsigned char) VAR_34, VAR_21);
 }
      break;

    case 139:
      if (VAR_22)
 {
   FUNC_39 (VAR_18 + VAR_19, VAR_17, VAR_22, 0, VAR_21);
 }
      else
 {
   FUNC_37 (VAR_18 + VAR_19, VAR_17, VAR_21);
 }
      break;

    case 144:
    case 132:
      VAR_28 = FUNC_12 (VAR_17);
      FUNC_0 (VAR_28);
      if (FUNC_15 (VAR_28))
 {
   FUNC_22 (VAR_21, "<incomplete type>");
   FUNC_24 (VAR_21);
   break;
 }
      else
 {
   struct type *VAR_47 = VAR_28;
   LONGEST VAR_48, VAR_49;
   int VAR_50;
   int VAR_51 = FUNC_7 (VAR_17) == 144;
   int VAR_52 = 0;

   if (VAR_51)
     FUNC_23 ("B'", VAR_21);
   else
     FUNC_23 ("[", VAR_21);

   VAR_50 = FUNC_25 (VAR_47, &VAR_48, &VAR_49);
 maybe_bad_bstring:
   if (VAR_50 < 0)
     {
       FUNC_23 ("<error value>", VAR_21);
       goto done;
     }

   for (VAR_50 = VAR_48; VAR_50 <= VAR_49; VAR_50++)
     {
       int VAR_53 = FUNC_50 (VAR_17, VAR_18 + VAR_19, VAR_50);
       if (VAR_53 < 0)
  {
    VAR_50 = VAR_53;
    goto maybe_bad_bstring;
  }
       if (VAR_51)
  FUNC_22 (VAR_21, "%d", VAR_53);
       else if (VAR_53)
  {
    if (VAR_52)
      FUNC_23 (", ", VAR_21);
    FUNC_41 (VAR_47, VAR_50, VAR_21);
    VAR_52 = 1;

    if (VAR_50 + 1 <= VAR_49 && FUNC_50 (VAR_17, VAR_18 + VAR_19, ++VAR_50))
      {
        int VAR_54 = VAR_50;
        FUNC_23 ("..", VAR_21);
        while (VAR_50 + 1 <= VAR_49
        && FUNC_50 (VAR_17, VAR_18 + VAR_19, ++VAR_50))
   VAR_54 = VAR_50;
        FUNC_41 (VAR_47, VAR_54, VAR_21);
      }
  }
     }
 done:
   if (VAR_51)
     FUNC_23 ("'", VAR_21);
   else
     FUNC_23 ("]", VAR_21);
 }
      break;

    case 128:
      FUNC_22 (VAR_21, "void");
      break;

    case 140:
      FUNC_22 (VAR_21, "<error type>");
      break;

    case 130:



      FUNC_22 (VAR_21, "<incomplete type>");
      break;

    default:
      FUNC_20 ("Invalid pascal type code %d in symbol table.", FUNC_7 (VAR_17));
    }
  FUNC_24 (VAR_21);
  return (0);
}
