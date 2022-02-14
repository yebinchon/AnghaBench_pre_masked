
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct value {int dummy; } ;
struct ui_file {int dummy; } ;
struct type {int dummy; } ;
typedef enum val_prettyprint { ____Placeholder_val_prettyprint } val_prettyprint ;
typedef scalar_t__ LONGEST ;
typedef int CORE_ADDR ;


 int FUNC_0 (struct type*) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int const FUNC_1 (struct type*) ;






 int const VAR_3 ;

 scalar_t__ FUNC_2 (struct type*,int) ;
 int FUNC_3 (struct type*,int ) ;
 int FUNC_4 (struct type*,int) ;
 unsigned int FUNC_5 (struct type*) ;
 unsigned int FUNC_6 (struct type*) ;
 struct type* FUNC_7 (struct type*) ;
 int FUNC_8 (struct value*) ;
 char* FUNC_9 (struct value*) ;
 struct type* FUNC_10 (struct value*) ;
 char* FUNC_11 (struct type*,char*) ;
 struct value* FUNC_12 (struct value*) ;
 char* FUNC_13 (int ) ;
 scalar_t__ FUNC_14 (struct type*,scalar_t__) ;
 scalar_t__ FUNC_15 (struct type*) ;
 int FUNC_16 (struct type*) ;
 int FUNC_17 (struct type*) ;
 int FUNC_18 (struct type*) ;
 scalar_t__ FUNC_19 (struct type*) ;
 int FUNC_20 (struct type*) ;
 int FUNC_21 (struct type*) ;
 int FUNC_22 (unsigned char,struct ui_file*) ;
 struct value* FUNC_23 (int ) ;
 struct value* FUNC_24 (struct type*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 struct type* VAR_7 ;
 int FUNC_25 (struct type*,char*,int,int ,struct ui_file*,int,int,int,int) ;
 struct value* FUNC_26 (struct value*,int,struct value**) ;
 int FUNC_27 (char*,int,unsigned int) ;
 struct type* FUNC_28 (struct type*) ;
 int FUNC_29 (int *,int ,int ) ;
 int FUNC_30 (int *,int ,int ,int) ;
 int FUNC_31 (char*,int) ;
 int FUNC_32 (struct ui_file*,char*,...) ;
 int FUNC_33 (char const*,struct ui_file*) ;
 int FUNC_34 (struct ui_file*) ;
 int FUNC_35 (struct type*) ;
 struct type* FUNC_36 (int ,int *) ;
 int VAR_8 ;
 int VAR_9 ;
 int FUNC_37 (int ,int,struct ui_file*) ;
 int FUNC_38 (struct ui_file*,char,int ,scalar_t__) ;
 int VAR_10 ;
 int FUNC_39 (struct ui_file*,struct type*) ;
 int FUNC_40 (struct type*,char*,struct ui_file*,int,int,int) ;
 int FUNC_41 (char*,struct type*,int,int ,struct ui_file*) ;
 int FUNC_42 (int,struct ui_file*) ;
 struct type* FUNC_43 (struct type*,char*) ;
 int FUNC_44 (struct ui_file*,char*,unsigned int,int ,unsigned int) ;
 int VAR_11 ;
 scalar_t__ FUNC_45 (struct type*,char*) ;
 int FUNC_46 (int ,char*) ;
 int FUNC_47 (struct type*,char*,int ,int ,struct ui_file*,int,int,int,int) ;
 int FUNC_48 (struct type*,char*,int ,struct ui_file*,int,int,int,int,int ) ;
 int FUNC_49 (struct type*,char*,int ,struct ui_file*,int,int,int) ;
 int FUNC_50 (struct type*,char*,struct ui_file*) ;
 struct value* FUNC_51 (struct type*,struct value*) ;
 int FUNC_52 (struct value*) ;
 struct value* FUNC_53 (struct type*,char*,int ) ;
 int FUNC_54 (int ,scalar_t__) ;
 struct value* FUNC_55 (struct value*) ;
 struct value* FUNC_56 () ;

__attribute__((used)) static int
FUNC_57 (struct type *VAR_12, char *VAR_13, int VAR_14,
   CORE_ADDR VAR_15, struct ui_file *VAR_16, int VAR_17,
   int VAR_18, int VAR_19, enum val_prettyprint VAR_20)
{
  unsigned int VAR_21;
  int VAR_22;
  struct type *VAR_23;
  unsigned int VAR_24;
  LONGEST VAR_25;
  CORE_ADDR VAR_26;
  char *VAR_27 = VAR_13 + VAR_14;

  FUNC_0 (VAR_12);

  if (FUNC_15 (VAR_12) || FUNC_19 (VAR_12))
    {
      int VAR_28;
      struct value *VAR_29 = FUNC_56 ();
      struct value *VAR_30;
      VAR_30 = FUNC_53 (VAR_12, VAR_27, VAR_15);
      VAR_30 = FUNC_12 (VAR_30);
      if (VAR_30 == ((void*)0))
 {
   FUNC_32 (VAR_16, "(null)");
   VAR_28 = 0;
 }
      else
 VAR_28 = FUNC_57 (FUNC_10 (VAR_30), FUNC_9 (VAR_30), 0,
    FUNC_8 (VAR_30), VAR_16, VAR_17,
    VAR_18, VAR_19, VAR_20);
      FUNC_52 (VAR_29);
      return VAR_28;
    }

  VAR_27 = FUNC_11 (VAR_12, VAR_27);
  VAR_14 -= VAR_27 - VAR_13 - VAR_14;
  VAR_12 = FUNC_43 (VAR_12, VAR_27);

  switch (FUNC_1 (VAR_12))
    {
    default:
      return FUNC_25 (VAR_12, VAR_13, VAR_14, VAR_15, VAR_16,
     VAR_17, VAR_18, VAR_19, VAR_20);

    case 132:
    case 131:
      if (FUNC_18 (VAR_12))
 {
   LONGEST VAR_31 = FUNC_45 (VAR_12, VAR_27);
   int VAR_32 = FUNC_5 (VAR_12);

   FUNC_32 (VAR_16, VAR_32 < 4 ? "%.11g" : "%.17g",
       (double) FUNC_14 (VAR_12, VAR_31));
   return 0;
 }
      else if (FUNC_21 (VAR_12))
 {
   struct value *VAR_33 =
     FUNC_53 (VAR_12, VAR_27, VAR_15);
   struct value *VAR_34 = FUNC_24 (VAR_12);
   if (VAR_34 != 0)
     {
       static struct type *VAR_35 = ((void*)0);
       struct value *VAR_36;

       if (VAR_35 == ((void*)0))
  VAR_35 =
    FUNC_36
    (FUNC_29
     (((void*)0), VAR_5,
      FUNC_30 (((void*)0), VAR_6, 0, 32)), ((void*)0));

       VAR_36 =
  FUNC_55 (FUNC_51 (VAR_35,
           FUNC_26 (VAR_34, 1,
             &VAR_33)));

       FUNC_32 (VAR_16, "%s", FUNC_9 (VAR_36));
       return 0;
     }

 }
      else if (FUNC_1 (VAR_12) == 131)
 {
   struct type *VAR_37 = FUNC_7 (VAR_12);
   if (FUNC_5 (VAR_12) != FUNC_5 (VAR_37))
     {




       struct value *VAR_38 = FUNC_51 (VAR_37,
         FUNC_53
         (VAR_12, VAR_27, 0));
       return FUNC_57 (VAR_37, FUNC_9 (VAR_38), 0, 0,
          VAR_16, VAR_17, 0, VAR_19 + 1, VAR_20);
     }
   else
     return FUNC_57 (FUNC_7 (VAR_12),
        VAR_13, VAR_14,
        VAR_15, VAR_16, VAR_17, VAR_18,
        VAR_19, VAR_20);
 }
      else
 {
   VAR_17 = VAR_17 ? VAR_17 : VAR_8;
   if (VAR_17)
     {
       FUNC_41 (VAR_27, VAR_12, VAR_17, 0, VAR_16);
     }
   else
     {
       FUNC_50 (VAR_12, VAR_27, VAR_16);
       if (FUNC_17 (VAR_12))
  {
    FUNC_33 (" ", VAR_16);
    FUNC_22 ((unsigned char) FUNC_45 (VAR_12, VAR_27),
     VAR_16);
  }
     }
   return 0;
 }

    case 133:
      if (VAR_17)
 {
   FUNC_41 (VAR_27, VAR_12, VAR_17, 0, VAR_16);
   break;
 }
      VAR_21 = FUNC_6 (VAR_12);
      VAR_25 = FUNC_45 (VAR_12, VAR_27);
      for (VAR_22 = 0; VAR_22 < VAR_21; VAR_22++)
 {
   VAR_1;
   if (VAR_25 == FUNC_2 (VAR_12, VAR_22))
     {
       break;
     }
 }
      if (VAR_22 < VAR_21)
 {
   const char *VAR_39 = FUNC_13 (FUNC_4 (VAR_12, VAR_22));
   if (VAR_39[0] == '\'')
     FUNC_32 (VAR_16, "%ld %s", (long) VAR_25, VAR_39);
   else
     FUNC_33 (VAR_39, VAR_16);
 }
      else
 {
   FUNC_38 (VAR_16, 'd', 0, VAR_25);
 }
      break;

    case 128:
    case 129:
      if (FUNC_16 (VAR_12))
 {
   FUNC_32 (VAR_16, "(...?)");
   return 0;
 }
      else
 {
   FUNC_40 (VAR_12, VAR_27, VAR_16, VAR_17, VAR_19, VAR_20);
   return 0;
 }

    case 134:
      if (FUNC_5 (VAR_12) > 0 && FUNC_5 (FUNC_7 (VAR_12)) > 0)
 {
   VAR_23 = FUNC_7 (VAR_12);
   VAR_24 = FUNC_5 (VAR_23);
   VAR_21 = FUNC_5 (VAR_12) / VAR_24;


   if (FUNC_20 (VAR_12) && (VAR_17 == 0 || VAR_17 == 's'))
     {
       if (VAR_9)
  {
    FUNC_42 (2 + 2 * VAR_19, VAR_16);
  }


       if (VAR_11)
  {
    int VAR_40;


    for (VAR_40 = 0;
         VAR_40 < VAR_21 && VAR_40 < VAR_10
         && FUNC_27 (VAR_27, VAR_40, VAR_24) != 0;
         VAR_40 += 1);
    VAR_21 = VAR_40;
  }

       FUNC_44 (VAR_16, VAR_27, VAR_21, 0, VAR_24);
     }
   else
     {
       VAR_21 = 0;
       FUNC_32 (VAR_16, "(");
       FUNC_39 (VAR_16, VAR_12);
       if (FUNC_3 (VAR_12, 0) > 0)
  FUNC_49 (VAR_12, VAR_27, 0, VAR_16,
       VAR_17, VAR_19, VAR_20);
       else
  FUNC_48 (VAR_12, VAR_27, VAR_15, VAR_16,
       VAR_17, VAR_18, VAR_19,
       VAR_20, 0);
       FUNC_32 (VAR_16, ")");
     }
   FUNC_34 (VAR_16);
   return VAR_21;
 }

    case 130:
      VAR_23 = FUNC_28 (FUNC_7 (VAR_12));
      if (VAR_4)
 {
   FUNC_32 (VAR_16, "@");

   FUNC_37
     (FUNC_31 (VAR_27,
           VAR_2 / VAR_0),
      1, VAR_16);
   if (VAR_18)
     FUNC_33 (": ", VAR_16);
 }

      if (VAR_18)
 {
   if (FUNC_1 (VAR_23) != VAR_3)
     {
       LONGEST VAR_41 = (LONGEST)
  FUNC_46 (FUNC_35 (VAR_7),
    VAR_27);
       if (VAR_41 != 0)
  {
    struct value *VAR_42 =
      FUNC_23 (FUNC_54
       (FUNC_35 (VAR_23),
        VAR_41));
    FUNC_47 (FUNC_10 (VAR_42),
        FUNC_9 (VAR_42), 0,
        FUNC_8 (VAR_42), VAR_16, VAR_17,
        VAR_18, VAR_19 + 1, VAR_20);
  }
       else
  FUNC_33 ("(null)", VAR_16);
     }
   else
     FUNC_33 ("???", VAR_16);
 }
      break;
    }
  return 0;
}
