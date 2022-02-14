
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int header_len; } ;
struct TYPE_5__ {scalar_t__ state; } ;
struct xfrm_state {int lock; TYPE_1__ props; TYPE_3__* type; TYPE_2__ km; } ;
struct TYPE_6__ {int (* get_mtu ) (struct xfrm_state*,int) ;} ;


 scalar_t__ VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct xfrm_state*,int) ;

int FUNC_3(struct xfrm_state *VAR_1, int VAR_2)
{
 int VAR_3;

 FUNC_0(&VAR_1->lock);
 if (VAR_1->km.state == VAR_0 &&
     VAR_1->type && VAR_1->type->get_mtu)
  VAR_3 = VAR_1->type->get_mtu(VAR_1, VAR_2);
 else
  VAR_3 = VAR_2 - VAR_1->props.header_len;
 FUNC_1(&VAR_1->lock);
 return VAR_3;
}
