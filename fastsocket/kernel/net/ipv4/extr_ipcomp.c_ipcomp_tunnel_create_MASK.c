
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {int state; } ;
struct TYPE_8__ {int a4; } ;
struct TYPE_9__ {int flags; TYPE_3__ saddr; int mode; int family; } ;
struct TYPE_6__ {int a4; } ;
struct TYPE_7__ {TYPE_1__ daddr; int spi; int proto; } ;
struct xfrm_state {TYPE_5__ km; int tunnel_users; int mark; TYPE_4__ props; int sel; TYPE_2__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int) ;
 scalar_t__ FUNC_2 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_3 (int *) ;
 int FUNC_4 (struct xfrm_state*) ;

__attribute__((used)) static struct xfrm_state *FUNC_5(struct xfrm_state *VAR_4)
{
 struct xfrm_state *VAR_5;

 VAR_5 = FUNC_3(&VAR_3);
 if (VAR_5 == ((void*)0))
  goto out;

 VAR_5->id.proto = VAR_1;
 VAR_5->id.spi = VAR_4->props.saddr.a4;
 VAR_5->id.daddr.a4 = VAR_4->id.daddr.a4;
 FUNC_1(&VAR_5->sel, &VAR_4->sel, sizeof(VAR_5->sel));
 VAR_5->props.family = VAR_0;
 VAR_5->props.mode = VAR_4->props.mode;
 VAR_5->props.saddr.a4 = VAR_4->props.saddr.a4;
 VAR_5->props.flags = VAR_4->props.flags;
 FUNC_1(&VAR_5->mark, &VAR_4->mark, sizeof(VAR_5->mark));

 if (FUNC_2(VAR_5))
  goto error;

 FUNC_0(&VAR_5->tunnel_users, 1);
out:
 return VAR_5;

error:
 VAR_5->km.state = VAR_2;
 FUNC_4(VAR_5);
 VAR_5 = ((void*)0);
 goto out;
}
