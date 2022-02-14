
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int u_int ;
struct uni_ie_epref {int flag; int epref; } ;
struct TYPE_6__ {int epstate; int epref; int cause; int callstate; } ;
struct TYPE_5__ {scalar_t__ act; int cref; } ;
struct TYPE_7__ {TYPE_2__ status; TYPE_1__ hdr; } ;
struct uni_all {TYPE_3__ u; int mtype; } ;
struct party {int state; } ;
struct call {scalar_t__ cstate; TYPE_4__* uni; } ;
struct TYPE_8__ {int cause; } ;


 int FUNC_0 (int ,int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ FUNC_1 (struct uni_ie_epref) ;
 int FUNC_2 (int ,int ) ;
 int FUNC_3 (int ,int ,int ) ;
 int FUNC_4 (int ,int ,int) ;
 int FUNC_5 (int ,int) ;
 int FUNC_6 (struct uni_all*,int ,int *) ;
 struct uni_all* FUNC_7 () ;
 int VAR_4 ;
 int VAR_5 ;
 int FUNC_8 (struct uni_all*) ;
 scalar_t__ VAR_6 ;
 scalar_t__ VAR_7 ;
 int VAR_8 ;
 int FUNC_9 (struct call*) ;
 int FUNC_10 (scalar_t__) ;
 struct party* FUNC_11 (struct call*,struct uni_ie_epref*) ;
 int FUNC_12 (struct uni_all*,TYPE_4__*) ;

void
FUNC_13(struct call *VAR_9, struct uni_all *VAR_10, u_int VAR_11,
    struct uni_ie_epref *VAR_12, int VAR_13)
{
 struct uni_all *VAR_14;
 struct party *VAR_15;

 if ((VAR_10->u.hdr.act == VAR_6 &&
     (VAR_9->cstate == VAR_2 ||
      VAR_9->cstate == VAR_3 ||
      VAR_9->cstate == VAR_0 ||
      VAR_9->cstate == VAR_1)) ||
     VAR_10->u.hdr.act == VAR_7)
  return;

 FUNC_3(VAR_9->uni->cause, VAR_4, VAR_11);
 FUNC_0(VAR_9->uni->cause, VAR_10->mtype);

 if (VAR_10->u.hdr.act == VAR_6) {
  FUNC_9(VAR_9);
  return;
 }




 if ((VAR_14 = FUNC_7()) != ((void*)0)) {
  FUNC_6(VAR_14, VAR_8, &VAR_10->u.hdr.cref);
  FUNC_2(VAR_14->u.status.callstate,
      FUNC_10(VAR_9->cstate));
  VAR_14->u.status.cause = VAR_9->uni->cause;

  if (VAR_12 != ((void*)0) && FUNC_1(*VAR_12)) {
   FUNC_4(VAR_14->u.status.epref, VAR_12->epref, !VAR_12->flag);
   if (VAR_13 == -1) {
    VAR_15 = FUNC_11(VAR_9, VAR_12);
    if (VAR_15 == ((void*)0))
     VAR_13 = VAR_5;
    else
     VAR_13 = VAR_15->state;
   }
   FUNC_5(VAR_14->u.status.epstate, VAR_13);
  }
  (void)FUNC_12(VAR_14, VAR_9->uni);

  FUNC_8(VAR_14);
 }
}
