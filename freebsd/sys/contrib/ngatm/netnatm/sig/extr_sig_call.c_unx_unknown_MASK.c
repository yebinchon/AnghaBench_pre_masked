
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct TYPE_5__ {int epref; } ;
struct TYPE_6__ {scalar_t__ act; } ;
struct TYPE_7__ {TYPE_1__ unknown; TYPE_2__ hdr; } ;
struct uni_all {TYPE_3__ u; int mtype; } ;
struct call {TYPE_4__* uni; } ;
struct TYPE_8__ {int cx; int cause; } ;


 int FUNC_0 (int ,int ) ;
 int FUNC_1 (int ,int ,int ) ;
 int VAR_0 ;
 int VAR_1 ;
 int FUNC_2 (struct uni_all*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_3 (struct call*) ;
 int FUNC_4 (struct call*,struct uni_all*,int ,int *,int) ;
 int FUNC_5 (struct uni_msg*,struct uni_all*,int *) ;
 int FUNC_6 (struct uni_msg*) ;

__attribute__((used)) static void
FUNC_7(struct call *VAR_4, struct uni_msg *VAR_5, struct uni_all *VAR_6)
{




 if (VAR_6->u.hdr.act == VAR_2) {
  FUNC_1(VAR_4->uni->cause, VAR_0,
      VAR_1);
  FUNC_0(VAR_4->uni->cause, VAR_6->mtype);
  FUNC_3(VAR_4);
 } else if(VAR_6->u.hdr.act == VAR_3) {
  ;
 } else {
  (void)FUNC_5(VAR_5, VAR_6, &VAR_4->uni->cx);
  FUNC_4(VAR_4, VAR_6, VAR_1,
      &VAR_6->u.unknown.epref, -1);
 }
 FUNC_6(VAR_5);
 FUNC_2(VAR_6);
}
