
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct roff {TYPE_1__* last; } ;
struct TYPE_2__ {int tok; int endspan; } ;


 int VAR_0 ;




 int FUNC_0 (int ,int,int,char*) ;
 int FUNC_1 (struct roff*) ;
 int FUNC_2 (struct roff*) ;

__attribute__((used)) static int
FUNC_3(struct roff *VAR_1, int VAR_2, int VAR_3)
{
 if (((void*)0) == VAR_1->last) {
  FUNC_0(VAR_0, VAR_2, VAR_3, "\\}");
  return 0;
 }

 switch (VAR_1->last->tok) {
 case 131:
 case 130:
 case 129:
 case 128:
  break;
 default:
  FUNC_0(VAR_0, VAR_2, VAR_3, "\\}");
  return 0;
 }

 if (VAR_1->last->endspan > -1) {
  FUNC_0(VAR_0, VAR_2, VAR_3, "\\}");
  return 0;
 }

 return FUNC_2(VAR_1) + FUNC_1(VAR_1);
}
