
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct uni_msg {int dummy; } ;
struct TYPE_4__ {int act; } ;
struct TYPE_5__ {TYPE_1__ hdr; } ;
struct uni_all {TYPE_2__ u; } ;
struct call {TYPE_3__* uni; } ;
struct TYPE_6__ {int cx; } ;


 int FUNC_0 (struct uni_all*) ;
 int FUNC_1 (struct uni_msg*,struct uni_all*,int *) ;
 int FUNC_2 (struct uni_msg*) ;
 int FUNC_3 (struct call*,struct uni_all*) ;
 int FUNC_4 (TYPE_3__*,int ) ;

__attribute__((used)) static void
FUNC_5(struct call *VAR_0, struct uni_msg *VAR_1, struct uni_all *VAR_2)
{

 (void)FUNC_1(VAR_1, VAR_2, &VAR_0->uni->cx);
 (void)FUNC_4(VAR_0->uni, VAR_2->u.hdr.act);

 FUNC_3(VAR_0, VAR_2);

 FUNC_2(VAR_1);
 FUNC_0(VAR_2);
}
