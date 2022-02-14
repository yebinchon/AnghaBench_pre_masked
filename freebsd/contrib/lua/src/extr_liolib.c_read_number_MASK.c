
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {size_t n; char* buff; int * f; int c; } ;
typedef TYPE_1__ RN ;
typedef int FILE ;


 scalar_t__ FUNC_0 (int ) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 char FUNC_4 () ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,char*) ;
 scalar_t__ FUNC_7 (TYPE_1__*,int) ;
 scalar_t__ FUNC_8 (TYPE_1__*,char*) ;
 int FUNC_9 (int ,int *) ;

__attribute__((used)) static int FUNC_10 (lua_State *VAR_0, FILE *VAR_1) {
  RN VAR_2;
  int VAR_3 = 0;
  int VAR_4 = 0;
  char VAR_5[2];
  VAR_2.f = VAR_1; VAR_2.n = 0;
  VAR_5[0] = FUNC_4();
  VAR_5[1] = '.';
  FUNC_2(VAR_2.f);
  do { VAR_2.c = FUNC_1(VAR_2.f); } while (FUNC_0(VAR_2.c));
  FUNC_8(&VAR_2, "-+");
  if (FUNC_8(&VAR_2, "00")) {
    if (FUNC_8(&VAR_2, "xX")) VAR_4 = 1;
    else VAR_3 = 1;
  }
  VAR_3 += FUNC_7(&VAR_2, VAR_4);
  if (FUNC_8(&VAR_2, VAR_5))
    VAR_3 += FUNC_7(&VAR_2, VAR_4);
  if (VAR_3 > 0 && FUNC_8(&VAR_2, (VAR_4 ? "pP" : "eE"))) {
    FUNC_8(&VAR_2, "-+");
    FUNC_7(&VAR_2, 0);
  }
  FUNC_9(VAR_2.c, VAR_2.f);
  FUNC_3(VAR_2.f);
  VAR_2.buff[VAR_2.n] = '\0';
  if (FUNC_6(VAR_0, VAR_2.buff))
    return 1;
  else {
   FUNC_5(VAR_0);
   return 0;
  }
}
