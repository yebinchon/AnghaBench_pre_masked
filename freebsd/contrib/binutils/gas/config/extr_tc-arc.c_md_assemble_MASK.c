
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct arc_operand_value {size_t type; long value; int name; } ;
struct arc_operand {int flags; size_t fmt; long (* insert ) (long,struct arc_operand const*,int,struct arc_operand_value const*,long,char const**) ;long shift; int bits; } ;
typedef struct arc_opcode {long value; char* syntax; int flags; } const arc_opcode ;
struct TYPE_9__ {scalar_t__ X_op; long X_add_number; } ;
struct arc_fixup {size_t opindex; TYPE_1__ exp; } ;
typedef TYPE_1__ expressionS ;
typedef int bfd_reloc_code_real_type ;
typedef long arc_insn ;
struct TYPE_10__ {char* fr_literal; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (int) ;
 int VAR_3 ;
 struct arc_opcode const* FUNC_1 (struct arc_opcode const*) ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int VAR_13 ;
 scalar_t__ VAR_14 ;
 scalar_t__ FUNC_2 (char) ;
 scalar_t__ FUNC_3 (char) ;
 scalar_t__ FUNC_4 (char) ;
 scalar_t__ FUNC_5 (char) ;
 scalar_t__ FUNC_6 (char) ;
 int VAR_15 ;
 int VAR_16 ;
 scalar_t__ VAR_17 ;
 scalar_t__ VAR_18 ;
 scalar_t__ VAR_19 ;
 scalar_t__ VAR_20 ;
 int FUNC_7 () ;
 int FUNC_8 (TYPE_1__*) ;
 struct arc_opcode const* VAR_21 ;
 scalar_t__ FUNC_9 (long) ;
 scalar_t__ FUNC_10 (long) ;
 scalar_t__ VAR_22 ;
 int FUNC_11 () ;
 long FUNC_12 (long*) ;
 struct arc_opcode const* FUNC_13 (char*) ;
 int FUNC_14 (struct arc_opcode const*) ;
 size_t* VAR_23 ;
 struct arc_operand* VAR_24 ;
 int VAR_25 ;
 struct arc_operand_value* VAR_26 ;
 int VAR_27 ;
 int FUNC_15 (char const*,...) ;
 int FUNC_16 (char*,...) ;
 int FUNC_17 (char const*) ;
 scalar_t__ VAR_28 ;
 int FUNC_18 (int) ;
 int FUNC_19 (TYPE_1__*) ;
 int FUNC_20 (TYPE_4__*,int,int,TYPE_1__*,int,int ) ;
 char* FUNC_21 (int) ;
 TYPE_4__* VAR_29 ;
 int FUNC_22 (int,int,TYPE_1__*,TYPE_1__*) ;
 struct arc_operand_value* FUNC_23 (char*) ;
 struct arc_operand_value* FUNC_24 (int ,char*) ;
 int FUNC_25 (scalar_t__) ;
 char* VAR_30 ;
 scalar_t__* VAR_31 ;
 int FUNC_26 (char*,long,int) ;
 scalar_t__ FUNC_27 (int ,int ) ;
 int FUNC_28 (char*,char*,int) ;
 long FUNC_29 (long,struct arc_operand const*,int,struct arc_operand_value const*,long,char const**) ;
 long FUNC_30 (long,struct arc_operand const*,int,struct arc_operand_value const*,long,char const**) ;
 long FUNC_31 (long,struct arc_operand const*,int,struct arc_operand_value const*,long,char const**) ;
 long FUNC_32 (long,struct arc_operand const*,int,struct arc_operand_value const*,long,char const**) ;
 long FUNC_33 (long,struct arc_operand const*,int,struct arc_operand_value const*,long,char const**) ;

void
FUNC_34 (char *VAR_32)
{
  const struct arc_opcode *VAR_33;
  const struct arc_opcode *VAR_34;
  struct arc_opcode *VAR_35;
  char *VAR_36;
  const char *VAR_37 = 0;
  arc_insn VAR_38;
  static int VAR_39 = 0;



  if (!VAR_39)
    {
      FUNC_25 (VAR_22);
      VAR_39 = 1;
    }


  while (FUNC_3 (*VAR_32))
    VAR_32++;




  VAR_35 = VAR_21;
  VAR_34 = FUNC_13 (VAR_32);


  VAR_36 = VAR_32;
  for (VAR_33 = (VAR_35 ? VAR_35 : VAR_34);
       VAR_33 != ((void*)0);
       VAR_33 = (FUNC_1 (VAR_33)
   ? FUNC_1 (VAR_33)
   : (VAR_35 ? VAR_35 = ((void*)0), VAR_34 : ((void*)0))))
    {
      int VAR_40, VAR_41, VAR_42;
      int VAR_43 = 0;
      char *VAR_44;
      struct arc_fixup VAR_45[VAR_15];


      int VAR_46;
      int VAR_47;
      const struct arc_operand_value *VAR_48[VAR_16];


      if (! FUNC_14 (VAR_33))
 continue;


      FUNC_11 ();
      VAR_38 = VAR_33->value;
      VAR_41 = 0;
      VAR_40 = 0;
      VAR_42 = 0;
      VAR_46 = 0;
      VAR_47 = 0;



      for (VAR_32 = VAR_36, VAR_44 = VAR_33->syntax; *VAR_44 != '\0';)
 {
   int VAR_49;
   const struct arc_operand *VAR_50;


   if (*VAR_44 != '%' || *++VAR_44 == '%')
     {
      if (*VAR_32 == *VAR_44)
  {
    if (*VAR_44 == ' ')
      VAR_40 = 1;
    ++VAR_44;
    ++VAR_32;
  }
       else
  break;
       continue;
     }


   VAR_49 = 0;
   while (FUNC_0 (VAR_24[VAR_23[(int) *VAR_44]].flags))
     {
       VAR_49 |= VAR_24[VAR_23[(int) *VAR_44]].flags & VAR_1;
       ++VAR_44;
     }
   VAR_50 = VAR_24 + VAR_23[(int) *VAR_44];
   if (VAR_50->fmt == 0)
     FUNC_16 ("unknown syntax format character `%c'", *VAR_44);

   if (VAR_50->flags & VAR_7)
     {
       const char *VAR_51 = ((void*)0);
       if (VAR_50->insert)
  {
    VAR_38 = (*VAR_50->insert) (VAR_38, VAR_50, VAR_49, ((void*)0), 0, &VAR_51);
    if (VAR_51 != (const char *) ((void*)0))
      {
        VAR_37 = VAR_51;
        if (VAR_50->flags & VAR_6)
   {
     FUNC_15 (VAR_51);
     return;
   }
        else if (VAR_50->flags & VAR_11)
   FUNC_17 (VAR_51);
        break;
      }
    if (VAR_46
        && (VAR_50->flags && VAR_50->flags & VAR_8)
        && (VAR_50->flags &
     (VAR_4 | VAR_5)))
      {
        VAR_45[VAR_43].opindex = VAR_23[VAR_50->fmt];
      }
  }
       ++VAR_44;
     }

   else if (!VAR_40)
     {
       int VAR_52;
       char VAR_53;
       char *VAR_54, *VAR_55;
       const struct arc_operand_value *VAR_56, *VAR_57;
       const struct arc_operand_value *VAR_58 = ((void*)0);

       if (!(VAR_50->flags & VAR_10))
  FUNC_7 ();




       if (*VAR_32 == ' ')
  {
    ++VAR_44;
    continue;
  }

       VAR_54 = VAR_32;
       if (VAR_49 & VAR_2)
  {
    if (*VAR_54 != '.')
      break;
    ++VAR_54;
  }
       else
  {


    if (*VAR_54 == '.')
      {
        ++VAR_44;
        continue;
      }
  }


       for (VAR_55 = VAR_54; *VAR_55 && FUNC_2 (*VAR_55); ++VAR_55)
  continue;
       VAR_53 = *VAR_55;
       *VAR_55 = '\0';
       if ((VAR_56 = FUNC_23 (VAR_54)))
  VAR_47 = 1;
       else
  VAR_56 = FUNC_24 (VAR_25, VAR_54);
       if (!VAR_56)
  {



    *VAR_55 = VAR_53;
    break;
  }






       VAR_52 = 0;
       if (VAR_47 && VAR_24[VAR_56->type].fmt == *VAR_44)
  {

    *VAR_55 = VAR_53;
    if (VAR_50->insert)
      VAR_38 = (*VAR_50->insert) (VAR_38, VAR_50,
            VAR_49, ((void*)0), VAR_56->value,
            ((void*)0));
    else
      VAR_38 |= VAR_56->value << VAR_50->shift;
    VAR_58 = VAR_56;
    VAR_32 = VAR_55;
    VAR_52 = 1;
  }
       else
  {
    *VAR_55 = VAR_53;
    VAR_57 = VAR_26 + VAR_27;
    for (VAR_58 = VAR_56;
         VAR_58 < VAR_57 && FUNC_27 (VAR_58->name, VAR_56->name) == 0;
         ++VAR_58)
      {
        if (VAR_24[VAR_58->type].fmt == *VAR_44)
   {

     if (VAR_50->insert)
       VAR_38 = (*VAR_50->insert) (VAR_38, VAR_50,
             VAR_49, ((void*)0), VAR_58->value,
             ((void*)0));
     else
       VAR_38 |= VAR_58->value << VAR_50->shift;

     VAR_32 = VAR_55;
     VAR_52 = 1;
     break;
   }
      }
  }
       ++VAR_44;
       if (!VAR_52)

  ;
       else
  {
    if (VAR_42 == VAR_16)
      FUNC_15 ("too many suffixes");
    else
      VAR_48[VAR_42++] = VAR_58;
  }
     }
   else

     {
       char *VAR_59;
       const struct arc_operand_value *VAR_60 = ((void*)0);
       long VAR_61 = 0;
       expressionS VAR_62;

       if (VAR_50->flags & VAR_10)
  FUNC_7 ();




       if (VAR_31[(unsigned char) *VAR_32])
  break;


       VAR_59 = VAR_30;
       VAR_30 = VAR_32;
       FUNC_19 (&VAR_62);
       VAR_32 = VAR_30;
       VAR_30 = VAR_59;

       if (VAR_62.X_op == VAR_19)
  FUNC_15 ("illegal operand");
       else if (VAR_62.X_op == VAR_17)
  FUNC_15 ("missing operand");
       else if (VAR_62.X_op == VAR_18)
  VAR_61 = VAR_62.X_add_number;
       else if (VAR_62.X_op == VAR_20)
  VAR_60 = (struct arc_operand_value *) VAR_62.X_add_number;

       else if ((*VAR_44) == 'a')
  FUNC_15 ("symbol as destination register");
       else
  {
    if (!FUNC_28 (VAR_32, "@h30", 4))
      {
        FUNC_8 (&VAR_62);
        VAR_32 += 4;
      }

    if (VAR_41 >= VAR_15)
      FUNC_16 ("too many fixups");
    VAR_45[VAR_41].exp = VAR_62;



    if ((*VAR_44) == 'd')
      break;






    if (FUNC_6 (*VAR_44))
      {
        const char *VAR_63;
        VAR_46 = 1;

        VAR_43 = VAR_41;




        (*VAR_24[VAR_23['Q']].insert)
   (VAR_38, VAR_50, VAR_49, VAR_60, 0L, &VAR_63);
      }
    else
      VAR_45[VAR_41].opindex = VAR_23[(int) *VAR_44];
    ++VAR_41;
    VAR_61 = 0;
  }


       if (VAR_50->insert)
  {
    const char *VAR_64 = ((void*)0);
    VAR_38 = (*VAR_50->insert) (VAR_38, VAR_50, VAR_49,
          VAR_60, (long) VAR_61, &VAR_64);
    if (VAR_64 != (const char *) ((void*)0))
      {
        VAR_37 = VAR_64;
        if (VAR_50->flags & VAR_6)
   {
     FUNC_15 (VAR_64);
     return;
   }
        else if (VAR_50->flags & VAR_11)
   FUNC_17 (VAR_64);
        break;
      }
  }
       else
  VAR_38 |= (VAR_61 & ((1 << VAR_50->bits) - 1)) << VAR_50->shift;

       ++VAR_44;
     }
 }



      if (*VAR_44 == '\0')
 {
   int VAR_65;
   char *VAR_66;
   long VAR_67, VAR_68;






   while (FUNC_3 (*VAR_32))
     ++VAR_32;

   if (!VAR_31[(unsigned char) *VAR_32])
     FUNC_15 ("junk at end of line: `%s'", VAR_32);


   VAR_68 = FUNC_12 (&VAR_67);



   {
     static int VAR_69 = 0;
     static int VAR_70 = 0;

     int VAR_71 = VAR_0;

     int VAR_72 = 0;

     int VAR_73 = 0;

     int VAR_74 = VAR_33->flags & VAR_3;

     for (VAR_65 = 0; VAR_65 < VAR_42; ++VAR_65)
       {
  switch (VAR_24[VAR_48[VAR_65]->type].fmt)
    {
    case 'n':
      VAR_71 = VAR_48[VAR_65]->value;
      break;
    case 'q':
      VAR_72 = VAR_48[VAR_65]->value;
      break;
    case 'f':
      VAR_73 = 1;
      break;
    }
       }




     if (VAR_69 && VAR_68)
       FUNC_17 ("8 byte instruction in delay slot");
     if (VAR_71 != VAR_0
  && VAR_68 && FUNC_9 (VAR_38))
       FUNC_17 ("8 byte jump instruction with delay slot");
     VAR_69 = (VAR_71 != VAR_0) && !VAR_68;




     if (VAR_74 && VAR_72 != 0
  && VAR_70 && VAR_22 == VAR_28)
       FUNC_17 ("conditional branch follows set of flags");
     VAR_70 =


       VAR_73 && !VAR_68;
   }





   if (VAR_68)
     {
       VAR_66 = FUNC_21 (8);
       FUNC_26 (VAR_66, VAR_38, 4);
       FUNC_26 (VAR_66 + 4, VAR_67, 4);
       FUNC_18 (8);
     }
   else if (VAR_46)

     FUNC_7 ();
   else
     {
       VAR_66 = FUNC_21 (4);
       FUNC_26 (VAR_66, VAR_38, 4);
       FUNC_18 (4);
     }


   for (VAR_65 = 0; VAR_65 < VAR_41; ++VAR_65)
     {
       int VAR_75, VAR_76;
       expressionS VAR_77;
       const struct arc_operand *VAR_78;
       if (VAR_24[VAR_45[VAR_65].opindex].flags & VAR_8)
  {

    VAR_45[VAR_65].exp.X_add_number += FUNC_10 (VAR_38);
    VAR_75 = VAR_45[VAR_65].opindex;

    if (VAR_75 == VAR_23['L']
        || VAR_75 == VAR_23['s']
        || VAR_75 == VAR_23['o']
        || VAR_75 == VAR_23['O'])
      VAR_76 = VAR_12;
    else if (VAR_75 == VAR_23['J'])
      VAR_76 = VAR_13;
    else
      FUNC_7 ();
    VAR_76 = FUNC_22 (1, VAR_76,
             &VAR_45[VAR_65].exp,
             &VAR_77);
  }
       else
  {
    VAR_75 = FUNC_22 (0, VAR_45[VAR_65].opindex,
          &VAR_45[VAR_65].exp, &VAR_77);
    VAR_76 = VAR_75 + (int) VAR_14;
  }
       VAR_78 = &VAR_24[VAR_75];
       FUNC_20 (VAR_29,
      ((VAR_66 - VAR_29->fr_literal)
       + (VAR_78->flags & VAR_8 ? 4 : 0)), 4,
      &VAR_77,
      (VAR_78->flags & VAR_9) != 0,
      (bfd_reloc_code_real_type) VAR_76);
     }
   return;
 }
    }

  if (((void*)0) == VAR_37)
    FUNC_15 ("bad instruction `%s'", VAR_36);
  else
    FUNC_15 (VAR_37);
}
