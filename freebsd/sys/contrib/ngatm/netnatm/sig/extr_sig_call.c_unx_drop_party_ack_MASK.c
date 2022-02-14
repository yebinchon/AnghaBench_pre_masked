
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_13__ TYPE_7__ ;
typedef struct TYPE_12__ TYPE_3__ ;
typedef struct TYPE_11__ TYPE_2__ ;
typedef struct TYPE_10__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct TYPE_13__ {int flag; int epref; } ;
struct uni_drop_party_ack {TYPE_7__ epref; int cause; } ;
struct TYPE_10__ {int act; int cref; } ;
struct TYPE_11__ {TYPE_1__ hdr; struct uni_drop_party_ack drop_party_ack; } ;
struct uni_all {TYPE_2__ u; } ;
struct party {int state; } ;
struct call {TYPE_3__* uni; int cstate; } ;
struct TYPE_12__ {int cause; } ;


 scalar_t__ FUNC_0 (TYPE_7__) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_2 (struct uni_all*) ;







 int FUNC_3 (struct call*) ;
 int FUNC_4 (struct call*,int *,int) ;
 int FUNC_5 (int ) ;
 int FUNC_6 (struct call*,struct uni_all*,int ,TYPE_7__*,int) ;
 int FUNC_7 (struct party*,int ,int ,struct uni_msg*,struct uni_all*) ;
 struct party* FUNC_8 (struct call*,int ,int ) ;
 int FUNC_9 (struct uni_msg*) ;
 int FUNC_10 (TYPE_3__*,int *,int ,TYPE_7__*,int ) ;
 int FUNC_11 (TYPE_3__*,int ) ;
 int FUNC_12 (TYPE_3__*) ;
 int FUNC_13 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_14(struct call *VAR_5, struct uni_msg *VAR_6, struct uni_all *VAR_7,
    int VAR_8)
{
 struct party *VAR_9;
 struct uni_drop_party_ack *VAR_10 = &VAR_7->u.drop_party_ack;

 if (FUNC_0(VAR_7->u.drop_party_ack.epref)) {
  VAR_9 = FUNC_8(VAR_5, VAR_10->epref.epref, VAR_10->epref.flag);
  if (VAR_9 != ((void*)0)) {
   FUNC_4(VAR_5, &VAR_10->cause, 1);
   FUNC_13(VAR_5->uni);
   switch (FUNC_11(VAR_5->uni, VAR_7->u.hdr.act)) {

     case 134:
    goto clear;

     case 130:
     case 131:
    FUNC_10(VAR_5->uni,
        &VAR_7->u.hdr.cref, FUNC_5(VAR_5->cstate),
        &VAR_10->epref, VAR_9->state);
     case 133:
    goto ignore;

     case 129:
    FUNC_10(VAR_5->uni,
        &VAR_7->u.hdr.cref, FUNC_5(VAR_5->cstate),
        &VAR_10->epref, VAR_4);
     case 128:
     case 132:
    break;
   }
   if (VAR_8) {
    FUNC_7(VAR_9, VAR_0, 0, VAR_6, VAR_7);
    return;
   }
   FUNC_6(VAR_5, VAR_7, VAR_3,
       &VAR_10->epref, -1);
  }
  goto ignore;
 }




 (void)FUNC_11(VAR_5->uni, VAR_7->u.hdr.act);
 FUNC_1(VAR_5->uni->cause, VAR_2, VAR_1);

  clear:
 FUNC_12(VAR_5->uni);
 FUNC_3(VAR_5);
 FUNC_9(VAR_6);
 FUNC_2(VAR_7);
 return;

  ignore:
 FUNC_9(VAR_6);
 FUNC_2(VAR_7);
}
