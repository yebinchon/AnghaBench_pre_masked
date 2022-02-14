
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef void* u_int ;
struct TYPE_4__ {void* epref; void* flag; } ;
struct ccparty {struct ccconn* conn; TYPE_2__ epref; int state; } ;
struct ccconn {TYPE_1__* cc; int parties; } ;
struct TYPE_3__ {int log; } ;


 int VAR_0 ;
 struct ccparty* FUNC_0 (int) ;
 int FUNC_1 (TYPE_2__) ;
 int FUNC_2 (int *,struct ccparty*,int ) ;
 int VAR_1 ;
 int FUNC_3 (struct ccparty*,char*,void*,void*) ;
 int VAR_2 ;

struct ccparty *
FUNC_4(struct ccconn *VAR_3, u_int VAR_4, u_int VAR_5)
{
 struct ccparty *VAR_6;

 VAR_6 = FUNC_0(sizeof(*VAR_6));
 if (VAR_6 == ((void*)0))
  return (((void*)0));

 VAR_6->conn = VAR_3;
 VAR_6->state = VAR_1;
 FUNC_1(VAR_6->epref);
 VAR_6->epref.flag = VAR_5;
 VAR_6->epref.epref = VAR_4;
 FUNC_2(&VAR_3->parties, VAR_6, VAR_2);

 if (VAR_6->conn->cc->log & VAR_0)
  FUNC_3(VAR_6, "created %u.%u", VAR_5, VAR_4);

 return (VAR_6);
}
