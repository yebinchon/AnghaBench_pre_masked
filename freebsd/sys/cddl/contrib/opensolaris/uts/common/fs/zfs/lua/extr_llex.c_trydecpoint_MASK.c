
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_8__ {char decpoint; int buff; } ;
struct TYPE_7__ {int r; } ;
typedef TYPE_1__ SemInfo ;
typedef TYPE_2__ LexState ;


 int VAR_0 ;
 int FUNC_0 (int ,int *) ;
 int FUNC_1 (TYPE_2__*,char,char) ;
 char FUNC_2 () ;
 int FUNC_3 (TYPE_2__*,char*,int ) ;

__attribute__((used)) static void FUNC_4 (LexState *VAR_1, SemInfo *VAR_2) {
  char VAR_3 = VAR_1->decpoint;
  VAR_1->decpoint = FUNC_2();
  FUNC_1(VAR_1, VAR_3, VAR_1->decpoint);
  if (!FUNC_0(VAR_1->buff, &VAR_2->r)) {

    FUNC_1(VAR_1, VAR_1->decpoint, '.');
    FUNC_3(VAR_1, "malformed number", VAR_0);
  }
}
