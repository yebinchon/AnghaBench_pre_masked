
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int lua_Number ;
struct TYPE_6__ {int nval; } ;
struct TYPE_7__ {TYPE_1__ u; } ;
typedef TYPE_2__ expdesc ;
typedef scalar_t__ OpCode ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 int FUNC_0 (TYPE_2__*) ;
 int FUNC_1 (scalar_t__,int,int) ;

__attribute__((used)) static int FUNC_2 (OpCode VAR_5, expdesc *VAR_6, expdesc *VAR_7) {
  lua_Number VAR_8;
  if (!FUNC_0(VAR_6) || !FUNC_0(VAR_7)) return 0;
  if ((VAR_5 == VAR_3 || VAR_5 == VAR_4) && VAR_7->u.nval == 0)
    return 0;



  if (VAR_5 == VAR_3 && VAR_6->u.nval == VAR_0 && VAR_7->u.nval == -1)
    return 0;
  VAR_8 = FUNC_1(VAR_5 - VAR_2 + VAR_1, VAR_6->u.nval, VAR_7->u.nval);
  VAR_6->u.nval = VAR_8;
  return 1;
}
