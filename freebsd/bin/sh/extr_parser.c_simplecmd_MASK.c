
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {union node* redirect; union node* args; } ;
struct TYPE_5__ {char* text; union node* next; } ;
struct TYPE_4__ {union node* next; } ;
union node {TYPE_3__ ncmd; int type; TYPE_2__ narg; TYPE_1__ nfile; } ;
struct ncmd {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int VAR_5 ;
 scalar_t__ VAR_6 ;
 int VAR_7 ;
 union node* FUNC_0 () ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (char*,int*) ;
 scalar_t__ VAR_8 ;
 int FUNC_3 (int ) ;
 scalar_t__ VAR_9 ;
 union node* FUNC_4 () ;
 int FUNC_5 (char*) ;
 int FUNC_6 () ;
 scalar_t__ VAR_10 ;
 scalar_t__ VAR_11 ;
 scalar_t__ FUNC_7 () ;
 union node* VAR_12 ;
 int FUNC_8 (char*) ;
 scalar_t__ FUNC_9 (int) ;
 scalar_t__ FUNC_10 (char*,char) ;
 int FUNC_11 (char*) ;
 int FUNC_12 (char*) ;
 int VAR_13 ;
 int VAR_14 ;

__attribute__((used)) static union node *
FUNC_13(union node **VAR_15, union node *VAR_16)
{
 union node *VAR_17, **VAR_18;
 union node **VAR_19 = VAR_15;
 union node *VAR_20 = ((void*)0);
 int VAR_21;
 int VAR_22;



 if (VAR_16 == ((void*)0))
  VAR_15 = &VAR_16;

 VAR_17 = ((void*)0);
 VAR_18 = &VAR_17;





 VAR_19 = VAR_15;

 VAR_22 = VAR_0;

 for (;;) {
  VAR_7 = VAR_22;
  if (FUNC_7() == VAR_6) {
   VAR_20 = FUNC_4();
   *VAR_18 = VAR_20;
   VAR_18 = &VAR_20->narg.next;
   if (VAR_22 != 0 && !FUNC_3(VAR_14))
    VAR_22 = 0;
  } else if (VAR_9 == VAR_4) {
   *VAR_15 = VAR_20 = VAR_12;
   VAR_15 = &VAR_20->nfile.next;
   FUNC_6();
  } else if (VAR_9 == VAR_3 && VAR_18 == &VAR_17->narg.next
         && VAR_15 == VAR_19) {

   FUNC_1(VAR_5);
   VAR_8 = VAR_10;






   if (!FUNC_5(VAR_20->narg.text) || VAR_11 ||
       FUNC_10(VAR_20->narg.text, '/') ||
       FUNC_10("!%*+-=?@}~",
    VAR_20->narg.text[FUNC_11(VAR_20->narg.text) - 1]))
    FUNC_12("Bad function name");
   FUNC_8(VAR_20->narg.text);
   if (FUNC_2(VAR_20->narg.text, &VAR_21) >= 0 &&
       VAR_21)
    FUNC_12("Cannot override a special builtin with a function");
   VAR_20->type = VAR_2;
   VAR_20->narg.next = FUNC_0();
   VAR_8 = 0;
   return VAR_20;
  } else {
   VAR_13++;
   break;
  }
 }
 *VAR_18 = ((void*)0);
 *VAR_15 = ((void*)0);
 VAR_20 = (union node *)FUNC_9(sizeof (struct ncmd));
 VAR_20->type = VAR_1;
 VAR_20->ncmd.args = VAR_17;
 VAR_20->ncmd.redirect = VAR_16;
 return VAR_20;
}
