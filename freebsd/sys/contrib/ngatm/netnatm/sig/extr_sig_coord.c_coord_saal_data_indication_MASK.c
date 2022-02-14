
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct TYPE_7__ {scalar_t__ cref; } ;
struct TYPE_5__ {TYPE_3__ cref; } ;
struct TYPE_6__ {TYPE_1__ hdr; } ;
struct uni_all {TYPE_2__ u; } ;
struct TYPE_8__ {scalar_t__ q2932; } ;
struct uni {TYPE_4__ cx; int cause; } ;
struct call {scalar_t__ type; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 struct uni_all* FUNC_0 () ;
 int VAR_3 ;
 int FUNC_1 (struct uni_all*) ;
 int FUNC_2 (struct uni*,int ,int,char*) ;
 int FUNC_3 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_4 (struct call*,struct uni_msg*,struct uni_all*) ;
 int FUNC_5 (struct uni*,struct uni_msg*,struct uni_all*) ;
 int FUNC_6 (struct uni*,struct uni_msg*,struct uni_all*) ;
 int FUNC_7 (struct uni*,struct uni_msg*,struct uni_all*) ;
 int FUNC_8 (int *,int ,int) ;
 scalar_t__ FUNC_9 (struct uni_msg*,struct uni_all*,TYPE_4__*) ;
 struct call* FUNC_10 (struct uni*,TYPE_3__*) ;
 int FUNC_11 (struct uni_msg*) ;

__attribute__((used)) static void
FUNC_12(struct uni *VAR_4, struct uni_msg *VAR_5)
{
 struct uni_all *VAR_6;
 struct call *VAR_7;

 FUNC_8(&VAR_4->cause, 0, sizeof(VAR_4->cause));
 if ((VAR_6 = FUNC_0()) == ((void*)0)) {
  FUNC_11(VAR_5);
  return;
 }
 if (FUNC_9(VAR_5, VAR_6, &VAR_4->cx)) {
  FUNC_2(VAR_4, VAR_3, 2, "bogus message - ignored");
  FUNC_11(VAR_5);
  FUNC_1(VAR_6);
  return;
 }
 if (VAR_6->u.hdr.cref.cref == VAR_1) {
  if (VAR_4->cx.q2932) {
   FUNC_5(VAR_4, VAR_5, VAR_6);
  } else {
   FUNC_2(VAR_4, VAR_3, 2, "dummy cref - ignored");
   FUNC_1(VAR_6);
   FUNC_11(VAR_5);
  }
  return;
 }

 if (VAR_6->u.hdr.cref.cref == VAR_2)
  FUNC_6(VAR_4, VAR_5, VAR_6);
 else if ((VAR_7 = FUNC_10(VAR_4, &VAR_6->u.hdr.cref)) == ((void*)0))
  FUNC_7(VAR_4, VAR_5, VAR_6);
 else if (VAR_7->type == VAR_0)
  FUNC_4(VAR_7, VAR_5, VAR_6);
 else
  FUNC_3(VAR_7, VAR_5, VAR_6);
}
