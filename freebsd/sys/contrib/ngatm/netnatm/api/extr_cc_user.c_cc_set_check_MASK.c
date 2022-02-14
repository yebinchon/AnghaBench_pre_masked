
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccuser {int state; int connq; } ;
struct ccconn {int dummy; } ;


 struct ccconn* FUNC_0 (int *) ;



__attribute__((used)) static struct ccconn *
FUNC_1(struct ccuser *VAR_0)
{
 switch(VAR_0->state) {

   case 128:
   case 129:
  return (FUNC_0(&VAR_0->connq));

   default:
  return (((void*)0));
 }
}
