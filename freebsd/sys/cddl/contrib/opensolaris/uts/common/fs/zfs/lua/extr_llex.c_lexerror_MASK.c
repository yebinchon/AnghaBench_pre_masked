
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int l_noret ;
struct TYPE_4__ {int L; int linenumber; int source; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int ) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (char*,int ,int) ;
 char* FUNC_3 (int ,char*,char const*,int ,...) ;
 int FUNC_4 (TYPE_1__*,int) ;

__attribute__((used)) static l_noret FUNC_5 (LexState *VAR_2, const char *VAR_3, int VAR_4) {
  char VAR_5[VAR_1];
  FUNC_2(VAR_5, FUNC_0(VAR_2->source), VAR_1);
  VAR_3 = FUNC_3(VAR_2->L, "%s:%d: %s", VAR_5, VAR_2->linenumber, VAR_3);
  if (VAR_4)
    FUNC_3(VAR_2->L, "%s near %s", VAR_3, FUNC_4(VAR_2, VAR_4));
  FUNC_1(VAR_2->L, VAR_0);
}
