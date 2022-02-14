
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_5__ ;
typedef struct TYPE_10__ TYPE_4__ ;
typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct pred_data {scalar_t__* codes; } ;
struct TYPE_8__ {TYPE_1__* first; } ;
struct decision {int need_label; int number; struct decision* next; TYPE_2__ success; TYPE_5__* tests; int afterward; } ;
typedef enum decision_type { ____Placeholder_decision_type } decision_type ;
typedef int codemap ;
struct TYPE_9__ {struct pred_data* data; } ;
struct TYPE_10__ {size_t code; int veclen; int intval; int mode; TYPE_3__ pred; } ;
struct TYPE_11__ {int type; TYPE_4__ u; scalar_t__ next; } ;
struct TYPE_7__ {int number; int need_label; } ;
typedef size_t RTX_CODE ;


 int VAR_0 ;





 int VAR_1 ;

 char* FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 () ;
 int FUNC_3 (char*,int ,int) ;
 scalar_t__ FUNC_4 (TYPE_5__*,TYPE_5__*) ;
 int FUNC_5 (size_t) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (char*,...) ;
 int VAR_3 ;
 int FUNC_8 (struct decision*,int ,char*) ;

__attribute__((used)) static struct decision *
FUNC_9 (struct decision *VAR_4, int VAR_5)
{
  struct decision *VAR_6 = VAR_4;
  enum decision_type VAR_7 = VAR_6->tests->type;
  struct decision *VAR_8 = ((void*)0);




  if (!VAR_6->next
      || VAR_6->tests->next
      || VAR_6->next->tests->type != VAR_7
      || VAR_6->next->tests->next
      || FUNC_4 (VAR_6->tests, VAR_6->next->tests))
    return VAR_6;



  if (VAR_7 == VAR_0)
    {
      char VAR_9[VAR_2];
      struct decision *VAR_10;
      RTX_CODE VAR_11;

      FUNC_3 (VAR_9, 0, sizeof(VAR_9));

      FUNC_7 ("  switch (GET_CODE (x%d))\n    {\n", VAR_5);
      VAR_11 = VAR_6->tests->u.code;
      do
 {
   if (VAR_6 != VAR_4 && VAR_6->need_label && VAR_8 == ((void*)0))
     VAR_8 = VAR_6;

   FUNC_7 ("    case ");
   FUNC_5 (VAR_11);
   FUNC_7 (":\n      goto L%d;\n", VAR_6->success.first->number);
   VAR_6->success.first->need_label = 1;

   VAR_9[VAR_11] = 1;
   VAR_6 = VAR_6->next;
 }
      while (VAR_6
      && ! VAR_6->tests->next
      && VAR_6->tests->type == VAR_0
      && ! VAR_9[VAR_11 = VAR_6->tests->u.code]);
      if (VAR_8 != ((void*)0))
 VAR_10 = VAR_8;
      else
 VAR_10 = VAR_6;

      while (VAR_6 && VAR_6->tests->type == VAR_1 && VAR_6->tests->u.pred.data)
 {
   const struct pred_data *VAR_12 = VAR_6->tests->u.pred.data;
   RTX_CODE VAR_13;
   for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
     if (VAR_9[VAR_13] && VAR_12->codes[VAR_13])
       goto pred_done;

   for (VAR_13 = 0; VAR_13 < VAR_2; VAR_13++)
     if (VAR_12->codes[VAR_13])
       {
  FUNC_1 ("    case ", VAR_3);
  FUNC_5 (VAR_13);
  FUNC_1 (":\n", VAR_3);
  VAR_9[VAR_13] = 1;
       }

   FUNC_7 ("      goto L%d;\n", VAR_6->number);
   VAR_6->need_label = 1;
   VAR_6 = VAR_6->next;
 }

    pred_done:


      FUNC_7 ("    default:\n");
      if (VAR_6 != VAR_10)
 {
   if (VAR_6)
     {
       FUNC_7 ("      goto L%d;\n", VAR_6->number);
       VAR_6->need_label = 1;
     }
   else
     FUNC_8 (VAR_4, VAR_4->afterward, "      ");
 }
      else
 FUNC_7 ("     break;\n");
      FUNC_7 ("   }\n");

      return VAR_10;
    }
  else if (VAR_7 == 129
    || VAR_7 == 128
    || VAR_7 == 132
    || VAR_7 == 133
    || VAR_7 == 130)
    {
      const char *VAR_14 = "";



      if (VAR_7 == 130)
 {
   VAR_14 = "  ";
   FUNC_7("  if ((int) XWINT (x%d, 0) == XWINT (x%d, 0))\n", VAR_5, VAR_5);
 }
      FUNC_7 ("%s  switch (", VAR_14);
      switch (VAR_7)
 {
 case 129:
   FUNC_7 ("GET_MODE (x%d)", VAR_5);
   break;
 case 128:
   FUNC_7 ("XVECLEN (x%d, 0)", VAR_5);
   break;
 case 132:
   FUNC_7 ("XINT (x%d, 0)", VAR_5);
   break;
 case 133:
   FUNC_7 ("XINT (x%d, 1)", VAR_5);
   break;
 case 130:


   FUNC_7 ("(int) XWINT (x%d, 0)", VAR_5);
   break;
 default:
   FUNC_2 ();
 }
      FUNC_7 (")\n%s    {\n", VAR_14);

      do
 {



   struct decision *VAR_15;
   for (VAR_15 = VAR_4; VAR_15 != VAR_6; VAR_15 = VAR_15->next)
     if (FUNC_4 (VAR_6->tests, VAR_15->tests))
       goto case_done;

   if (VAR_6 != VAR_4 && VAR_6->need_label && VAR_8 == ((void*)0))
     VAR_8 = VAR_6;

   FUNC_7 ("%s    case ", VAR_14);
   switch (VAR_7)
     {
     case 129:
       FUNC_7 ("%smode", FUNC_0 (VAR_6->tests->u.mode));
       break;
     case 128:
       FUNC_7 ("%d", VAR_6->tests->u.veclen);
       break;
     case 132:
     case 133:
     case 131:
     case 130:
       FUNC_6 (VAR_6->tests->u.intval);
       break;
     default:
       FUNC_2 ();
     }
   FUNC_7 (":\n%s      goto L%d;\n", VAR_14, VAR_6->success.first->number);
   VAR_6->success.first->need_label = 1;

   VAR_6 = VAR_6->next;
 }
      while (VAR_6 && VAR_6->tests->type == VAR_7 && !VAR_6->tests->next);

    case_done:
      FUNC_7 ("%s    default:\n%s      break;\n%s    }\n",
       VAR_14, VAR_14, VAR_14);

      return VAR_8 != ((void*)0) ? VAR_8 : VAR_6;
    }
  else
    {

      return VAR_6;
    }
}
