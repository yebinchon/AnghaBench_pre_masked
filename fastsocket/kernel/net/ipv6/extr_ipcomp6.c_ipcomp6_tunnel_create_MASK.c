
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


typedef int xfrm_address_t ;
struct TYPE_10__ {int state; } ;
struct TYPE_8__ {int * a6; } ;
struct TYPE_9__ {TYPE_3__ saddr; int mode; int family; } ;
struct TYPE_6__ {int * a6; } ;
struct TYPE_7__ {TYPE_1__ daddr; int spi; int proto; } ;
struct xfrm_state {TYPE_5__ km; int tunnel_users; int mark; TYPE_4__ props; int sel; TYPE_2__ id; } ;
struct in6_addr {int dummy; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *,int) ;
 int VAR_3 ;
 int FUNC_1 (int *,int *,int) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_4 (int *) ;
 int FUNC_5 (struct xfrm_state*) ;

__attribute__((used)) static struct xfrm_state *FUNC_6(struct xfrm_state *VAR_4)
{
 struct xfrm_state *VAR_5 = ((void*)0);

 VAR_5 = FUNC_4(&VAR_3);
 if (!VAR_5)
  goto out;

 VAR_5->id.proto = VAR_1;
 VAR_5->id.spi = FUNC_2((xfrm_address_t *)&VAR_4->props.saddr);
 if (!VAR_5->id.spi)
  goto error;

 FUNC_1(VAR_5->id.daddr.a6, VAR_4->id.daddr.a6, sizeof(struct in6_addr));
 FUNC_1(&VAR_5->sel, &VAR_4->sel, sizeof(VAR_5->sel));
 VAR_5->props.family = VAR_0;
 VAR_5->props.mode = VAR_4->props.mode;
 FUNC_1(VAR_5->props.saddr.a6, VAR_4->props.saddr.a6, sizeof(struct in6_addr));
 FUNC_1(&VAR_5->mark, &VAR_4->mark, sizeof(VAR_5->mark));

 if (FUNC_3(VAR_5))
  goto error;

 FUNC_0(&VAR_5->tunnel_users, 1);

out:
 return VAR_5;

error:
 VAR_5->km.state = VAR_2;
 FUNC_5(VAR_5);
 VAR_5 = ((void*)0);
 goto out;
}
