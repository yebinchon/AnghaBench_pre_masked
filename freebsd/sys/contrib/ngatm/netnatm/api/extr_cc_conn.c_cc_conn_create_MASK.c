
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ccdata {int log; int orphaned_conns; } ;
struct ccconn {struct ccdata* cc; int parties; int * port; int state; } ;


 int VAR_0 ;
 struct ccconn* FUNC_0 (int) ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,struct ccconn*,int ) ;
 int FUNC_3 (struct ccconn*,char*,char*) ;
 int VAR_2 ;

struct ccconn *
FUNC_4(struct ccdata *VAR_3)
{
 struct ccconn *VAR_4;

 VAR_4 = FUNC_0(sizeof(*VAR_4));
 if (VAR_4 == ((void*)0))
  return (((void*)0));

 VAR_4->state = VAR_1;
 VAR_4->port = ((void*)0);
 VAR_4->cc = VAR_3;
 FUNC_1(&VAR_4->parties);

 FUNC_2(&VAR_3->orphaned_conns, VAR_4, VAR_2);

 if (VAR_4->cc->log & VAR_0)
  FUNC_3(VAR_4, "created %s", "orphaned");

 return (VAR_4);
}
