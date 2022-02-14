
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccuser {int state; struct ccconn* accepted; int connq; } ;
struct ccconn {int state; } ;


 int VAR_0 ;
 struct ccconn* FUNC_0 (int *) ;





__attribute__((used)) static struct ccconn *
FUNC_1(struct ccuser *VAR_1)
{

 switch (VAR_1->state) {

   case 128:
   case 130:
   case 131:
  return (FUNC_0(&VAR_1->connq));

   case 129:





  if (VAR_1->accepted != ((void*)0) &&
      VAR_1->accepted->state == VAR_0)
   return (VAR_1->accepted);


   default:
  return (((void*)0));
 }
}
