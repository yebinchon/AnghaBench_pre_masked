
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct tag {int dummy; } ;
struct html {int dummy; } ;
struct eqn_box {scalar_t__ type; int expectargs; int pos; char* top; char* bottom; char* text; int font; char* left; char* right; struct eqn_box* next; struct eqn_box* first; TYPE_1__* parent; } ;
typedef enum htmltag { ____Placeholder_htmltag } htmltag ;
typedef enum eqn_fontt { ____Placeholder_eqn_fontt } eqn_fontt ;
struct TYPE_2__ {scalar_t__ type; } ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 int VAR_3 ;
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
 int VAR_14 ;
 int VAR_15 ;
 int VAR_16 ;
 int VAR_17 ;
 int VAR_18 ;
 int FUNC_0 () ;
 int FUNC_1 (int) ;
 scalar_t__ FUNC_2 (unsigned char) ;
 scalar_t__ FUNC_3 (unsigned char) ;
 scalar_t__ FUNC_4 (unsigned char) ;
 int FUNC_5 (char const**,int *,int *) ;
 struct tag* FUNC_6 (struct html*,int,char*,...) ;
 int FUNC_7 (struct html*,struct tag*) ;
 int FUNC_8 (struct html*,char*) ;

__attribute__((used)) static void
FUNC_9(struct html *VAR_19, const struct eqn_box *VAR_20)
{
 struct tag *VAR_21, *VAR_22, *VAR_23, *VAR_24;
 const struct eqn_box *VAR_25, *VAR_26;
 const char *VAR_27;
 size_t VAR_28, VAR_29, VAR_30;
 enum htmltag VAR_31;
 enum eqn_fontt VAR_32;

 if (((void*)0) == VAR_20)
  return;

 VAR_21 = ((void*)0);





 if (VAR_1 == VAR_20->type) {
  if (((void*)0) == VAR_20->first)
   goto out;
  if (VAR_20->first->type != VAR_0 ||
      VAR_20->first->expectargs == 1) {
   FUNC_9(VAR_19, VAR_20->first);
   goto out;
  }
  if (((void*)0) == (VAR_26 = VAR_20->first->first))
   goto out;

  if (((void*)0) == (VAR_25 = VAR_26->first))
   goto out;
  for (VAR_30 = 0; ((void*)0) != VAR_25; VAR_30++)
   VAR_25 = VAR_25->next;

  VAR_21 = FUNC_6(VAR_19, VAR_14, "");
  for (VAR_28 = 0; VAR_28 < VAR_30; VAR_28++) {
   VAR_26 = VAR_20->first->first;
   VAR_22 = FUNC_6(VAR_19, VAR_16, "");
   while (((void*)0) != VAR_26) {
    VAR_25 = VAR_26->first;
    for (VAR_29 = 0; VAR_29 < VAR_28; VAR_29++) {
     if (((void*)0) == VAR_25)
      break;
     VAR_25 = VAR_25->next;
    }
    VAR_23 = FUNC_6(VAR_19, VAR_15, "");





    if (((void*)0) != VAR_25)
     FUNC_9(VAR_19, VAR_25->first);
    FUNC_7(VAR_19, VAR_23);
    VAR_26 = VAR_26->next;
   }
   FUNC_7(VAR_19, VAR_22);
  }
  goto out;
 }

 switch (VAR_20->pos) {
 case 128:
  VAR_21 = FUNC_6(VAR_19, VAR_8, "");
  break;
 case 129:
  VAR_21 = FUNC_6(VAR_19, VAR_13, "");
  break;
 case 135:
  VAR_21 = FUNC_6(VAR_19, VAR_17, "");
  break;
 case 131:
  VAR_21 = FUNC_6(VAR_19, VAR_11, "");
  break;
 case 133:
  VAR_21 = FUNC_6(VAR_19, VAR_4, "");
  break;
 case 134:
  VAR_21 = FUNC_6(VAR_19, VAR_18, "");
  break;
 case 130:
  VAR_21 = FUNC_6(VAR_19, VAR_12, "");
  break;
 case 132:
  VAR_21 = FUNC_6(VAR_19, VAR_10, "");
  break;
 default:
  break;
 }

 if (VAR_20->top || VAR_20->bottom) {
  FUNC_1(((void*)0) == VAR_21);
  if (VAR_20->top && ((void*)0) == VAR_20->bottom)
   VAR_21 = FUNC_6(VAR_19, VAR_8, "");
  else if (VAR_20->top && VAR_20->bottom)
   VAR_21 = FUNC_6(VAR_19, VAR_18, "");
  else if (VAR_20->bottom)
   VAR_21 = FUNC_6(VAR_19, VAR_17, "");
 }

 if (VAR_2 == VAR_20->type) {
  FUNC_1(((void*)0) == VAR_21);
  if (VAR_20->first != ((void*)0) &&
      VAR_20->first->type == VAR_0 &&
      VAR_20->first->expectargs > 1)
   VAR_21 = FUNC_6(VAR_19, VAR_14, "");
 } else if (VAR_20->type == VAR_0 && VAR_20->expectargs > 1 &&
     VAR_20->parent && VAR_20->parent->type == VAR_2) {
  FUNC_1(((void*)0) == VAR_21);
  VAR_21 = FUNC_6(VAR_19, VAR_16, "");
  FUNC_6(VAR_19, VAR_15, "");
 }

 if (VAR_20->text != ((void*)0)) {
  FUNC_1(VAR_21 == ((void*)0));
  VAR_31 = VAR_5;
  VAR_27 = VAR_20->text;
  if (FUNC_4((unsigned char)VAR_27[0]) ||
      (VAR_27[0] == '.' && FUNC_4((unsigned char)VAR_27[1]))) {
   VAR_31 = VAR_6;
   while (*++VAR_27 != '\0') {
    if (*VAR_27 != '.' &&
        FUNC_4((unsigned char)*VAR_27) == 0) {
     VAR_31 = VAR_5;
     break;
    }
   }
  } else if (*VAR_27 != '\0' && FUNC_3((unsigned char)*VAR_27) == 0) {
   VAR_31 = VAR_7;
   while (*VAR_27 != '\0') {
    if (VAR_27[0] == '\\' && VAR_27[1] != '\0') {
     VAR_27++;
     FUNC_5(&VAR_27, ((void*)0), ((void*)0));
    } else if (FUNC_2((unsigned char)*VAR_27)) {
     VAR_31 = VAR_5;
     break;
    } else
     VAR_27++;
   }
  }
  VAR_32 = VAR_20->font;
  if (VAR_20->text[0] != '\0' &&
      (((VAR_31 == VAR_6 || VAR_31 == VAR_7) &&
        VAR_32 == 136) ||
       (VAR_31 == VAR_5 && VAR_32 == (VAR_20->text[1] == '\0' ?
        138 : 136))))
   VAR_32 = 137;
  switch (VAR_32) {
  case 137:
   VAR_21 = FUNC_6(VAR_19, VAR_31, "");
   break;
  case 136:
   VAR_21 = FUNC_6(VAR_19, VAR_31, "?", "fontstyle", "normal");
   break;
  case 140:
  case 139:
   VAR_21 = FUNC_6(VAR_19, VAR_31, "?", "fontweight", "bold");
   break;
  case 138:
   VAR_21 = FUNC_6(VAR_19, VAR_31, "?", "fontstyle", "italic");
   break;
  default:
   FUNC_0();
  }
  FUNC_8(VAR_19, VAR_20->text);
 } else if (((void*)0) == VAR_21) {
  if (((void*)0) != VAR_20->left || ((void*)0) != VAR_20->right)
   VAR_21 = FUNC_6(VAR_19, VAR_3, "??",
       "open", VAR_20->left == ((void*)0) ? "" : VAR_20->left,
       "close", VAR_20->right == ((void*)0) ? "" : VAR_20->right);
  if (((void*)0) == VAR_21)
   VAR_21 = FUNC_6(VAR_19, VAR_9, "");
  else
   FUNC_6(VAR_19, VAR_9, "");
 }

 FUNC_9(VAR_19, VAR_20->first);

out:
 if (((void*)0) != VAR_20->bottom) {
  VAR_24 = FUNC_6(VAR_19, VAR_7, "");
  FUNC_8(VAR_19, VAR_20->bottom);
  FUNC_7(VAR_19, VAR_24);
 }
 if (((void*)0) != VAR_20->top) {
  VAR_24 = FUNC_6(VAR_19, VAR_7, "");
  FUNC_8(VAR_19, VAR_20->top);
  FUNC_7(VAR_19, VAR_24);
 }

 if (((void*)0) != VAR_21)
  FUNC_7(VAR_19, VAR_21);

 FUNC_9(VAR_19, VAR_20->next);
}
