
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int tree ;
typedef enum tree_code { ____Placeholder_tree_code } tree_code ;
typedef int dump_info_p ;



 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int,int ) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ) ;

 int FUNC_5 (int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (int ) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (int ) ;
 int FUNC_10 (int ) ;


 int FUNC_11 (int ) ;
 int FUNC_12 (int ) ;
 int FUNC_13 (int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;
 int FUNC_16 (int ) ;
 int FUNC_17 (int ) ;
 int FUNC_18 (int ) ;
 int FUNC_19 (int ) ;
 scalar_t__ FUNC_20 (int ) ;
 scalar_t__ FUNC_21 (int ) ;
 int FUNC_22 (int ) ;
 int FUNC_23 (int ) ;
 int FUNC_24 (int ) ;
 scalar_t__ FUNC_25 (int ) ;
 int FUNC_26 (int ) ;
 int FUNC_27 (int ) ;
 int FUNC_28 (int ) ;
 int FUNC_29 (int ) ;
 int FUNC_30 (int ) ;
 int FUNC_31 (int ) ;
 int FUNC_32 (int ) ;
 int FUNC_33 (int ) ;
 int FUNC_34 (int ) ;
 int FUNC_35 (int ) ;
 int FUNC_36 (int ) ;


 int FUNC_37 (int ) ;
 int FUNC_38 (int ) ;
 int FUNC_39 (int ) ;

 int FUNC_40 (int ) ;

 int FUNC_41 (int ) ;
 int FUNC_42 (int ) ;
 int FUNC_43 (int ) ;
 int FUNC_44 (int ) ;
 int FUNC_45 (int ) ;



 int FUNC_46 (int ) ;
 int FUNC_47 (int ) ;

 int FUNC_48 (int ) ;
 int FUNC_49 (int ) ;
 int FUNC_50 (int ) ;

 int FUNC_51 (int ) ;




 int FUNC_52 (int ) ;
 int FUNC_53 (int ) ;

 int FUNC_54 (int ) ;
 int FUNC_55 (int ) ;


 int FUNC_56 (int ) ;

 int FUNC_57 (int ) ;
 int FUNC_58 (int ) ;
 int VAR_0 ;

 int FUNC_59 (int ) ;

 int FUNC_60 (int ) ;
 int FUNC_61 (int ) ;
 int const FUNC_62 (int ) ;
 int FUNC_63 (int ,int) ;
 int FUNC_64 (int ) ;
 int FUNC_65 (int ) ;
 int FUNC_66 (int ) ;

 int FUNC_67 (int ) ;
 int FUNC_68 (int ) ;
 int FUNC_69 (int ) ;
 int FUNC_70 (int ) ;
 int FUNC_71 (int ) ;
 int FUNC_72 (int ) ;
 int FUNC_73 (int ) ;
 int FUNC_74 (int ) ;


 int FUNC_75 (int ) ;

 int FUNC_76 (int ) ;
 int FUNC_77 (int ) ;
 int FUNC_78 (int ) ;

 int FUNC_79 (int ,int ) ;
 int FUNC_80 (int ) ;
 int FUNC_81 (int ,int ) ;
 int FUNC_82 (char*,int ) ;
 int FUNC_83 (int ,int ,int ) ;
 int FUNC_84 (int ,char*,int ) ;
 int FUNC_85 (int ,int ) ;
 int FUNC_86 (int ,int ) ;
 int FUNC_87 (int ,char*) ;
 int FUNC_88 (int ,char*,char*) ;
 scalar_t__ VAR_1 ;
 char* FUNC_89 (scalar_t__) ;
 int FUNC_90 (int ,int ) ;

bool
FUNC_91 (void* VAR_2, tree VAR_3)
{
  enum tree_code VAR_4;
  dump_info_p VAR_5 = (dump_info_p) VAR_2;


  VAR_4 = FUNC_62 (VAR_3);

  if (FUNC_25 (VAR_3))
    {
      if (FUNC_21 (VAR_3) && FUNC_20 (VAR_3) != VAR_1)
 FUNC_88 (VAR_5, "lang", FUNC_89 (FUNC_20 (VAR_3)));
    }

  switch (VAR_4)
    {
    case 144:
      if (FUNC_48 (VAR_3))
 {
   FUNC_88 (VAR_5, "note", "operator");
   return 1;
 }
      else if (FUNC_49 (VAR_3))
 {
   FUNC_82 ("tynm", FUNC_66 (VAR_3));
   return 1;
 }
      break;

    case 140:
      FUNC_88 (VAR_5, "note", "ptrmem");
      FUNC_82 ("ptd", FUNC_73 (VAR_3));
      FUNC_82 ("cls", FUNC_72 (VAR_3));
      return 1;

    case 137:
      if (FUNC_71 (VAR_3))
 {
   FUNC_88 (VAR_5, "note", "ptrmem");
   FUNC_82 ("ptd", FUNC_73 (VAR_3));
   FUNC_82 ("cls", FUNC_72 (VAR_3));
   return 1;
 }


    case 131:

      if (FUNC_70 (VAR_3) && FUNC_62 (FUNC_70 (VAR_3)) == FUNC_62 (VAR_3)
   && FUNC_5 (FUNC_70 (VAR_3)) == VAR_3)
 {
   FUNC_82 ("bfld", FUNC_70 (VAR_3));
   return 1;
 }

      if (! FUNC_51 (VAR_3))
 break;

      FUNC_82 ("vfld", FUNC_74 (VAR_3));
      if (FUNC_6(VAR_3))
 FUNC_87(VAR_5, "spec");

      if (!FUNC_83 (VAR_5, VAR_0, VAR_3) && FUNC_69 (VAR_3))
 {
   int VAR_6;
   tree VAR_7;
   tree VAR_8;

   for (VAR_7 = FUNC_69 (VAR_3), VAR_6 = 0;
        FUNC_1 (VAR_7, VAR_6, VAR_8); ++VAR_6)
     {
       FUNC_82 ("base", FUNC_2 (VAR_8));
       if (FUNC_3 (VAR_8))
  FUNC_88 (VAR_5, "spec", "virt");
       FUNC_81 (VAR_5, VAR_8);
     }
 }
      break;

    case 148:
      FUNC_81 (VAR_5, VAR_3);
      if (FUNC_22 (VAR_3))
 FUNC_88 (VAR_5, "spec", "mutable");
      break;

    case 129:
      if (FUNC_62 (FUNC_11 (VAR_3)) == 137)
 FUNC_81 (VAR_5, VAR_3);
      if (FUNC_65 (VAR_3) && !FUNC_64 (VAR_3))
 FUNC_88 (VAR_5, "link", "static");
      break;

    case 146:
      if (!FUNC_32 (VAR_3))
 {
   if (FUNC_24 (VAR_3)) {
     FUNC_88 (VAR_5, "note", "operator");
     FUNC_85 (VAR_5, VAR_3);
   }
   if (FUNC_16 (VAR_3))
     {
       FUNC_88 (VAR_5, "note", "member");
       FUNC_81 (VAR_5, VAR_3);
     }
   if (FUNC_26 (VAR_3))
     FUNC_88 (VAR_5, "spec", "pure");
   if (FUNC_33 (VAR_3))
     FUNC_88 (VAR_5, "spec", "virt");
   if (FUNC_12 (VAR_3))
     FUNC_88 (VAR_5, "note", "constructor");
   if (FUNC_14 (VAR_3))
     FUNC_88 (VAR_5, "note", "destructor");
   if (FUNC_13 (VAR_3))
     FUNC_88 (VAR_5, "note", "conversion");
   if (FUNC_17 (VAR_3))
     FUNC_88 (VAR_5, "note", "global init");
   if (FUNC_18 (VAR_3))
     FUNC_88 (VAR_5, "note", "global fini");
   if (FUNC_15 (VAR_3))
     FUNC_88 (VAR_5, "note", "pseudo tmpl");
 }
      else
 {
   tree VAR_9 = FUNC_61 (VAR_3);

   FUNC_88 (VAR_5, "note", "thunk");
   if (FUNC_31 (VAR_3))
     FUNC_88 (VAR_5, "note", "this adjusting");
   else
     {
       FUNC_88 (VAR_5, "note", "result adjusting");
       if (VAR_9)
  VAR_9 = FUNC_4 (VAR_9);
     }
   FUNC_84 (VAR_5, "fixd", FUNC_60 (VAR_3));
   if (VAR_9)
     FUNC_84 (VAR_5, "virt", FUNC_90 (VAR_9, 0));
   FUNC_82 ("fn", FUNC_19 (VAR_3));
 }
      break;

    case 141:
      if (FUNC_23 (VAR_3))
 FUNC_82 ("alis", FUNC_23 (VAR_3));
      else if (!FUNC_83 (VAR_5, VAR_0, VAR_3))
 FUNC_82 ("dcls", FUNC_80 (VAR_3));
      break;

    case 134:
      FUNC_82 ("rslt", FUNC_29 (VAR_3));
      FUNC_82 ("inst", FUNC_27 (VAR_3));
      FUNC_82 ("spcs", FUNC_30 (VAR_3));
      FUNC_82 ("prms", FUNC_28 (VAR_3));
      break;

    case 139:
      FUNC_82 ("crnt", FUNC_53 (VAR_3));
      FUNC_82 ("chan", FUNC_52 (VAR_3));
      break;

    case 132:
      FUNC_86 (VAR_5, VAR_3);
      if (FUNC_10 (VAR_3))
 FUNC_88 (VAR_5, "note", "cleanup");
      FUNC_82 ("body", FUNC_68 (VAR_3));
      FUNC_82 ("hdlr", FUNC_67 (VAR_3));
      break;

    case 150:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("body", FUNC_38 (VAR_3));
      FUNC_82 ("raises", FUNC_37 (VAR_3));
      break;

    case 138:
      FUNC_82 ("clas", FUNC_54 (VAR_3));
      FUNC_82 ("mbr", FUNC_55 (VAR_3));
      break;

    case 133:

      FUNC_82 ("op 0", FUNC_63 (VAR_3, 0));
      break;

    case 155:
      FUNC_84 (VAR_5, "ctor", FUNC_0 (VAR_3));
      FUNC_82 ("fn", FUNC_63 (VAR_3, 0));
      FUNC_82 ("args", FUNC_63 (VAR_3, 1));
      FUNC_82 ("decl", FUNC_63 (VAR_3, 2));
      break;

    case 145:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("parm", FUNC_47 (VAR_3));
      FUNC_82 ("body", FUNC_46 (VAR_3));
      break;

    case 142:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("body", FUNC_63 (VAR_3, 0));
      break;

    case 130:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("nmsp", FUNC_75 (VAR_3));
      break;

    case 153:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("decl", FUNC_8 (VAR_3));
      FUNC_82 ("expr", FUNC_9 (VAR_3));
      FUNC_82 ("body", FUNC_7 (VAR_3));
      break;

    case 143:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("cond", FUNC_50 (VAR_3));
      FUNC_82 ("then", FUNC_59 (VAR_3));
      FUNC_82 ("else", FUNC_39 (VAR_3));
      break;

    case 154:
    case 152:
      FUNC_86 (VAR_5, VAR_3);
      break;

    case 151:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("body", FUNC_35 (VAR_3));
      FUNC_82 ("cond", FUNC_36 (VAR_3));

      FUNC_82 ("attrs", FUNC_34 (VAR_3));

      break;

    case 147:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("init", FUNC_45 (VAR_3));
      FUNC_82 ("cond", FUNC_43 (VAR_3));
      FUNC_82 ("expr", FUNC_44 (VAR_3));
      FUNC_82 ("body", FUNC_42 (VAR_3));

      FUNC_82 ("attrs", FUNC_41 (VAR_3));

      break;

    case 135:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("cond", FUNC_58 (VAR_3));
      FUNC_82 ("body", FUNC_57 (VAR_3));
      break;

    case 128:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("cond", FUNC_78 (VAR_3));
      FUNC_82 ("body", FUNC_77 (VAR_3));

      FUNC_82 ("attrs", FUNC_76 (VAR_3));

      break;

    case 136:
      FUNC_82 ("stmt", FUNC_56 (VAR_3));
      break;

    case 149:
      FUNC_86 (VAR_5, VAR_3);
      FUNC_82 ("expr", FUNC_40 (VAR_3));
      break;

    default:
      break;
    }

  return FUNC_79 (VAR_5, VAR_3);
}
