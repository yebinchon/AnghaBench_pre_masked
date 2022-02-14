
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int type; int right; int left; } ;
struct filter_arg {TYPE_1__ op; } ;
struct event_filter {int dummy; } ;





 char* FUNC_0 (struct event_filter*,int ) ;
 int FUNC_1 (char*) ;
 char* FUNC_2 (int) ;
 int FUNC_3 (char*,int,char*,char*,char*,...) ;
 int FUNC_4 (char*,char*) ;
 int FUNC_5 (char*,char*) ;
 scalar_t__ FUNC_6 (char*) ;

__attribute__((used)) static char *FUNC_7(struct event_filter *VAR_0, struct filter_arg *VAR_1)
{
 char *VAR_2 = ((void*)0);
 char *VAR_3 = ((void*)0);
 char *VAR_4 = ((void*)0);
 char *VAR_5 = ((void*)0);
 int VAR_6 = -1;
 int VAR_7 = -1;
 int VAR_8;
 int VAR_9;

 switch (VAR_1->op.type) {
 case 130:
  VAR_5 = "&&";

 case 128:
  if (!VAR_5)
   VAR_5 = "||";

  VAR_3 = FUNC_0(VAR_0, VAR_1->op.left);
  VAR_4 = FUNC_0(VAR_0, VAR_1->op.right);
  if (!VAR_3 || !VAR_4)
   break;


  if (FUNC_4(VAR_3, "TRUE") == 0)
   VAR_6 = 1;
  else if (FUNC_4(VAR_3, "FALSE") == 0)
   VAR_6 = 0;

  if (FUNC_4(VAR_4, "TRUE") == 0)
   VAR_7 = 1;
  else if (FUNC_4(VAR_4, "FALSE") == 0)
   VAR_7 = 0;

  if (VAR_6 >= 0) {
   if ((VAR_1->op.type == 130 && !VAR_6) ||
       (VAR_1->op.type == 128 && VAR_6)) {

    VAR_2 = VAR_3;
    VAR_3 = ((void*)0);
    break;
   }
   if (VAR_7 >= 0) {

    VAR_8 = 0;
    switch (VAR_1->op.type) {
    case 130:
     VAR_8 = VAR_6 && VAR_7;
     break;
    case 128:
     VAR_8 = VAR_6 || VAR_7;
     break;
    default:
     break;
    }
    VAR_2 = FUNC_2(6);
    if (VAR_8)
     FUNC_5(VAR_2, "TRUE");
    else
     FUNC_5(VAR_2, "FALSE");
    break;
   }
  }
  if (VAR_7 >= 0) {
   if ((VAR_1->op.type == 130 && !VAR_7) ||
       (VAR_1->op.type == 128 && VAR_7)) {

    VAR_2 = VAR_4;
    VAR_4 = ((void*)0);
    break;
   }

   VAR_2 = VAR_3;
   VAR_3 = ((void*)0);
   break;
  }

  VAR_9 = FUNC_6(VAR_3) + FUNC_6(VAR_4) + FUNC_6(VAR_5) + 10;
  VAR_2 = FUNC_2(VAR_9);
  FUNC_3(VAR_2, VAR_9, "(%s) %s (%s)",
    VAR_3, VAR_5, VAR_4);
  break;

 case 129:
  VAR_5 = "!";
  VAR_4 = FUNC_0(VAR_0, VAR_1->op.right);
  if (!VAR_4)
   break;


  if (FUNC_4(VAR_4, "TRUE") == 0)
   VAR_7 = 1;
  else if (FUNC_4(VAR_4, "FALSE") == 0)
   VAR_7 = 0;
  if (VAR_7 >= 0) {

   VAR_2 = FUNC_2(6);
   if (VAR_7)
    FUNC_5(VAR_2, "FALSE");
   else
    FUNC_5(VAR_2, "TRUE");
   break;
  }
  VAR_9 = FUNC_6(VAR_4) + FUNC_6(VAR_5) + 3;
  VAR_2 = FUNC_2(VAR_9);
  FUNC_3(VAR_2, VAR_9, "%s(%s)", VAR_5, VAR_4);
  break;

 default:

  break;
 }
 FUNC_1(VAR_3);
 FUNC_1(VAR_4);
 return VAR_2;
}
