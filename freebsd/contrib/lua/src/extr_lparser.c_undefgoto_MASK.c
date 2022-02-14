
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int l_noret ;
struct TYPE_7__ {int line; int name; } ;
struct TYPE_6__ {int L; } ;
typedef TYPE_1__ LexState ;
typedef TYPE_2__ Labeldesc ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 char* FUNC_2 (int ,char const*,int ,int ) ;
 int FUNC_3 (TYPE_1__*,char const*) ;

__attribute__((used)) static l_noret FUNC_4 (LexState *VAR_0, Labeldesc *VAR_1) {
  const char *VAR_2 = FUNC_1(VAR_1->name)
                    ? "<%s> at line %d not inside a loop"
                    : "no visible label '%s' for <goto> at line %d";
  VAR_2 = FUNC_2(VAR_0->L, VAR_2, FUNC_0(VAR_1->name), VAR_1->line);
  FUNC_3(VAR_0, VAR_2);
}
