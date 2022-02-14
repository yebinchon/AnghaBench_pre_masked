
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {int * ci; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_8__ {TYPE_1__* p; } ;
struct TYPE_6__ {int * source; } ;
typedef int TString ;
typedef int CallInfo ;


 int VAR_0 ;
 TYPE_4__* FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (int *) ;
 int FUNC_4 (char*,int ,int) ;
 int FUNC_5 (TYPE_2__*,char*,char*,int,char const*) ;

__attribute__((used)) static void FUNC_6 (lua_State *VAR_1, const char *VAR_2) {
  CallInfo *VAR_3 = VAR_1->ci;
  if (FUNC_3(VAR_3)) {
    char VAR_4[VAR_0];
    int VAR_5 = FUNC_1(VAR_3);
    TString *VAR_6 = FUNC_0(VAR_3)->p->source;
    if (VAR_6)
      FUNC_4(VAR_4, FUNC_2(VAR_6), VAR_0);
    else {
      VAR_4[0] = '?'; VAR_4[1] = '\0';
    }
    FUNC_5(VAR_1, "%s:%d: %s", VAR_4, VAR_5, VAR_2);
  }
}
