
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
struct TYPE_4__ {scalar_t__ matchdepth; char const* src_init; char const* src_end; char const* p_end; scalar_t__ level; int * L; } ;
typedef TYPE_1__ MatchState ;


 scalar_t__ VAR_0 ;
 char* FUNC_0 (char const*,size_t,char const*,size_t) ;
 char* FUNC_1 (int *,int,size_t*) ;
 int FUNC_2 (int *,int,int) ;
 int FUNC_3 (int) ;
 int FUNC_4 (int *,int) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int *,int) ;
 char* FUNC_7 (TYPE_1__*,char const*,char const*) ;
 scalar_t__ FUNC_8 (char const*,size_t) ;
 size_t FUNC_9 (int ,size_t) ;
 int FUNC_10 (TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static int FUNC_11 (lua_State *VAR_1, int VAR_2) {
  size_t VAR_3, VAR_4;
  const char *VAR_5 = FUNC_1(VAR_1, 1, &VAR_3);
  const char *VAR_6 = FUNC_1(VAR_1, 2, &VAR_4);
  size_t VAR_7 = FUNC_9(FUNC_2(VAR_1, 3, 1), VAR_3);
  if (VAR_7 < 1) VAR_7 = 1;
  else if (VAR_7 > VAR_3 + 1) {
    FUNC_5(VAR_1);
    return 1;
  }

  if (VAR_2 && (FUNC_6(VAR_1, 4) || FUNC_8(VAR_6, VAR_4))) {

    const char *VAR_8 = FUNC_0(VAR_5 + VAR_7 - 1, VAR_3 - VAR_7 + 1, VAR_6, VAR_4);
    if (VAR_8) {
      FUNC_4(VAR_1, VAR_8 - VAR_5 + 1);
      FUNC_4(VAR_1, VAR_8 - VAR_5 + VAR_4);
      return 2;
    }
  }
  else {
    MatchState VAR_9;
    const char *VAR_10 = VAR_5 + VAR_7 - 1;
    int VAR_11 = (*VAR_6 == '^');
    if (VAR_11) {
      VAR_6++; VAR_4--;
    }
    VAR_9.L = VAR_1;
    VAR_9.matchdepth = VAR_0;
    VAR_9.src_init = VAR_5;
    VAR_9.src_end = VAR_5 + VAR_3;
    VAR_9.p_end = VAR_6 + VAR_4;
    do {
      const char *VAR_12;
      VAR_9.level = 0;
      FUNC_3(VAR_9.matchdepth == VAR_0);
      if ((VAR_12=FUNC_7(&VAR_9, VAR_10, VAR_6)) != ((void*)0)) {
        if (VAR_2) {
          FUNC_4(VAR_1, VAR_10 - VAR_5 + 1);
          FUNC_4(VAR_1, VAR_12 - VAR_5);
          return FUNC_10(&VAR_9, ((void*)0), 0) + 2;
        }
        else
          return FUNC_10(&VAR_9, VAR_10, VAR_12);
      }
    } while (VAR_10++ < VAR_9.src_end && !VAR_11);
  }
  FUNC_5(VAR_1);
  return 1;
}
