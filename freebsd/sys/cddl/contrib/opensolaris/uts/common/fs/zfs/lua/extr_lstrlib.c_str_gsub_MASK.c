
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


typedef int lua_State ;
typedef int luaL_Buffer ;
struct TYPE_4__ {scalar_t__ matchdepth; char const* src_init; char const* src_end; char const* p_end; scalar_t__ level; int * L; } ;
typedef TYPE_1__ MatchState ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_1__*,int *,char const*,char const*,int) ;
 int FUNC_1 (int *,int ) ;
 int FUNC_2 (int *,char const*,int) ;
 int FUNC_3 (int *,int,int,char*) ;
 int FUNC_4 (int *,int *) ;
 char* FUNC_5 (int *,int,size_t*) ;
 size_t FUNC_6 (int *,int,size_t) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int) ;
 int FUNC_9 (int *,size_t) ;
 int FUNC_10 (int *,int) ;
 char* FUNC_11 (TYPE_1__*,char const*,char const*) ;

__attribute__((used)) static int FUNC_12 (lua_State *VAR_5) {
  size_t VAR_6, VAR_7;
  const char *VAR_8 = FUNC_5(VAR_5, 1, &VAR_6);
  const char *VAR_9 = FUNC_5(VAR_5, 2, &VAR_7);
  int VAR_10 = FUNC_10(VAR_5, 3);
  size_t VAR_11 = FUNC_6(VAR_5, 4, VAR_6+1);
  int VAR_12 = (*VAR_9 == '^');
  size_t VAR_13 = 0;
  MatchState VAR_14;
  luaL_Buffer VAR_15;
  FUNC_3(VAR_5, VAR_10 == VAR_1 || VAR_10 == VAR_2 ||
                   VAR_10 == VAR_0 || VAR_10 == VAR_3, 3,
                      "string/function/table expected");
  FUNC_4(VAR_5, &VAR_15);
  if (VAR_12) {
    VAR_9++; VAR_7--;
  }
  VAR_14.L = VAR_5;
  VAR_14.matchdepth = VAR_4;
  VAR_14.src_init = VAR_8;
  VAR_14.src_end = VAR_8+VAR_6;
  VAR_14.p_end = VAR_9 + VAR_7;
  while (VAR_13 < VAR_11) {
    const char *VAR_16;
    VAR_14.level = 0;
    FUNC_8(VAR_14.matchdepth == VAR_4);
    VAR_16 = FUNC_11(&VAR_14, VAR_8, VAR_9);
    if (VAR_16) {
      VAR_13++;
      FUNC_0(&VAR_14, &VAR_15, VAR_8, VAR_16, VAR_10);
    }
    if (VAR_16 && VAR_16>VAR_8)
      VAR_8 = VAR_16;
    else if (VAR_8 < VAR_14.src_end)
      FUNC_1(&VAR_15, *VAR_8++);
    else break;
    if (VAR_12) break;
  }
  FUNC_2(&VAR_15, VAR_8, VAR_14.src_end-VAR_8);
  FUNC_7(&VAR_15);
  FUNC_9(VAR_5, VAR_13);
  return 2;
}
