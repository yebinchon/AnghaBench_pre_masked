
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int nodekind; } ;
typedef TYPE_1__ SmiNode ;






 int FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (TYPE_1__*) ;
 TYPE_1__* FUNC_2 (TYPE_1__*) ;
 TYPE_1__* FUNC_3 (TYPE_1__*) ;

__attribute__((used)) static void
FUNC_4(SmiNode *VAR_0)
{
 SmiNode *VAR_1;

 VAR_1 = VAR_0;
 VAR_0 = FUNC_2(VAR_0);
 while (VAR_0 != ((void*)0)) {
  switch (VAR_0->nodekind) {
    case 128:
    case 131:
   FUNC_0(VAR_0);
   break;
    case 130:
      case 129:
   FUNC_1(VAR_0);
   return;
    default:
   break;
  }
  VAR_0 = FUNC_3(VAR_0);
 }

 FUNC_1(VAR_1);
}
