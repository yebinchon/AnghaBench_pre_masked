
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct uni_ie_epref {int flag; int epref; } ;
struct uni_cref {int dummy; } ;
struct TYPE_3__ {int epstate; int epref; int cause; int callstate; } ;
struct TYPE_4__ {TYPE_1__ status; } ;
struct uni_all {TYPE_2__ u; } ;
struct uni {int cause; } ;
typedef enum uni_epstate { ____Placeholder_uni_epstate } uni_epstate ;
typedef enum uni_callstate { ____Placeholder_uni_callstate } uni_callstate ;


 scalar_t__ FUNC_0 (struct uni_ie_epref) ;
 int FUNC_1 (int ,int) ;
 int FUNC_2 (int ,int ,int) ;
 int FUNC_3 (int ,int) ;
 int FUNC_4 (struct uni_all*,int ,struct uni_cref*) ;
 struct uni_all* FUNC_5 () ;
 int FUNC_6 (struct uni_all*) ;
 int VAR_0 ;
 int FUNC_7 (struct uni_all*,struct uni*) ;
 int FUNC_8 (struct uni*) ;

void
FUNC_9(struct uni *VAR_1, struct uni_cref *VAR_2,
    enum uni_callstate VAR_3, struct uni_ie_epref *VAR_4,
    enum uni_epstate VAR_5)
{
 struct uni_all *VAR_6;

 if ((VAR_6 = FUNC_5()) == ((void*)0))
  return;

 FUNC_8(VAR_1);

 FUNC_4(VAR_6, VAR_0, VAR_2);
 FUNC_1(VAR_6->u.status.callstate, VAR_3);
 VAR_6->u.status.cause = VAR_1->cause;
 if (VAR_4 && FUNC_0(*VAR_4)) {
  FUNC_2(VAR_6->u.status.epref, VAR_4->epref, !VAR_4->flag);
  FUNC_3(VAR_6->u.status.epstate, VAR_5);
 }

 FUNC_7(VAR_6, VAR_1);

 FUNC_6(VAR_6);
}
