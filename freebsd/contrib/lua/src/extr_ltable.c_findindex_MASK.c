
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_5__ {unsigned int sizearray; } ;
typedef TYPE_1__ Table ;
typedef int StkId ;
typedef int Node ;


 unsigned int FUNC_0 (int ) ;
 unsigned int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (int ) ;
 scalar_t__ FUNC_3 (int ) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_7 (int ) ;
 int FUNC_8 (int *,char*) ;
 scalar_t__ FUNC_9 (int ,int ) ;
 int * FUNC_10 (TYPE_1__*,int ) ;
 scalar_t__ FUNC_11 (int ) ;
 scalar_t__ FUNC_12 (int ) ;

__attribute__((used)) static unsigned int FUNC_13 (lua_State *VAR_0, Table *VAR_1, StkId VAR_2) {
  unsigned int VAR_3;
  if (FUNC_12(VAR_2)) return 0;
  VAR_3 = FUNC_0(VAR_2);
  if (VAR_3 != 0 && VAR_3 <= VAR_1->sizearray)
    return VAR_3;
  else {
    int VAR_4;
    Node *VAR_5 = FUNC_10(VAR_1, VAR_2);
    for (;;) {

      if (FUNC_9(FUNC_4(VAR_5), VAR_2) ||
            (FUNC_11(FUNC_4(VAR_5)) && FUNC_7(VAR_2) &&
             FUNC_2(FUNC_4(VAR_5)) == FUNC_3(VAR_2))) {
        VAR_3 = FUNC_1(VAR_5 - FUNC_6(VAR_1, 0));

        return (VAR_3 + 1) + VAR_1->sizearray;
      }
      VAR_4 = FUNC_5(VAR_5);
      if (VAR_4 == 0)
        FUNC_8(VAR_0, "invalid key to 'next'");
      else VAR_5 += VAR_4;
    }
  }
}
