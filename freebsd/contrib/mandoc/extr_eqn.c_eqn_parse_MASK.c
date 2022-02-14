
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct eqn_node {char* data; char* start; char* end; char const* toksz; int gsize; TYPE_1__* node; } ;
struct eqn_box {void* type; char* text; int expectargs; int args; int size; struct eqn_box* parent; struct eqn_box* prev; struct eqn_box* last; struct eqn_box* first; struct eqn_box* next; void* font; int * left; void* right; int pos; void* top; void* bottom; } ;
typedef enum eqn_tok { ____Placeholder_eqn_tok } eqn_tok ;
struct TYPE_2__ {int pos; int line; struct eqn_box* eqn; } ;


 void* VAR_0 ;
 void* VAR_1 ;
 void* VAR_2 ;
 void* VAR_3 ;
 void* VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 void* VAR_13 ;
 void* VAR_14 ;
 void* VAR_15 ;
 void* VAR_16 ;
 void* VAR_17 ;
 int VAR_18 ;
 int VAR_19 ;
 int VAR_20 ;
 int VAR_21 ;
 int VAR_22 ;
 int VAR_23 ;
 int VAR_24 ;
 int VAR_25 ;
 int VAR_26 ;
 int FUNC_0 (char*,char const*,char*,int) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;
 struct eqn_box* FUNC_3 (struct eqn_node*,struct eqn_box*) ;
 struct eqn_box* FUNC_4 (struct eqn_node*,struct eqn_box*) ;
 int FUNC_5 (struct eqn_node*) ;
 int FUNC_6 (struct eqn_node*) ;
 int FUNC_7 (struct eqn_node*,int ) ;
 int * VAR_27 ;
 int FUNC_8 (struct eqn_node*) ;
 int FUNC_9 (char*) ;
 int FUNC_10 (unsigned char) ;
 int FUNC_11 (unsigned char) ;
 int FUNC_12 (char const**,int *,int *) ;
 int FUNC_13 (int ,int ,int ,char*,...) ;
 void* FUNC_14 (char const*) ;
 void* FUNC_15 (char*,char const*) ;
 int FUNC_16 (char*,char const*,int) ;
 int FUNC_17 (char*,char*) ;

void
FUNC_18(struct eqn_node *VAR_28)
{
 struct eqn_box *VAR_29, *VAR_30, *VAR_31, *VAR_32;
 const char *VAR_33, *VAR_34;
 char *VAR_35;
 enum eqn_tok VAR_36;
 enum { CCL_LET, CCL_DIG, CCL_PUN } VAR_37, VAR_38;
 int VAR_39;

 VAR_31 = VAR_28->node->eqn;
 FUNC_2(VAR_31 != ((void*)0));






 if (VAR_28->data == ((void*)0))
  return;

 VAR_28->start = VAR_28->end = VAR_28->data + FUNC_17(VAR_28->data, " ^~");

next_tok:
 VAR_36 = FUNC_7(VAR_28, VAR_26);
 switch (VAR_36) {
 case 132:
  FUNC_8(VAR_28);
  break;
 case 148:
 case 169:
  FUNC_5(VAR_28);
  break;
 case 135:
  if (FUNC_7(VAR_28, VAR_23) == 163 ||
      FUNC_7(VAR_28, VAR_24) == 163)
   FUNC_13(VAR_22,
       VAR_28->node->line, VAR_28->node->pos, "tdefine");
  break;
 case 168:
  FUNC_6(VAR_28);
  break;
 case 158:
  if (FUNC_7(VAR_28, VAR_25) == 163)
   FUNC_13(VAR_22, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
  break;
 case 150:
 case 152:

  break;
 case 164:
 case 129:
 case 131:
 case 175:
 case 134:
 case 156:
 case 167:
 case 166:
  if (VAR_31->last == ((void*)0)) {
   FUNC_13(VAR_19, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
   VAR_29 = FUNC_3(VAR_28, VAR_31);
   VAR_29->type = VAR_17;
   VAR_29->text = FUNC_14("");
  }
  VAR_31 = FUNC_4(VAR_28, VAR_31);
  VAR_31->type = VAR_13;
  VAR_31->expectargs = 1;
  VAR_31->font = VAR_4;
  switch (VAR_36) {
  case 166:
   VAR_31->top = FUNC_14("\\[ad]");
   break;
  case 129:
   VAR_31->top = FUNC_14("\\[->]");
   break;
  case 164:
   VAR_31->top = FUNC_14("\\[<>]");
   break;
  case 134:
   VAR_31->top = FUNC_14("\\[a~]");
   break;
  case 131:
   VAR_31->bottom = FUNC_14("\\[ul]");
   break;
  case 175:
   VAR_31->top = FUNC_14("\\[rn]");
   break;
  case 167:
   VAR_31->top = FUNC_14("\\[a.]");
   break;
  case 156:
   VAR_31->top = FUNC_14("\\[ha]");
   break;
  default:
   FUNC_1();
  }
  VAR_31 = VAR_31->parent;
  break;
 case 159:
 case 176:
 case 165:
 case 130:
  if (FUNC_7(VAR_28, VAR_25) == 163)
   FUNC_13(VAR_22, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
  break;
 case 162:
 case 142:
 case 155:
 case 174:
  while (VAR_31->args == VAR_31->expectargs)
   VAR_31 = VAR_31->parent;





  VAR_31 = FUNC_3(VAR_28, VAR_31);
  VAR_31->type = VAR_13;
  VAR_31->expectargs = 1;
  switch (VAR_36) {
  case 162:
   VAR_31->font = VAR_1;
   break;
  case 142:
   VAR_31->font = VAR_4;
   break;
  case 155:
   VAR_31->font = VAR_2;
   break;
  case 174:
   VAR_31->font = VAR_0;
   break;
  default:
   FUNC_1();
  }
  break;
 case 140:
 case 157:

  if (FUNC_7(VAR_28, VAR_25) == 163) {
   FUNC_13(VAR_22, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
   break;
  }
  VAR_39 = FUNC_16(VAR_28->start, VAR_28->toksz, 10);
  if (-1 == VAR_39) {
   FUNC_13(VAR_20, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
   break;
  }
  if (157 == VAR_36) {
   VAR_28->gsize = VAR_39;
   break;
  }
  while (VAR_31->args == VAR_31->expectargs)
   VAR_31 = VAR_31->parent;
  VAR_31 = FUNC_3(VAR_28, VAR_31);
  VAR_31->type = VAR_13;
  VAR_31->expectargs = 1;
  VAR_31->size = VAR_39;
  break;
 case 161:
 case 133:
 case 138:
 case 137:





  if (VAR_31->last == ((void*)0)) {
   FUNC_13(VAR_19, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
   VAR_29 = FUNC_3(VAR_28, VAR_31);
   VAR_29->type = VAR_17;
   VAR_29->text = FUNC_14("");
  }
  while (VAR_31->expectargs == 1 && VAR_31->args == 1)
   VAR_31 = VAR_31->parent;
  if (VAR_36 == 161 || VAR_36 == 133) {
   for (VAR_29 = VAR_31; VAR_29 != ((void*)0); VAR_29 = VAR_29->parent)
    if (VAR_29->pos == VAR_9 ||
        VAR_29->pos == VAR_11 ||
        VAR_29->pos == VAR_10 ||
        VAR_29->pos == VAR_8 ||
        VAR_29->pos == VAR_7)
     break;
   if (VAR_29 != ((void*)0))
    VAR_31 = VAR_29->parent;
  }
  if (VAR_36 == 137 && VAR_31->pos == VAR_9) {
   VAR_31->expectargs = 3;
   VAR_31->pos = VAR_10;
   break;
  }
  if (VAR_36 == 133 && VAR_31->pos == VAR_5) {
   VAR_31->expectargs = 3;
   VAR_31->pos = VAR_6;
   break;
  }
  VAR_31 = FUNC_4(VAR_28, VAR_31);
  switch (VAR_36) {
  case 161:
   VAR_31->pos = VAR_5;
   break;
  case 133:
   VAR_31->pos = VAR_12;
   break;
  case 137:
   VAR_31->pos = VAR_11;
   break;
  case 138:
   VAR_31->pos = VAR_9;
   break;
  default:
   FUNC_1();
  }
  break;
 case 139:
  while (VAR_31->args == VAR_31->expectargs)
   VAR_31 = VAR_31->parent;





  VAR_31 = FUNC_3(VAR_28, VAR_31);
  VAR_31->type = VAR_16;
  VAR_31->pos = VAR_8;
  VAR_31->expectargs = 1;
  break;
 case 147:





  if (VAR_31->last == ((void*)0)) {
   FUNC_13(VAR_19, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
   VAR_29 = FUNC_3(VAR_28, VAR_31);
   VAR_29->type = VAR_17;
   VAR_29->text = FUNC_14("");
  }
  while (VAR_31->args == VAR_31->expectargs)
   VAR_31 = VAR_31->parent;
  while (VAR_16 == VAR_31->type)
   VAR_31 = VAR_31->parent;
  VAR_31 = FUNC_4(VAR_28, VAR_31);
  VAR_31->pos = VAR_7;
  break;
 case 143:
 case 173:





  for (VAR_29 = VAR_31; VAR_29 != ((void*)0); VAR_29 = VAR_29->parent)
   if (VAR_29->type == VAR_13 &&
       VAR_29->expectargs > 1 &&
       (VAR_36 == 173 ||
        VAR_29->left != ((void*)0)))
    break;
  if (VAR_29 == ((void*)0)) {
   FUNC_13(VAR_18, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
   break;
  }
  VAR_31 = VAR_29;
  if (143 == VAR_36) {
   if (FUNC_7(VAR_28, VAR_25) == 163) {
    FUNC_13(VAR_22,
        VAR_28->node->line, VAR_28->node->pos,
        "%s", VAR_27[VAR_36]);
    break;
   }

   if (FUNC_0(VAR_28->start, VAR_28->toksz, "ceiling", 7))
    VAR_31->right = FUNC_14("\\[rc]");
   else if (FUNC_0(VAR_28->start, VAR_28->toksz, "floor", 5))
    VAR_31->right = FUNC_14("\\[rf]");
   else
    VAR_31->right =
        FUNC_15(VAR_28->start, VAR_28->toksz);
  }
  VAR_31 = VAR_31->parent;
  if (VAR_36 == 173 &&
      (VAR_31->type == VAR_15 ||
       VAR_31->type == VAR_14))
   VAR_31 = VAR_31->parent;

  while (VAR_31->type == VAR_13 &&
      VAR_31->expectargs == 1 &&
      VAR_31->args == 1)
   VAR_31 = VAR_31->parent;
  break;
 case 172:
 case 153:





  while (VAR_31->args == VAR_31->expectargs)
   VAR_31 = VAR_31->parent;
  if (153 == VAR_36 &&
      FUNC_7(VAR_28, VAR_25) == 163) {
   FUNC_13(VAR_22, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
   break;
  }
  VAR_31 = FUNC_3(VAR_28, VAR_31);
  VAR_31->type = VAR_13;
  if (153 == VAR_36) {
   if (FUNC_0(VAR_28->start, VAR_28->toksz, "ceiling", 7))
    VAR_31->left = FUNC_14("\\[lc]");
   else if (FUNC_0(VAR_28->start, VAR_28->toksz, "floor", 5))
    VAR_31->left = FUNC_14("\\[lf]");
   else
    VAR_31->left =
        FUNC_15(VAR_28->start, VAR_28->toksz);
  }
  break;
 case 146:
 case 151:
 case 141:
 case 170:
 case 171:
 case 154:
 case 144:
  while (VAR_31->args == VAR_31->expectargs)
   VAR_31 = VAR_31->parent;
  VAR_31 = FUNC_3(VAR_28, VAR_31);
  VAR_31->type = VAR_15;
  VAR_31->expectargs = 1;
  break;
 case 177:
  for (VAR_29 = VAR_31; VAR_29 != ((void*)0); VAR_29 = VAR_29->parent)
   if (VAR_29->type == VAR_15)
    break;
  if (VAR_29 == ((void*)0)) {
   FUNC_13(VAR_21, VAR_28->node->line,
       VAR_28->node->pos, "%s", VAR_27[VAR_36]);
   break;
  }
  VAR_31 = FUNC_3(VAR_28, VAR_29);
  VAR_31->type = VAR_13;
  break;
 case 149:
  while (VAR_31->args == VAR_31->expectargs)
   VAR_31 = VAR_31->parent;
  VAR_31 = FUNC_3(VAR_28, VAR_31);
  VAR_31->type = VAR_14;
  VAR_31->expectargs = 1;
  break;
 case 163:
  return;
 case 128:
 case 160:
 case 145:
 case 136:
  VAR_35 = VAR_28->start;
  FUNC_2(VAR_35 != ((void*)0));




  while (VAR_31->args == VAR_31->expectargs)
   VAR_31 = VAR_31->parent;
  VAR_29 = FUNC_3(VAR_28, VAR_31);
  VAR_29->type = VAR_17;
  VAR_29->text = VAR_35;
  switch (VAR_36) {
  case 160:
   VAR_29->font = VAR_4;
   break;
  case 145:
   if (VAR_29->font == VAR_3)
    VAR_29->font = VAR_2;
   break;
  case 136:
   break;
  default:
   if (VAR_29->font != VAR_3 || *VAR_35 == '\0')
    break;
   VAR_34 = VAR_35 - 1;
   VAR_38 = CCL_LET;
   VAR_32 = ((void*)0);
   for (;;) {

    VAR_33 = VAR_34++;
    VAR_37 = VAR_38;
    VAR_38 = FUNC_10((unsigned char)*VAR_34) ? CCL_LET :
        FUNC_11((unsigned char)*VAR_34) ||
        (*VAR_34 == '.' && (VAR_37 == CCL_DIG ||
         FUNC_11((unsigned char)VAR_34[1]))) ?
        CCL_DIG : CCL_PUN;

    if (VAR_33 < VAR_35)
     continue;
    VAR_29->font = VAR_37 == CCL_LET ?
        VAR_2 : VAR_4;
    if (*VAR_33 == '\\')
     FUNC_12(&VAR_34, ((void*)0), ((void*)0));

    if (*VAR_34 == '\0')
     break;
    if (VAR_38 == VAR_37 && *VAR_33 != ',' && *VAR_34 != ',')
     continue;

    if (VAR_31->args == VAR_31->expectargs) {

     if (VAR_29->prev == ((void*)0))
      VAR_31->first = VAR_29->next;
     else
      VAR_29->prev->next = ((void*)0);
     VAR_31->last = VAR_29->prev;
     VAR_31->args--;

     VAR_32 = FUNC_3(VAR_28, VAR_31);
     VAR_32->type = VAR_13;

     VAR_32->first = VAR_32->last = VAR_29;
     VAR_29->parent = VAR_32;
     VAR_29->prev = ((void*)0);
     VAR_31 = VAR_32;
    }

    VAR_30 = FUNC_3(VAR_28, VAR_31);
    VAR_30->type = VAR_17;
    VAR_30->text = FUNC_14(VAR_34);

    VAR_35 = FUNC_15(VAR_29->text,
        VAR_34 - VAR_29->text);
    FUNC_9(VAR_29->text);
    VAR_29->text = VAR_35;

    VAR_29 = VAR_30;
    VAR_35 = VAR_30->text;
    VAR_34 = VAR_35 - 1;
    VAR_38 = CCL_LET;
   }
   if (VAR_32 != ((void*)0))
    VAR_31 = VAR_32->parent;
   break;
  }
  break;
 default:
  FUNC_1();
 }
 goto next_tok;
}
