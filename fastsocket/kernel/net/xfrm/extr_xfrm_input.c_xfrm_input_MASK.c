
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_30__ TYPE_9__ ;
typedef struct TYPE_29__ TYPE_8__ ;
typedef struct TYPE_28__ TYPE_7__ ;
typedef struct TYPE_27__ TYPE_6__ ;
typedef struct TYPE_26__ TYPE_5__ ;
typedef struct TYPE_25__ TYPE_4__ ;
typedef struct TYPE_24__ TYPE_3__ ;
typedef struct TYPE_23__ TYPE_2__ ;
typedef struct TYPE_22__ TYPE_1__ ;
typedef struct TYPE_21__ TYPE_15__ ;
typedef struct TYPE_20__ TYPE_14__ ;
typedef struct TYPE_19__ TYPE_13__ ;
typedef struct TYPE_18__ TYPE_12__ ;
typedef struct TYPE_17__ TYPE_11__ ;
typedef struct TYPE_16__ TYPE_10__ ;


typedef int xfrm_address_t ;
struct TYPE_30__ {int daddr; } ;
struct TYPE_29__ {scalar_t__ family; } ;
struct TYPE_28__ {int packets; int bytes; } ;
struct TYPE_27__ {scalar_t__ replay_window; } ;
struct TYPE_26__ {int integrity_failed; } ;
struct TYPE_22__ {scalar_t__ state; } ;
struct xfrm_state {int lock; struct xfrm_mode* inner_mode; TYPE_11__* outer_mode; TYPE_9__ id; TYPE_8__ sel; TYPE_7__ curlft; TYPE_6__ props; TYPE_5__ stats; TYPE_4__* type; TYPE_2__* encap; TYPE_1__ km; } ;
struct xfrm_mode {TYPE_12__* afinfo; scalar_t__ (* input ) (struct xfrm_state*,struct sk_buff*) ;} ;
struct sk_buff {scalar_t__ len; struct sec_path* sp; int mark; int dev; } ;
struct sec_path {scalar_t__ len; struct xfrm_state** xvec; int refcnt; } ;
struct net {int dummy; } ;
typedef scalar_t__ __be32 ;
struct TYPE_25__ {int (* input ) (struct xfrm_state*,struct sk_buff*) ;int proto; } ;
struct TYPE_24__ {scalar_t__ input; } ;
struct TYPE_23__ {int encap_type; } ;
struct TYPE_21__ {int protocol; } ;
struct TYPE_20__ {TYPE_3__ seq; } ;
struct TYPE_19__ {unsigned int family; scalar_t__ daddroff; } ;
struct TYPE_18__ {int (* transport_finish ) (struct sk_buff*,int) ;} ;
struct TYPE_17__ {int flags; TYPE_10__* afinfo; } ;
struct TYPE_16__ {unsigned int family; } ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;
 int VAR_11 ;
 int VAR_12 ;
 int FUNC_0 (struct net*,int ) ;
 scalar_t__ VAR_13 ;
 int VAR_14 ;
 TYPE_15__* FUNC_1 (struct sk_buff*) ;
 TYPE_14__* FUNC_2 (struct sk_buff*) ;
 TYPE_13__* FUNC_3 (struct sk_buff*) ;
 scalar_t__ VAR_15 ;
 int FUNC_4 (int *) ;
 struct net* FUNC_5 (int ) ;
 int FUNC_6 (struct sk_buff*) ;
 int FUNC_7 (struct sk_buff*) ;
 int FUNC_8 (struct sk_buff*) ;
 struct sec_path* FUNC_9 (struct sec_path*) ;
 int FUNC_10 (struct sec_path*) ;
 int FUNC_11 (struct sk_buff*) ;
 scalar_t__ FUNC_12 (struct sk_buff*) ;
 int FUNC_13 (int *) ;
 int FUNC_14 (int *) ;
 int FUNC_15 (struct xfrm_state*,struct sk_buff*) ;
 scalar_t__ FUNC_16 (struct xfrm_state*,struct sk_buff*) ;
 int FUNC_17 (struct sk_buff*,int) ;
 scalar_t__ FUNC_18 (int) ;
 int FUNC_19 (struct xfrm_state*,struct sk_buff*,int ) ;
 int FUNC_20 (struct sk_buff*,unsigned int,scalar_t__,scalar_t__) ;
 struct xfrm_state* FUNC_21 (struct sk_buff*) ;
 struct xfrm_mode* FUNC_22 (struct xfrm_state*,int) ;
 int FUNC_23 (struct sk_buff*,int,scalar_t__*,scalar_t__*) ;
 int FUNC_24 (struct xfrm_state*,scalar_t__) ;
 scalar_t__ FUNC_25 (struct xfrm_state*,struct sk_buff*,scalar_t__) ;
 scalar_t__ FUNC_26 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_27 (struct net*,int ,int *,scalar_t__,int,unsigned int) ;

int FUNC_28(struct sk_buff *VAR_16, int VAR_17, __be32 VAR_18, int VAR_19)
{
 struct net *VAR_20 = FUNC_5(VAR_16->dev);
 int VAR_21;
 __be32 VAR_22;
 struct xfrm_state *VAR_23;
 xfrm_address_t *VAR_24;
 struct xfrm_mode *VAR_25;
 unsigned int VAR_26;
 int VAR_27 = 0;
 int VAR_28 = 0;


 if (VAR_19 < 0) {
  VAR_28 = 1;
  VAR_23 = FUNC_21(VAR_16);
  VAR_22 = FUNC_2(VAR_16)->seq.input;
  goto resume;
 }


 if (!VAR_16->sp || FUNC_4(&VAR_16->sp->refcnt) != 1) {
  struct sec_path *VAR_29;

  VAR_29 = FUNC_9(VAR_16->sp);
  if (!VAR_29) {
   FUNC_0(VAR_20, VAR_4);
   goto drop;
  }
  if (VAR_16->sp)
   FUNC_10(VAR_16->sp);
  VAR_16->sp = VAR_29;
 }

 VAR_24 = (xfrm_address_t *)(FUNC_12(VAR_16) +
       FUNC_3(VAR_16)->daddroff);
 VAR_26 = FUNC_3(VAR_16)->family;

 VAR_22 = 0;
 if (!VAR_18 && (VAR_21 = FUNC_23(VAR_16, VAR_17, &VAR_18, &VAR_22)) != 0) {
  FUNC_0(VAR_20, VAR_5);
  goto drop;
 }

 do {
  if (VAR_16->sp->len == VAR_13) {
   FUNC_0(VAR_20, VAR_3);
   goto drop;
  }

  VAR_23 = FUNC_27(VAR_20, VAR_16->mark, VAR_24, VAR_18, VAR_17, VAR_26);
  if (VAR_23 == ((void*)0)) {
   FUNC_0(VAR_20, VAR_6);
   FUNC_20(VAR_16, VAR_26, VAR_18, VAR_22);
   goto drop;
  }

  VAR_16->sp->xvec[VAR_16->sp->len++] = VAR_23;

  FUNC_13(&VAR_23->lock);
  if (FUNC_18(VAR_23->km.state != VAR_15)) {
   FUNC_0(VAR_20, VAR_8);
   goto drop_unlock;
  }

  if ((VAR_23->encap ? VAR_23->encap->encap_type : 0) != VAR_19) {
   FUNC_0(VAR_20, VAR_9);
   goto drop_unlock;
  }

  if (VAR_23->props.replay_window && FUNC_25(VAR_23, VAR_16, VAR_22)) {
   FUNC_0(VAR_20, VAR_12);
   goto drop_unlock;
  }

  if (FUNC_26(VAR_23)) {
   FUNC_0(VAR_20, VAR_7);
   goto drop_unlock;
  }

  FUNC_14(&VAR_23->lock);

  FUNC_2(VAR_16)->seq.input = VAR_22;

  VAR_17 = VAR_23->type->input(VAR_23, VAR_16);

  if (VAR_17 == -VAR_2)
   return 0;

resume:
  FUNC_13(&VAR_23->lock);
  if (VAR_17 <= 0) {
   if (VAR_17 == -VAR_1) {
    FUNC_19(VAR_23, VAR_16,
        VAR_23->type->proto);
    VAR_23->stats.integrity_failed++;
   }
   FUNC_0(VAR_20, VAR_11);
   goto drop_unlock;
  }


  VAR_19 = 0;

  if (VAR_23->props.replay_window)
   FUNC_24(VAR_23, VAR_22);

  VAR_23->curlft.bytes += VAR_16->len;
  VAR_23->curlft.packets++;

  FUNC_14(&VAR_23->lock);

  FUNC_1(VAR_16)->protocol = VAR_17;

  VAR_25 = VAR_23->inner_mode;

  if (VAR_23->sel.family == VAR_0) {
   VAR_25 = FUNC_22(VAR_23, FUNC_1(VAR_16)->protocol);
   if (VAR_25 == ((void*)0))
    goto drop;
  }

  if (VAR_25->input(VAR_23, VAR_16)) {
   FUNC_0(VAR_20, VAR_10);
   goto drop;
  }

  if (VAR_23->outer_mode->flags & VAR_14) {
   VAR_27 = 1;
   break;
  }





  VAR_24 = &VAR_23->id.daddr;
  VAR_26 = VAR_23->outer_mode->afinfo->family;

  VAR_21 = FUNC_23(VAR_16, VAR_17, &VAR_18, &VAR_22);
  if (VAR_21 < 0) {
   FUNC_0(VAR_20, VAR_5);
   goto drop;
  }
 } while (!VAR_21);

 FUNC_8(VAR_16);

 if (VAR_27) {
  FUNC_11(VAR_16);
  FUNC_7(VAR_16);
  return 0;
 } else {
  return VAR_23->inner_mode->afinfo->transport_finish(VAR_16, VAR_28);
 }

drop_unlock:
 FUNC_14(&VAR_23->lock);
drop:
 FUNC_6(VAR_16);
 return 0;
}
