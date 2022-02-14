
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {int current; int buff; int decpoint; } ;
struct TYPE_11__ {int r; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;


 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,char,int ) ;
 scalar_t__ FUNC_2 (TYPE_2__*,char const*) ;
 int FUNC_3 (int) ;
 scalar_t__ FUNC_4 (int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (TYPE_2__*,char) ;
 int FUNC_7 (TYPE_2__*) ;
 int FUNC_8 (TYPE_2__*,TYPE_1__*) ;

__attribute__((used)) static void FUNC_9 (LexState *VAR_0, SemInfo *VAR_1) {
  const char *VAR_2 = "Ee";
  int VAR_3 = VAR_0->current;
  FUNC_5(FUNC_3(VAR_0->current));
  FUNC_7(VAR_0);
  if (VAR_3 == '0' && FUNC_2(VAR_0, "Xx"))
    VAR_2 = "Pp";
  for (;;) {
    if (FUNC_2(VAR_0, VAR_2))
      FUNC_2(VAR_0, "+-");
    if (FUNC_4(VAR_0->current) || VAR_0->current == '.')
      FUNC_7(VAR_0);
    else break;
  }
  FUNC_6(VAR_0, '\0');
  FUNC_1(VAR_0, '.', VAR_0->decpoint);
  if (!FUNC_0(VAR_0->buff, &VAR_1->r))
    FUNC_8(VAR_0, VAR_1);
}
