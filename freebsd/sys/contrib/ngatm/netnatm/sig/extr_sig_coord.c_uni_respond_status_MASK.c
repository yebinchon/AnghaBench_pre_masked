
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uni_cref {int dummy; } ;
struct TYPE_3__ {int cause; int callstate; } ;
struct TYPE_4__ {TYPE_1__ status; } ;
struct uni_all {TYPE_2__ u; } ;
struct uni {int dummy; } ;
typedef enum uni_cause { ____Placeholder_uni_cause } uni_cause ;
typedef enum uni_callstate { ____Placeholder_uni_callstate } uni_callstate ;


 int FUNC_0 (int ,int) ;
 int FUNC_1 (int ,int ,int) ;
 int FUNC_2 (struct uni_all*,int ,struct uni_cref*) ;
 struct uni_all* FUNC_3 () ;
 int VAR_0 ;
 int FUNC_4 (struct uni_all*) ;
 int VAR_1 ;
 int FUNC_5 (struct uni_all*,struct uni*) ;

void
FUNC_6(struct uni *VAR_2, struct uni_cref *VAR_3,
    enum uni_callstate VAR_4, enum uni_cause VAR_5)
{
 struct uni_all *VAR_6;

 if ((VAR_6 = FUNC_3()) == ((void*)0))
  return;

 FUNC_2(VAR_6, VAR_1, VAR_3);
 FUNC_0(VAR_6->u.status.callstate, VAR_4);
 FUNC_1(VAR_6->u.status.cause, VAR_0, VAR_5);

 (void)FUNC_5(VAR_6, VAR_2);

 FUNC_4(VAR_6);
}
