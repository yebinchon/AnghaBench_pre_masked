
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int text; struct nodelist* backquote; } ;
union node {TYPE_1__ narg; } ;
struct worddest {scalar_t__ state; struct arglist* list; } ;
struct nodelist {int dummy; } ;
struct arglist {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (scalar_t__) ;
 int FUNC_1 (scalar_t__) ;
 int FUNC_2 (char,scalar_t__) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct arglist*,int ) ;
 int FUNC_4 (int ,struct nodelist**,int,struct worddest*) ;
 int FUNC_5 (int ,struct arglist*) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int FUNC_6 (scalar_t__) ;
 scalar_t__ FUNC_7 () ;

void
FUNC_8(union node *VAR_6, struct arglist *VAR_7, int VAR_8)
{
 struct worddest VAR_9;
 struct nodelist *VAR_10;

 if (VAR_5)
  VAR_8 &= ~VAR_0;
 VAR_10 = VAR_6->narg.backquote;
 VAR_9.list = VAR_7;
 VAR_9.state = VAR_2;
 FUNC_1(VAR_4);
 FUNC_4(VAR_6->narg.text, &VAR_10, VAR_8, &VAR_9);
 if (VAR_7 == ((void*)0)) {
  FUNC_0(VAR_4);
  return;
 }
 if ((VAR_8 & VAR_1) == 0 || VAR_4 != FUNC_7() ||
     VAR_9.state == VAR_3) {
  FUNC_2('\0', VAR_4);
  if (VAR_8 & VAR_1) {
   if (VAR_8 & VAR_0)
    FUNC_5(FUNC_6(VAR_4), VAR_9.list);
   else
    FUNC_3(VAR_9.list, FUNC_6(VAR_4));
  }
 }
 if ((VAR_8 & VAR_1) == 0)
  FUNC_3(VAR_7, FUNC_6(VAR_4));
}
