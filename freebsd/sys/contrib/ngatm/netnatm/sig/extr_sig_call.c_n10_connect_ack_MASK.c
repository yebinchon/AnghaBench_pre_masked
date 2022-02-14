
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct TYPE_7__ {int cref; int act; } ;
struct TYPE_6__ {TYPE_2__ hdr; } ;
struct uni_all {TYPE_1__ u; } ;
struct call {int cstate; TYPE_3__* uni; } ;
struct TYPE_8__ {int cx; } ;


 int FUNC_0 (struct uni_all*) ;







 int FUNC_1 (struct call*) ;
 int FUNC_2 (int ) ;
 int FUNC_3 (struct uni_msg*,struct uni_all*,int *) ;
 int FUNC_4 (struct uni_msg*) ;
 int FUNC_5 (TYPE_3__*,int *,int ,int *,int ) ;
 int FUNC_6 (TYPE_3__*,int ) ;
 int FUNC_7 (TYPE_3__*) ;

__attribute__((used)) static void
FUNC_8(struct call *VAR_0, struct uni_msg *VAR_1, struct uni_all *VAR_2)
{



 (void)FUNC_3(VAR_1, VAR_2, &VAR_0->uni->cx);

 switch (FUNC_6(VAR_0->uni, VAR_2->u.hdr.act)) {

   case 134:
  FUNC_7(VAR_0->uni);
  FUNC_1(VAR_0);

   case 133:
  FUNC_4(VAR_1);
  FUNC_0(VAR_2);
    return;

   case 130:
   case 131:
   case 129:
   case 128:
  FUNC_5(VAR_0->uni, &VAR_2->u.hdr.cref,
      FUNC_2(VAR_0->cstate), ((void*)0), 0);

   case 132:
  FUNC_4(VAR_1);
  FUNC_0(VAR_2);
    return;
 }
}
