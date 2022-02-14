
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int rt6i_idev; } ;
struct TYPE_4__ {TYPE_1__ rt6; } ;
struct xfrm_dst {TYPE_2__ u; } ;
struct dst_entry {int dummy; } ;


 int FUNC_0 (int ) ;
 scalar_t__ FUNC_1 (int ) ;
 int FUNC_2 (struct xfrm_dst*) ;

__attribute__((used)) static void FUNC_3(struct dst_entry *VAR_0)
{
 struct xfrm_dst *VAR_1 = (struct xfrm_dst *)VAR_0;

 if (FUNC_1(VAR_1->u.rt6.rt6i_idev))
  FUNC_0(VAR_1->u.rt6.rt6i_idev);
 FUNC_2(VAR_1);
}
