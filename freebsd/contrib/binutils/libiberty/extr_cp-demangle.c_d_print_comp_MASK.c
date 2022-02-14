
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_22__ TYPE_9__ ;
typedef struct TYPE_21__ TYPE_8__ ;
typedef struct TYPE_20__ TYPE_7__ ;
typedef struct TYPE_19__ TYPE_6__ ;
typedef struct TYPE_18__ TYPE_5__ ;
typedef struct TYPE_17__ TYPE_4__ ;
typedef struct TYPE_16__ TYPE_3__ ;
typedef struct TYPE_15__ TYPE_2__ ;
typedef struct TYPE_14__ TYPE_1__ ;
typedef struct TYPE_13__ TYPE_11__ ;
typedef struct TYPE_12__ TYPE_10__ ;


struct TYPE_12__ {char* s; int len; } ;
struct TYPE_22__ {TYPE_8__* type; } ;
struct TYPE_20__ {TYPE_6__* op; } ;
struct TYPE_18__ {struct demangle_component const* name; } ;
struct TYPE_17__ {char* string; int len; } ;
struct TYPE_16__ {struct demangle_component const* name; } ;
struct TYPE_15__ {struct demangle_component const* name; } ;
struct TYPE_14__ {long number; } ;
struct TYPE_13__ {TYPE_10__ s_name; TYPE_9__ s_builtin; TYPE_7__ s_operator; TYPE_5__ s_extended_operator; TYPE_4__ s_string; TYPE_3__ s_dtor; TYPE_2__ s_ctor; TYPE_1__ s_number; } ;
typedef struct demangle_component {int type; TYPE_11__ u; } const demangle_component ;
struct d_print_template {struct d_print_template* next; struct demangle_component const* template_decl; } ;
struct d_print_mod {int printed; struct d_print_mod* next; struct d_print_template* templates; struct demangle_component const* mod; } ;
struct d_print_info {int options; struct d_print_mod* modifiers; struct d_print_template* templates; } ;
typedef enum d_builtin_type_print { ____Placeholder_d_builtin_type_print } d_builtin_type_print ;
struct TYPE_21__ {char* name; int len; char* java_name; int java_len; int print; } ;
struct TYPE_19__ {char* name; int len; } ;
 int VAR_0 ;
 int VAR_1 ;

 int VAR_2 ;
 int VAR_3 ;






 int FUNC_0 (char) ;
 int FUNC_1 (struct d_print_info*,char*,int) ;
 int FUNC_2 (struct d_print_info*,char) ;
 int FUNC_3 (struct d_print_info*,char*) ;
 char FUNC_4 (struct d_print_info*) ;
 struct demangle_component const* FUNC_5 (struct demangle_component const*) ;
 int FUNC_6 (struct d_print_info*,struct demangle_component const*,struct d_print_mod*) ;
 int FUNC_7 (struct d_print_info*,struct demangle_component const*) ;
 int FUNC_8 (struct d_print_info*) ;
 int FUNC_9 (struct d_print_info*,struct demangle_component const*) ;
 int FUNC_10 (struct d_print_info*,struct demangle_component const*,struct d_print_mod*) ;
 int FUNC_11 (struct d_print_info*,char*,int) ;
 int FUNC_12 (struct d_print_info*,struct demangle_component const*) ;
 scalar_t__ FUNC_13 (struct d_print_info*) ;
 struct demangle_component const* FUNC_14 (struct demangle_component const*) ;
 int FUNC_15 (char*,char*,int) ;

__attribute__((used)) static void
FUNC_16 (struct d_print_info *VAR_4,
              const struct demangle_component *VAR_5)
{
  if (VAR_5 == ((void*)0))
    {
      FUNC_8 (VAR_4);
      return;
    }
  if (FUNC_13 (VAR_4))
    return;

  switch (VAR_5->type)
    {
    case 163:
      if ((VAR_4->options & VAR_0) == 0)
 FUNC_1 (VAR_4, VAR_5->u.s_name.s, VAR_5->u.s_name.len);
      else
 FUNC_11 (VAR_4, VAR_5->u.s_name.s, VAR_5->u.s_name.len);
      return;

    case 159:
    case 164:
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      if ((VAR_4->options & VAR_0) == 0)
 FUNC_3 (VAR_4, "::");
      else
 FUNC_2 (VAR_4, '.');
      FUNC_16 (VAR_4, FUNC_14 (VAR_5));
      return;

    case 146:
      {
 struct d_print_mod *VAR_6;
 struct demangle_component *VAR_7;
 struct d_print_mod VAR_8[4];
 unsigned int VAR_9;
 struct d_print_template VAR_10;




 VAR_6 = VAR_4->modifiers;
 VAR_9 = 0;
 VAR_7 = FUNC_5 (VAR_5);
 while (VAR_7 != ((void*)0))
   {
     if (VAR_9 >= sizeof VAR_8 / sizeof VAR_8[0])
       {
  FUNC_8 (VAR_4);
  return;
       }

     VAR_8[VAR_9].next = VAR_4->modifiers;
     VAR_4->modifiers = &VAR_8[VAR_9];
     VAR_8[VAR_9].mod = VAR_7;
     VAR_8[VAR_9].printed = 0;
     VAR_8[VAR_9].templates = VAR_4->templates;
     ++VAR_9;

     if (VAR_7->type != 155
  && VAR_7->type != 137
  && VAR_7->type != 176)
       break;

     VAR_7 = FUNC_5 (VAR_7);
   }



 if (VAR_7->type == 153)
   {
     VAR_10.next = VAR_4->templates;
     VAR_4->templates = &VAR_10;
     VAR_10.template_decl = VAR_7;
   }





 if (VAR_7->type == 164)
   {
     struct demangle_component *VAR_11;

     VAR_11 = FUNC_14 (VAR_7);
     while (VAR_11->type == 155
     || VAR_11->type == 137
     || VAR_11->type == 176)
       {
  if (VAR_9 >= sizeof VAR_8 / sizeof VAR_8[0])
    {
      FUNC_8 (VAR_4);
      return;
    }

  VAR_8[VAR_9] = VAR_8[VAR_9 - 1];
  VAR_8[VAR_9].next = &VAR_8[VAR_9 - 1];
  VAR_4->modifiers = &VAR_8[VAR_9];

  VAR_8[VAR_9 - 1].mod = VAR_11;
  VAR_8[VAR_9 - 1].printed = 0;
  VAR_8[VAR_9 - 1].templates = VAR_4->templates;
  ++VAR_9;

  VAR_11 = FUNC_5 (VAR_11);
       }
   }

 FUNC_16 (VAR_4, FUNC_14 (VAR_5));

 if (VAR_7->type == 153)
   VAR_4->templates = VAR_10.next;



 while (VAR_9 > 0)
   {
     --VAR_9;
     if (! VAR_8[VAR_9].printed)
       {
  FUNC_2 (VAR_4, ' ');
  FUNC_12 (VAR_4, VAR_8[VAR_9].mod);
       }
   }

 VAR_4->modifiers = VAR_6;

 return;
      }

    case 153:
      {
 struct d_print_mod *VAR_12;
 struct demangle_component *VAR_13;





 VAR_12 = VAR_4->modifiers;
 VAR_4->modifiers = ((void*)0);

        VAR_13 = FUNC_5 (VAR_5);

        if ((VAR_4->options & VAR_0) != 0
            && VAR_13->type == 163
            && VAR_13->u.s_name.len == 6
            && FUNC_15 (VAR_13->u.s_name.s, "JArray", 6) == 0)
          {



            FUNC_16 (VAR_4, FUNC_14 (VAR_5));
            FUNC_3 (VAR_4, "[]");
          }
        else
          {
     FUNC_16 (VAR_4, VAR_13);
     if (FUNC_4 (VAR_4) == '<')
       FUNC_2 (VAR_4, ' ');
     FUNC_2 (VAR_4, '<');
     FUNC_16 (VAR_4, FUNC_14 (VAR_5));


     if (FUNC_4 (VAR_4) == '>')
       FUNC_2 (VAR_4, ' ');
     FUNC_2 (VAR_4, '>');
          }

 VAR_4->modifiers = VAR_12;

 return;
      }

    case 151:
      {
 long VAR_14;
 struct demangle_component *VAR_15;
 struct d_print_template *VAR_16;

 if (VAR_4->templates == ((void*)0))
   {
     FUNC_8 (VAR_4);
     return;
   }
 VAR_14 = VAR_5->u.s_number.number;
 for (VAR_15 = FUNC_14 (VAR_4->templates->template_decl);
      VAR_15 != ((void*)0);
      VAR_15 = FUNC_14 (VAR_15))
   {
     if (VAR_15->type != 152)
       {
  FUNC_8 (VAR_4);
  return;
       }
     if (VAR_14 <= 0)
       break;
     --VAR_14;
   }
 if (VAR_14 != 0 || VAR_15 == ((void*)0))
   {
     FUNC_8 (VAR_4);
     return;
   }






 VAR_16 = VAR_4->templates;
 VAR_4->templates = VAR_16->next;

 FUNC_16 (VAR_4, FUNC_5 (VAR_15));

 VAR_4->templates = VAR_16;

 return;
      }

    case 174:
      FUNC_16 (VAR_4, VAR_5->u.s_ctor.name);
      return;

    case 173:
      FUNC_2 (VAR_4, '~');
      FUNC_16 (VAR_4, VAR_5->u.s_dtor.name);
      return;

    case 136:
      FUNC_3 (VAR_4, "vtable for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 135:
      FUNC_3 (VAR_4, "VTT for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 177:
      FUNC_3 (VAR_4, "construction vtable for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      FUNC_3 (VAR_4, "-in-");
      FUNC_16 (VAR_4, FUNC_14 (VAR_5));
      return;

    case 145:
      FUNC_3 (VAR_4, "typeinfo for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 143:
      FUNC_3 (VAR_4, "typeinfo name for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 144:
      FUNC_3 (VAR_4, "typeinfo fn for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 150:
      FUNC_3 (VAR_4, "non-virtual thunk to ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 139:
      FUNC_3 (VAR_4, "virtual thunk to ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 175:
      FUNC_3 (VAR_4, "covariant return thunk to ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 167:
      FUNC_3 (VAR_4, "java Class for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 170:
      FUNC_3 (VAR_4, "guard variable for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 157:
      FUNC_3 (VAR_4, "reference temporary for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 169:
      FUNC_3 (VAR_4, "hidden alias for ");
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 154:
      FUNC_1 (VAR_4, VAR_5->u.s_string.string, VAR_5->u.s_string.len);
      return;

    case 156:
    case 138:
    case 178:
      {
 struct d_print_mod *VAR_17;





 for (VAR_17 = VAR_4->modifiers; VAR_17 != ((void*)0); VAR_17 = VAR_17->next)
   {
     if (! VAR_17->printed)
       {
  if (VAR_17->mod->type != 156
      && VAR_17->mod->type != 138
      && VAR_17->mod->type != 178)
    break;
  if (VAR_17->mod->type == VAR_5->type)
    {
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;
    }
       }
   }
      }

    case 155:
    case 137:
    case 176:
    case 140:
    case 161:
    case 158:
    case 179:
    case 168:
      {

 struct d_print_mod VAR_18;

 VAR_18.next = VAR_4->modifiers;
 VAR_4->modifiers = &VAR_18;
 VAR_18.mod = VAR_5;
 VAR_18.printed = 0;
 VAR_18.templates = VAR_4->templates;

 FUNC_16 (VAR_4, FUNC_5 (VAR_5));



 if (! VAR_18.printed)
   FUNC_12 (VAR_4, VAR_5);

 VAR_4->modifiers = VAR_18.next;

 return;
      }

    case 181:
      if ((VAR_4->options & VAR_0) == 0)
 FUNC_1 (VAR_4, VAR_5->u.s_builtin.type->name,
    VAR_5->u.s_builtin.type->len);
      else
 FUNC_1 (VAR_4, VAR_5->u.s_builtin.type->java_name,
    VAR_5->u.s_builtin.type->java_len);
      return;

    case 141:
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      return;

    case 171:
      {
 if ((VAR_4->options & VAR_1) != 0)
   FUNC_10 (VAR_4, VAR_5, VAR_4->modifiers);


 if (FUNC_5 (VAR_5) != ((void*)0))
   {
     struct d_print_mod VAR_19;



     VAR_19.next = VAR_4->modifiers;
     VAR_4->modifiers = &VAR_19;
     VAR_19.mod = VAR_5;
     VAR_19.printed = 0;
     VAR_19.templates = VAR_4->templates;

     FUNC_16 (VAR_4, FUNC_5 (VAR_5));

     VAR_4->modifiers = VAR_19.next;

     if (VAR_19.printed)
       return;



     if ((VAR_4->options & VAR_1) == 0)
       FUNC_2 (VAR_4, ' ');
   }

 if ((VAR_4->options & VAR_1) == 0)
   FUNC_10 (VAR_4, VAR_5, VAR_4->modifiers);

 return;
      }

    case 184:
      {
 struct d_print_mod *VAR_20;
 struct d_print_mod VAR_21[4];
 unsigned int VAR_22;
 struct d_print_mod *VAR_23;
 VAR_20 = VAR_4->modifiers;

 VAR_21[0].next = VAR_20;
 VAR_4->modifiers = &VAR_21[0];
 VAR_21[0].mod = VAR_5;
 VAR_21[0].printed = 0;
 VAR_21[0].templates = VAR_4->templates;

 VAR_22 = 1;
 VAR_23 = VAR_20;
 while (VAR_23 != ((void*)0)
        && (VAR_23->mod->type == 156
     || VAR_23->mod->type == 138
     || VAR_23->mod->type == 178))
   {
     if (! VAR_23->printed)
       {
  if (VAR_22 >= sizeof VAR_21 / sizeof VAR_21[0])
    {
      FUNC_8 (VAR_4);
      return;
    }

  VAR_21[VAR_22] = *VAR_23;
  VAR_21[VAR_22].next = VAR_4->modifiers;
  VAR_4->modifiers = &VAR_21[VAR_22];
  VAR_23->printed = 1;
  ++VAR_22;
       }

     VAR_23 = VAR_23->next;
   }

 FUNC_16 (VAR_4, FUNC_14 (VAR_5));

 VAR_4->modifiers = VAR_20;

 if (VAR_21[0].printed)
   return;

 while (VAR_22 > 1)
   {
     --VAR_22;
     FUNC_12 (VAR_4, VAR_21[VAR_22].mod);
   }

 FUNC_6 (VAR_4, VAR_5, VAR_4->modifiers);

 return;
      }

    case 160:
      {
 struct d_print_mod VAR_24;

 VAR_24.next = VAR_4->modifiers;
 VAR_4->modifiers = &VAR_24;
 VAR_24.mod = VAR_5;
 VAR_24.printed = 0;
 VAR_24.templates = VAR_4->templates;

 FUNC_16 (VAR_4, FUNC_14 (VAR_5));



 if (! VAR_24.printed)
   {
     FUNC_2 (VAR_4, ' ');
     FUNC_16 (VAR_4, FUNC_5 (VAR_5));
     FUNC_3 (VAR_4, "::*");
   }

 VAR_4->modifiers = VAR_24.next;

 return;
      }

    case 185:
    case 152:
      FUNC_16 (VAR_4, FUNC_5 (VAR_5));
      if (FUNC_14 (VAR_5) != ((void*)0))
 {
   FUNC_3 (VAR_4, ", ");
   FUNC_16 (VAR_4, FUNC_14 (VAR_5));
 }
      return;

    case 162:
      {
 char VAR_25;

 FUNC_3 (VAR_4, "operator");
 VAR_25 = VAR_5->u.s_operator.op->name[0];
 if (FUNC_0 (VAR_25))
   FUNC_2 (VAR_4, ' ');
 FUNC_1 (VAR_4, VAR_5->u.s_operator.op->name,
    VAR_5->u.s_operator.op->len);
 return;
      }

    case 172:
      FUNC_3 (VAR_4, "operator ");
      FUNC_16 (VAR_4, VAR_5->u.s_extended_operator.name);
      return;

    case 180:
      FUNC_3 (VAR_4, "operator ");
      FUNC_7 (VAR_4, VAR_5);
      return;

    case 142:
      if (FUNC_5 (VAR_5)->type != 180)
 FUNC_9 (VAR_4, FUNC_5 (VAR_5));
      else
 {
   FUNC_2 (VAR_4, '(');
   FUNC_7 (VAR_4, FUNC_5 (VAR_5));
   FUNC_2 (VAR_4, ')');
 }
      FUNC_2 (VAR_4, '(');
      FUNC_16 (VAR_4, FUNC_14 (VAR_5));
      FUNC_2 (VAR_4, ')');
      return;

    case 183:
      if (FUNC_14 (VAR_5)->type != 182)
 {
   FUNC_8 (VAR_4);
   return;
 }




      if (FUNC_5 (VAR_5)->type == 162
   && FUNC_5 (VAR_5)->u.s_operator.op->len == 1
   && FUNC_5 (VAR_5)->u.s_operator.op->name[0] == '>')
 FUNC_2 (VAR_4, '(');

      FUNC_2 (VAR_4, '(');
      FUNC_16 (VAR_4, FUNC_5 (FUNC_14 (VAR_5)));
      FUNC_3 (VAR_4, ") ");
      FUNC_9 (VAR_4, FUNC_5 (VAR_5));
      FUNC_3 (VAR_4, " (");
      FUNC_16 (VAR_4, FUNC_14 (FUNC_14 (VAR_5)));
      FUNC_2 (VAR_4, ')');

      if (FUNC_5 (VAR_5)->type == 162
   && FUNC_5 (VAR_5)->u.s_operator.op->len == 1
   && FUNC_5 (VAR_5)->u.s_operator.op->name[0] == '>')
 FUNC_2 (VAR_4, ')');

      return;

    case 182:

      FUNC_8 (VAR_4);
      return;

    case 149:
      if (FUNC_14 (VAR_5)->type != 148
   || FUNC_14 (FUNC_14 (VAR_5))->type != 147)
 {
   FUNC_8 (VAR_4);
   return;
 }
      FUNC_2 (VAR_4, '(');
      FUNC_16 (VAR_4, FUNC_5 (FUNC_14 (VAR_5)));
      FUNC_3 (VAR_4, ") ");
      FUNC_9 (VAR_4, FUNC_5 (VAR_5));
      FUNC_3 (VAR_4, " (");
      FUNC_16 (VAR_4, FUNC_5 (FUNC_14 (FUNC_14 (VAR_5))));
      FUNC_3 (VAR_4, ") : (");
      FUNC_16 (VAR_4, FUNC_14 (FUNC_14 (FUNC_14 (VAR_5))));
      FUNC_2 (VAR_4, ')');
      return;

    case 148:
    case 147:

      FUNC_8 (VAR_4);
      return;

    case 166:
    case 165:
      {
 enum d_builtin_type_print VAR_26;


 VAR_26 = VAR_2;
 if (FUNC_5 (VAR_5)->type == 181)
   {
     VAR_26 = FUNC_5 (VAR_5)->u.s_builtin.type->print;
     switch (VAR_26)
       {
       case 133:
       case 130:
       case 132:
       case 129:
       case 131:
       case 128:
  if (FUNC_14 (VAR_5)->type == 163)
    {
      if (VAR_5->type == 165)
        FUNC_2 (VAR_4, '-');
      FUNC_16 (VAR_4, FUNC_14 (VAR_5));
      switch (VAR_26)
        {
        default:
   break;
        case 130:
   FUNC_2 (VAR_4, 'u');
   break;
        case 132:
   FUNC_2 (VAR_4, 'l');
   break;
        case 129:
   FUNC_3 (VAR_4, "ul");
   break;
        case 131:
   FUNC_3 (VAR_4, "ll");
   break;
        case 128:
   FUNC_3 (VAR_4, "ull");
   break;
        }
      return;
    }
  break;

       case 134:
  if (FUNC_14 (VAR_5)->type == 163
      && FUNC_14 (VAR_5)->u.s_name.len == 1
      && VAR_5->type == 166)
    {
      switch (FUNC_14 (VAR_5)->u.s_name.s[0])
        {
        case '0':
   FUNC_3 (VAR_4, "false");
   return;
        case '1':
   FUNC_3 (VAR_4, "true");
   return;
        default:
   break;
        }
    }
  break;

       default:
  break;
       }
   }

 FUNC_2 (VAR_4, '(');
 FUNC_16 (VAR_4, FUNC_5 (VAR_5));
 FUNC_2 (VAR_4, ')');
 if (VAR_5->type == 165)
   FUNC_2 (VAR_4, '-');
 if (VAR_26 == VAR_3)
   FUNC_2 (VAR_4, '[');
 FUNC_16 (VAR_4, FUNC_14 (VAR_5));
 if (VAR_26 == VAR_3)
   FUNC_2 (VAR_4, ']');
      }
      return;

    default:
      FUNC_8 (VAR_4);
      return;
    }
}
