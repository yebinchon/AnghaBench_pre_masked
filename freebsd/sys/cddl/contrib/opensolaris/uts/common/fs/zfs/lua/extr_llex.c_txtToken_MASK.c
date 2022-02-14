
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_5__ {int buff; int L; } ;
typedef TYPE_1__ LexState ;


 int VAR_0 ;



 char const* FUNC_0 (int ,int ,int ) ;
 char const* FUNC_1 (TYPE_1__*,int) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (TYPE_1__*,char) ;

__attribute__((used)) static const char *FUNC_4 (LexState *VAR_1, int VAR_2) {
  switch (VAR_2) {
    case 130:
    case 128:
    case 129:
      FUNC_3(VAR_1, '\0');
      return FUNC_0(VAR_1->L, VAR_0, FUNC_2(VAR_1->buff));
    default:
      return FUNC_1(VAR_1, VAR_2);
  }
}
