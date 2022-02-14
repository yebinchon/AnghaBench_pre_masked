
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int peer; int idev; } ;
struct TYPE_4__ {TYPE_1__ rt; } ;
struct xfrm_dst {TYPE_2__ u; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 int FUNC_1 (int ) ;
 scalar_t__ FUNC_2 (int ) ;
 int FUNC_3 (struct xfrm_dst*) ;

__attribute__((used)) static void FUNC_4(struct dst_entry *VAR_0)
{
 struct xfrm_dst *VAR_1 = (struct xfrm_dst *)VAR_0;

 if (FUNC_2(VAR_1->u.rt.idev))
  FUNC_0(VAR_1->u.rt.idev);
 if (FUNC_2(VAR_1->u.rt.peer))
  FUNC_1(VAR_1->u.rt.peer);
 FUNC_3(VAR_1);
}
