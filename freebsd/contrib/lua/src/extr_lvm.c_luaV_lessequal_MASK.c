
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_7__ {TYPE_1__* ci; } ;
typedef TYPE_2__ lua_State ;
struct TYPE_6__ {int callstatus; } ;
typedef int TValue ;


 int VAR_0 ;
 int FUNC_0 (int const*,int const*) ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_1 (int ,int ) ;
 int FUNC_2 (TYPE_2__*,int const*,int const*) ;
 int FUNC_3 (TYPE_2__*,int const*,int const*,int ) ;
 int FUNC_4 (int const*) ;
 scalar_t__ FUNC_5 (int const*) ;
 scalar_t__ FUNC_6 (int const*) ;

int FUNC_7 (lua_State *VAR_3, const TValue *VAR_4, const TValue *VAR_5) {
  int VAR_6;
  if (FUNC_5(VAR_4) && FUNC_5(VAR_5))
    return FUNC_0(VAR_4, VAR_5);
  else if (FUNC_6(VAR_4) && FUNC_6(VAR_5))
    return FUNC_1(FUNC_4(VAR_4), FUNC_4(VAR_5)) <= 0;
  else if ((VAR_6 = FUNC_3(VAR_3, VAR_4, VAR_5, VAR_1)) >= 0)
    return VAR_6;
  else {
    VAR_3->ci->callstatus |= VAR_0;
    VAR_6 = FUNC_3(VAR_3, VAR_5, VAR_4, VAR_2);
    VAR_3->ci->callstatus ^= VAR_0;
    if (VAR_6 < 0)
      FUNC_2(VAR_3, VAR_4, VAR_5);
    return !VAR_6;
  }
}
