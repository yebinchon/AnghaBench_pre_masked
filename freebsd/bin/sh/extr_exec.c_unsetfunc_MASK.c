
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; } ;
struct tblentry {scalar_t__ cmdtype; TYPE_1__ param; } ;


 scalar_t__ VAR_0 ;
 struct tblentry* FUNC_0 (char const*,int ) ;
 int FUNC_1 () ;
 int FUNC_2 (int ) ;

int
FUNC_3(const char *VAR_1)
{
 struct tblentry *VAR_2;

 if ((VAR_2 = FUNC_0(VAR_1, 0)) != ((void*)0) && VAR_2->cmdtype == VAR_0) {
  FUNC_2(VAR_2->param.func);
  FUNC_1();
  return (0);
 }
 return (0);
}
