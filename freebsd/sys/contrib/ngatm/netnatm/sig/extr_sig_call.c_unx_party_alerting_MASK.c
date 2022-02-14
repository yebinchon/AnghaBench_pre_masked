
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_20__ TYPE_8__ ;
typedef struct TYPE_19__ TYPE_5__ ;
typedef struct TYPE_18__ TYPE_4__ ;
typedef struct TYPE_17__ TYPE_3__ ;
typedef struct TYPE_16__ TYPE_2__ ;
typedef struct TYPE_15__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct TYPE_15__ {int act; } ;
struct TYPE_20__ {scalar_t__ flag; int epref; TYPE_1__ h; } ;
struct TYPE_17__ {TYPE_8__ epref; } ;
struct TYPE_16__ {int cref; int act; } ;
struct TYPE_18__ {TYPE_3__ party_alerting; TYPE_2__ hdr; } ;
struct uni_all {TYPE_4__ u; } ;
struct party {int state; } ;
struct call {int cstate; TYPE_5__* uni; } ;
struct TYPE_19__ {int cx; } ;


 scalar_t__ FUNC_0 (TYPE_8__) ;
 int FUNC_1 (TYPE_8__) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct uni_all*) ;
 int VAR_5 ;
 int VAR_6 ;
 int FUNC_3 (int *,int ,int ,int ) ;







 int FUNC_4 (struct call*) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct call*,TYPE_8__*,int ) ;
 int FUNC_7 (struct call*,struct uni_all*,int ,TYPE_8__*,int ) ;
 int FUNC_8 (struct party*,int ,int ,struct uni_msg*,struct uni_all*) ;
 struct party* FUNC_9 (struct call*,int ,int) ;
 int FUNC_10 (TYPE_5__*,TYPE_8__*) ;
 int FUNC_11 (struct uni_msg*) ;
 int FUNC_12 (TYPE_5__*,int *,int ,TYPE_8__*,int ) ;
 int FUNC_13 (TYPE_5__*,int ) ;
 int FUNC_14 (TYPE_5__*) ;

__attribute__((used)) static void
FUNC_15(struct call *VAR_7, struct uni_msg *VAR_8, struct uni_all *VAR_9,
    int VAR_10)
{
 struct party *VAR_11 = ((void*)0);

 if (FUNC_0(VAR_9->u.party_alerting.epref)) {
  if (VAR_9->u.party_alerting.epref.flag == 0) {
   FUNC_1(VAR_9->u.party_alerting.epref);
   (void)FUNC_3(&VAR_7->uni->cx, VAR_6,
       VAR_9->u.party_alerting.epref.h.act, VAR_5);
  } else {
       VAR_11 = FUNC_9(VAR_7, VAR_9->u.party_alerting.epref.epref, 1);
   if (VAR_11 == ((void*)0)) {
    FUNC_6(VAR_7,
        &VAR_9->u.party_alerting.epref,
        VAR_1);
    goto ignore;
   }
  }
 }
 FUNC_10(VAR_7->uni, &VAR_9->u.party_alerting.epref);

 switch (FUNC_13(VAR_7->uni, VAR_9->u.hdr.act)) {

   case 134:
  FUNC_14(VAR_7->uni);
  FUNC_4(VAR_7);
  goto ignore;

   case 130:
   case 131:
   report:
  FUNC_12(VAR_7->uni, &VAR_9->u.hdr.cref,
      FUNC_5(VAR_7->cstate), &VAR_9->u.party_alerting.epref,
      VAR_11 ? VAR_11->state : VAR_4);
   case 133:
  goto ignore;

   case 129:
   case 128:
  FUNC_12(VAR_7->uni, &VAR_9->u.hdr.cref,
      FUNC_5(VAR_7->cstate), &VAR_9->u.party_alerting.epref,
      VAR_11 ? VAR_3 : VAR_4);
  if (!FUNC_0(VAR_9->u.party_alerting.epref))

   goto ignore;
  break;

   case 132:
  if (!FUNC_0(VAR_9->u.party_alerting.epref))



   goto report;
  break;
 }
 if (VAR_10) {

  FUNC_8(VAR_11, VAR_0, 0, VAR_8, VAR_9);
  return;
 }
 if (VAR_11 == ((void*)0))

  FUNC_6(VAR_7, &VAR_9->u.party_alerting.epref,
      VAR_1);
 else
  FUNC_7(VAR_7, VAR_9, VAR_2,
      &VAR_9->u.party_alerting.epref, VAR_11->state);

  ignore:
 FUNC_11(VAR_8);
 FUNC_2(VAR_9);
}
