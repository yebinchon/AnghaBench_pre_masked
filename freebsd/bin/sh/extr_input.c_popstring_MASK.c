
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct strpush {char* prevstring; struct strpush* prev; int prevlleft; int prevnleft; TYPE_1__* ap; } ;
struct TYPE_4__ {struct strpush basestrpush; struct strpush* strpush; } ;
struct TYPE_3__ {char* val; int flag; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (struct strpush*) ;
 int FUNC_1 () ;
 TYPE_2__* VAR_3 ;
 int VAR_4 ;
 char* VAR_5 ;
 int VAR_6 ;

__attribute__((used)) static void
FUNC_2(void)
{
 struct strpush *VAR_7 = VAR_3->strpush;

 VAR_1;
 if (VAR_7->ap) {
  if (VAR_5 != VAR_7->ap->val &&
      (VAR_5[-1] == ' ' || VAR_5[-1] == '\t'))
   FUNC_1();
  VAR_7->ap->flag &= ~VAR_0;
 }
 VAR_5 = VAR_7->prevstring;
 VAR_6 = VAR_7->prevnleft;
 VAR_4 = VAR_7->prevlleft;

 VAR_3->strpush = VAR_7->prev;
 if (VAR_7 != &(VAR_3->basestrpush))
  FUNC_0(VAR_7);
 VAR_2;
}
