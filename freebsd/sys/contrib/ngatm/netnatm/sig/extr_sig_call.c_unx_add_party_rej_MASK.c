
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_3__ ;
typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct TYPE_8__ {int act; int cref; } ;
struct TYPE_10__ {int flag; int epref; } ;
struct uni_add_party_rej {TYPE_3__ epref; int cause; } ;
struct TYPE_9__ {TYPE_1__ hdr; struct uni_add_party_rej add_party_rej; } ;
struct uni_all {TYPE_2__ u; } ;
struct party {int state; } ;
struct call {int uni; int cstate; } ;


 scalar_t__ FUNC_0 (TYPE_3__) ;
 int FUNC_1 (TYPE_3__) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct uni_all*) ;
 int VAR_2 ;







 int FUNC_3 (struct call*) ;
 int FUNC_4 (int ,TYPE_3__*) ;
 int FUNC_5 (struct call*,int *,int ) ;
 int FUNC_6 (int ) ;
 int FUNC_7 (struct call*,struct uni_all*,int ,TYPE_3__*,int) ;
 int FUNC_8 (struct party*,int ,int ,struct uni_msg*,struct uni_all*) ;
 struct party* FUNC_9 (struct call*,int ,int ) ;
 int FUNC_10 (int ,int ) ;
 int FUNC_11 (struct uni_msg*) ;
 int FUNC_12 (int ,int *,int ,TYPE_3__*,int ) ;
 int FUNC_13 (int ,int ) ;
 int FUNC_14 (int ) ;
 int FUNC_15 (int ) ;

__attribute__((used)) static void
FUNC_16(struct call *VAR_3, struct uni_msg *VAR_4, struct uni_all *VAR_5,
    int VAR_6)
{
 struct uni_add_party_rej *VAR_7 = &VAR_5->u.add_party_rej;
 struct party *VAR_8;

 if (FUNC_0(VAR_7->epref)) {
  VAR_8 = FUNC_9(VAR_3, VAR_7->epref.epref, VAR_7->epref.flag);
  if (VAR_8 == ((void*)0))
   goto ignore;

  if (VAR_6) {
   FUNC_5(VAR_3, &VAR_7->cause, 0);
   FUNC_15(VAR_3->uni);
   switch (FUNC_13(VAR_3->uni, VAR_5->u.hdr.act)) {

     case 134:
    goto clear;

     case 130:
     case 131:
    FUNC_12(VAR_3->uni,
        &VAR_5->u.hdr.cref, FUNC_6(VAR_3->cstate),
        &VAR_7->epref, VAR_8->state);
     case 133:
    goto ignore;

     case 128:
    FUNC_14(VAR_3->uni);
    break;

     case 129:
    FUNC_12(VAR_3->uni,
        &VAR_5->u.hdr.cref, FUNC_6(VAR_3->cstate),
        &VAR_7->epref, VAR_8->state);
     case 132:
    break;
   }
   FUNC_8(VAR_8, VAR_0, 0, VAR_4, VAR_5);
   return;
  }
  FUNC_7(VAR_3, VAR_5, VAR_1,
      &VAR_7->epref, -1);
  return;
 }





 FUNC_4(VAR_3->uni, &VAR_7->epref);
 if (!FUNC_1(VAR_7->epref))
  FUNC_10(VAR_3->uni, VAR_2);
 (void)FUNC_13(VAR_3->uni, VAR_5->u.hdr.act);

  clear:
 FUNC_14(VAR_3->uni);
 FUNC_3(VAR_3);

  ignore:
 FUNC_11(VAR_4);
 FUNC_2(VAR_5);
}
