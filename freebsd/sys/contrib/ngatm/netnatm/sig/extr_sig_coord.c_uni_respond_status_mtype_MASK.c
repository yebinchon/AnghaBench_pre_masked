
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


typedef int u_int ;
struct uni_cref {int dummy; } ;
struct TYPE_4__ {int cause; int callstate; } ;
struct TYPE_3__ {TYPE_2__ status; } ;
struct uni_all {TYPE_1__ u; } ;
struct uni {int dummy; } ;
typedef enum uni_cause { ____Placeholder_uni_cause } uni_cause ;
typedef enum uni_callstate { ____Placeholder_uni_callstate } uni_callstate ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (struct uni_all*,int ,struct uni_cref*) ;
 struct uni_all* FUNC_4 () ;
 int VAR_0 ;
 int FUNC_5 (struct uni_all*) ;
 int VAR_1 ;
 int FUNC_6 (struct uni_all*,struct uni*) ;

void
FUNC_7(struct uni *VAR_2, struct uni_cref *VAR_3,
    enum uni_callstate VAR_4, enum uni_cause VAR_5, u_int VAR_6)
{
 struct uni_all *VAR_7;

 if((VAR_7 = FUNC_4()) == ((void*)0))
  return;

 FUNC_3(VAR_7, VAR_1, VAR_3);
 FUNC_1(VAR_7->u.status.callstate, VAR_4);
 FUNC_2(VAR_7->u.status.cause, VAR_0, VAR_5);
 FUNC_0(VAR_7->u.status.cause, VAR_6);

 (void)FUNC_6(VAR_7, VAR_2);

 FUNC_5(VAR_7);
}
