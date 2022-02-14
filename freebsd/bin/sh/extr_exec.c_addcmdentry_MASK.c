
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct TYPE_2__ {int func; } ;
struct tblentry {scalar_t__ cmdtype; int special; TYPE_1__ param; } ;
struct cmdentry {scalar_t__ cmdtype; int special; TYPE_1__ u; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 struct tblentry* FUNC_0 (char const*,int) ;
 int FUNC_1 (int ) ;

__attribute__((used)) static void
FUNC_2(const char *VAR_3, struct cmdentry *VAR_4)
{
 struct tblentry *VAR_5;

 VAR_1;
 VAR_5 = FUNC_0(VAR_3, 1);
 if (VAR_5->cmdtype == VAR_0) {
  FUNC_1(VAR_5->param.func);
 }
 VAR_5->cmdtype = VAR_4->cmdtype;
 VAR_5->param = VAR_4->u;
 VAR_5->special = VAR_4->special;
 VAR_2;
}
