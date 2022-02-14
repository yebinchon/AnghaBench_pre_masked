
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct property {int expr; } ;
struct TYPE_2__ {int sym; } ;


 int VAR_0 ;



 TYPE_1__* VAR_1 ;
 int FUNC_0 (int ) ;
 int VAR_2 ;
 int FUNC_1 (char*) ;
 struct property* FUNC_2 (int ,int ) ;
 int VAR_3 ;
 int FUNC_3 (char*) ;

void FUNC_4(int VAR_4, char *VAR_5)
{
 struct property *VAR_6;

 switch (VAR_4) {
 case 128:
  VAR_6 = FUNC_2(VAR_0, VAR_2);
  VAR_6->expr = FUNC_0(VAR_1->sym);
  break;
 case 130:
  if (!VAR_3)
   VAR_3 = VAR_1->sym;
  else if (VAR_3 != VAR_1->sym)
   FUNC_3("trying to redefine defconfig symbol");
  break;
 case 129:
  FUNC_1(VAR_5);
  break;
 }
}
