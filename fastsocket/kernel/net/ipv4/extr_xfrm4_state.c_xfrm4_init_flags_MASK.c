
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_2__ ;
typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int flags; } ;
struct xfrm_state {TYPE_1__ props; } ;
struct TYPE_4__ {scalar_t__ no_pmtu_disc; } ;


 int VAR_0 ;
 TYPE_2__ VAR_1 ;

__attribute__((used)) static int FUNC_0(struct xfrm_state *VAR_2)
{
 if (VAR_1.no_pmtu_disc)
  VAR_2->props.flags |= VAR_0;
 return 0;
}
