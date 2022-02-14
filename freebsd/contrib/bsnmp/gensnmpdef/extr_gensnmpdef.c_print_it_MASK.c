
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int u_int ;
struct TYPE_8__ {int nodekind; } ;
typedef TYPE_1__ SmiNode ;
 int FUNC_0 (int,char*,int) ;
 int FUNC_1 (TYPE_1__*,int ) ;
 int FUNC_2 (TYPE_1__*,int ) ;
 int FUNC_3 (TYPE_1__*,int ) ;
 int FUNC_4 (TYPE_1__*,int ) ;
 int FUNC_5 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_6(SmiNode *VAR_0, u_int VAR_1)
{
 switch (VAR_0->nodekind) {

   case 131:
  FUNC_1(VAR_0, VAR_1);
  break;

   case 129:
  FUNC_3(VAR_0, VAR_1);
  break;

   case 128:
  FUNC_4(VAR_0, VAR_1);
  break;

   case 133:
   case 132:
  FUNC_5(VAR_0);
  break;

   case 130:
  FUNC_2(VAR_0, VAR_1);
  break;

   default:
  FUNC_0(1, "cannot handle %u nodes", VAR_0->nodekind);
 }
}
