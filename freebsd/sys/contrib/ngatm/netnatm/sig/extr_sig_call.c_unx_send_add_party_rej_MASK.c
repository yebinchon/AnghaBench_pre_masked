
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int cause; } ;
struct TYPE_5__ {TYPE_1__ add_party_rej; } ;
struct uni_all {TYPE_2__ u; } ;
struct call {scalar_t__ cstate; TYPE_3__* uni; } ;
struct TYPE_6__ {int cause; } ;


 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int FUNC_0 (struct uni_all*) ;
 int FUNC_1 (struct call*) ;
 scalar_t__ FUNC_2 (struct call*,int) ;
 int FUNC_3 (struct uni_all*,TYPE_3__*) ;

__attribute__((used)) static void
FUNC_4(struct call *VAR_2, struct uni_all *VAR_3)
{

 if (FUNC_2(VAR_2, 2) == 0) {
  if (VAR_2->cstate != VAR_1 && VAR_2->cstate != VAR_0) {
   VAR_2->uni->cause = VAR_3->u.add_party_rej.cause;
   FUNC_1(VAR_2);
  }
 } else
  (void)FUNC_3(VAR_3, VAR_2->uni);
 FUNC_0(VAR_3);
}
