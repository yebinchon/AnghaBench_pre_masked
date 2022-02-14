
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_15__ TYPE_8__ ;
typedef struct TYPE_14__ TYPE_5__ ;
typedef struct TYPE_13__ TYPE_4__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


typedef int u_int ;
struct uni_msg {int dummy; } ;
struct TYPE_12__ {int cause; int callstate; int epstate; int epref; } ;
struct TYPE_15__ {int flag; int epref; } ;
struct TYPE_11__ {TYPE_8__ epref; } ;
struct TYPE_10__ {int act; } ;
struct TYPE_13__ {TYPE_3__ status; TYPE_2__ status_enq; TYPE_1__ hdr; } ;
struct uni_all {TYPE_4__ u; } ;
struct party {int state; } ;
struct call {scalar_t__ type; TYPE_5__* uni; int cstate; int mine; int cref; } ;
struct TYPE_14__ {int cx; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_0 (TYPE_8__) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int ,int ,int ) ;
 int FUNC_3 (int ,int ,int) ;
 int FUNC_4 (int ,int ) ;
 int FUNC_5 (struct uni_all*,int ,int ,int) ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_6 (struct uni_all*) ;
 int VAR_5 ;







 int FUNC_7 (struct call*) ;
 int FUNC_8 (int ) ;
 int FUNC_9 (struct uni_all*,int ,int) ;
 int FUNC_10 (struct uni_msg*,struct uni_all*,int *) ;
 struct party* FUNC_11 (struct call*,TYPE_8__*) ;
 int FUNC_12 (struct uni_msg*) ;
 int FUNC_13 (struct uni_all*,TYPE_5__*) ;
 int FUNC_14 (TYPE_5__*,int ) ;
 int FUNC_15 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_16(struct call *VAR_6, struct uni_msg *VAR_7, struct uni_all *VAR_8)
{
 struct party *VAR_9 = ((void*)0);
 u_int VAR_10, VAR_11;




 (void)FUNC_10(VAR_7, VAR_8, &VAR_6->uni->cx);

 switch (FUNC_14(VAR_6->uni, VAR_8->u.hdr.act)) {

   case 134:
  FUNC_15(VAR_6->uni);
  FUNC_7(VAR_6);
  FUNC_12(VAR_7);
  FUNC_6(VAR_8);
    return;

   case 130:
   case 131:
   case 129:
   case 128:
   case 133:
   case 132:
    break;
 }

 FUNC_12(VAR_7);

 if ((VAR_6->type == VAR_1 || VAR_6->type == VAR_0) &&
     FUNC_0(VAR_8->u.status_enq.epref)) {
  VAR_9 = FUNC_11(VAR_6, &VAR_8->u.status_enq.epref);

  VAR_10 = VAR_8->u.status_enq.epref.epref;
  VAR_11 = VAR_8->u.status_enq.epref.flag;
  FUNC_9(VAR_8, 0, sizeof(*VAR_8));
  FUNC_3(VAR_8->u.status.epref, VAR_10, !VAR_11);

  if (VAR_9 != ((void*)0))
   FUNC_4(VAR_8->u.status.epstate, VAR_9->state);
  else
   FUNC_4(VAR_8->u.status.epstate, VAR_4);
 } else
  FUNC_9(VAR_8, 0, sizeof(*VAR_8));


 FUNC_5(VAR_8, VAR_5, VAR_6->cref, !VAR_6->mine);
 FUNC_1(VAR_8->u.status.callstate, FUNC_8(VAR_6->cstate));
 FUNC_2(VAR_8->u.status.cause, VAR_2, VAR_3);
 (void)FUNC_13(VAR_8, VAR_6->uni);
 FUNC_6(VAR_8);
}
