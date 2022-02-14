
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_11__ TYPE_4__ ;
typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_9__ {char* source; int linedefined; int lastlinedefined; char* what; int short_src; } ;
typedef TYPE_2__ lua_Debug ;
struct TYPE_8__ {TYPE_3__* p; } ;
struct TYPE_11__ {TYPE_1__ l; } ;
struct TYPE_10__ {int linedefined; int lastlinedefined; scalar_t__ source; } ;
typedef TYPE_3__ Proto ;
typedef TYPE_4__ Closure ;


 int VAR_0 ;
 char* FUNC_0 (scalar_t__) ;
 int FUNC_1 (int ,char*,int ) ;
 scalar_t__ FUNC_2 (TYPE_4__*) ;

__attribute__((used)) static void FUNC_3 (lua_Debug *VAR_1, Closure *VAR_2) {
  if (FUNC_2(VAR_2)) {
    VAR_1->source = "=[C]";
    VAR_1->linedefined = -1;
    VAR_1->lastlinedefined = -1;
    VAR_1->what = "C";
  }
  else {
    Proto *VAR_3 = VAR_2->l.p;
    VAR_1->source = VAR_3->source ? FUNC_0(VAR_3->source) : "=?";
    VAR_1->linedefined = VAR_3->linedefined;
    VAR_1->lastlinedefined = VAR_3->lastlinedefined;
    VAR_1->what = (VAR_1->linedefined == 0) ? "main" : "Lua";
  }
  FUNC_1(VAR_1->short_src, VAR_1->source, VAR_0);
}
