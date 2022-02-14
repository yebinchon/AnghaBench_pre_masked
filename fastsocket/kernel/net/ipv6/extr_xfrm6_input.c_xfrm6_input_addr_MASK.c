
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


typedef int xfrm_address_t ;
typedef int u8 ;
struct TYPE_8__ {int packets; int bytes; } ;
struct TYPE_6__ {scalar_t__ state; } ;
struct TYPE_5__ {int flags; } ;
struct xfrm_state {int lock; TYPE_4__ curlft; TYPE_3__* type; TYPE_2__ km; TYPE_1__ props; } ;
struct sk_buff {scalar_t__ len; struct sec_path* sp; int mark; int dev; } ;
struct sec_path {scalar_t__ len; struct xfrm_state** xvec; int refcnt; } ;
struct net {int dummy; } ;
struct TYPE_7__ {scalar_t__ (* input ) (struct xfrm_state*,struct sk_buff*) ;} ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_0 (struct net*,int ) ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 int VAR_6 ;
 int FUNC_1 (int *) ;
 struct net* FUNC_2 (int ) ;
 int VAR_7 ;
 scalar_t__ FUNC_3 (int) ;
 struct sec_path* FUNC_4 (struct sec_path*) ;
 int FUNC_5 (struct sec_path*) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 scalar_t__ FUNC_8 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_9 (struct sk_buff*,int ) ;
 int FUNC_10 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_11 (struct net*,int ,int *,int *,int ,int ) ;
 int FUNC_12 (struct xfrm_state*) ;

int FUNC_13(struct sk_buff *VAR_8, xfrm_address_t *VAR_9,
       xfrm_address_t *VAR_10, u8 VAR_11)
{
 struct net *VAR_12 = FUNC_2(VAR_8->dev);
 struct xfrm_state *VAR_13 = ((void*)0);
 int VAR_14 = 0;


 if (!VAR_8->sp || FUNC_1(&VAR_8->sp->refcnt) != 1) {
  struct sec_path *VAR_15;

  VAR_15 = FUNC_4(VAR_8->sp);
  if (!VAR_15) {
   FUNC_0(VAR_12, VAR_2);
   goto drop;
  }
  if (VAR_8->sp)
   FUNC_5(VAR_8->sp);
  VAR_8->sp = VAR_15;
 }

 if (1 + VAR_8->sp->len == VAR_4) {
  FUNC_0(VAR_12, VAR_1);
  goto drop;
 }

 for (VAR_14 = 0; VAR_14 < 3; VAR_14++) {
  xfrm_address_t *VAR_16, *VAR_17;

  switch (VAR_14) {
  case 0:
   VAR_16 = VAR_9;
   VAR_17 = VAR_10;
   break;
  case 1:

   VAR_16 = VAR_9;
   VAR_17 = (xfrm_address_t *)&VAR_7;
   break;
  default:

   VAR_16 = (xfrm_address_t *)&VAR_7;
   VAR_17 = (xfrm_address_t *)&VAR_7;
   break;
  }

  VAR_13 = FUNC_11(VAR_12, VAR_8->mark, VAR_16, VAR_17, VAR_11, VAR_0);
  if (!VAR_13)
   continue;

  FUNC_6(&VAR_13->lock);

  if ((!VAR_14 || (VAR_13->props.flags & VAR_6)) &&
      FUNC_3(VAR_13->km.state == VAR_5) &&
      !FUNC_10(VAR_13)) {
   FUNC_7(&VAR_13->lock);
   if (VAR_13->type->input(VAR_13, VAR_8) > 0) {

    break;
   }
  } else
   FUNC_7(&VAR_13->lock);

  FUNC_12(VAR_13);
  VAR_13 = ((void*)0);
 }

 if (!VAR_13) {
  FUNC_0(VAR_12, VAR_3);
  FUNC_9(VAR_8, VAR_0);
  goto drop;
 }

 VAR_8->sp->xvec[VAR_8->sp->len++] = VAR_13;

 FUNC_6(&VAR_13->lock);

 VAR_13->curlft.bytes += VAR_8->len;
 VAR_13->curlft.packets++;

 FUNC_7(&VAR_13->lock);

 return 1;

drop:
 return -1;
}
