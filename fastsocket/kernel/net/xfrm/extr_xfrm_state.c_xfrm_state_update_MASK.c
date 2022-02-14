
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_4__ ;
typedef struct TYPE_7__ TYPE_3__ ;
typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_8__ {scalar_t__ use_time; } ;
struct TYPE_7__ {scalar_t__ state; scalar_t__ dying; } ;
struct TYPE_6__ {int family; } ;
struct TYPE_5__ {int proto; } ;
struct xfrm_state {int lock; TYPE_4__ curlft; int timer; TYPE_3__ km; int lft; int sel; int * coaddr; int * encap; TYPE_2__ props; TYPE_1__ id; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 scalar_t__ VAR_5 ;
 scalar_t__ VAR_6 ;
 int FUNC_0 (struct xfrm_state*) ;
 struct xfrm_state* FUNC_1 (struct xfrm_state*,int,int ) ;
 scalar_t__ VAR_7 ;
 scalar_t__ FUNC_2 (int) ;
 scalar_t__ FUNC_3 (int *,int *,int) ;
 int FUNC_4 (int *,int *,int) ;
 int FUNC_5 (int *,scalar_t__) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int ,int ) ;
 int FUNC_9 (struct xfrm_state*) ;
 int FUNC_10 (struct xfrm_state*) ;
 scalar_t__ FUNC_11 (struct xfrm_state*) ;
 int VAR_8 ;
 int FUNC_12 (struct xfrm_state*) ;

int FUNC_13(struct xfrm_state *VAR_9)
{
 struct xfrm_state *VAR_10, *VAR_11;
 int VAR_12;
 int VAR_13 = FUNC_8(VAR_9->id.proto, VAR_4);

 VAR_11 = ((void*)0);

 FUNC_6(&VAR_8);
 VAR_10 = FUNC_1(VAR_9, VAR_13, VAR_9->props.family);

 VAR_12 = -VAR_2;
 if (!VAR_10)
  goto out;

 if (FUNC_11(VAR_10)) {
  VAR_11 = VAR_10;
  VAR_12 = -VAR_0;
  goto out;
 }

 if (VAR_10->km.state == VAR_5) {
  FUNC_0(VAR_9);
  VAR_9 = ((void*)0);
 }
 VAR_12 = 0;

out:
 FUNC_7(&VAR_8);

 if (VAR_11)
  FUNC_12(VAR_11);

 if (VAR_12)
  return VAR_12;

 if (!VAR_9) {
  FUNC_10(VAR_10);
  FUNC_12(VAR_10);
  return 0;
 }

 VAR_12 = -VAR_1;
 FUNC_6(&VAR_10->lock);
 if (FUNC_2(VAR_10->km.state == VAR_6)) {
  if (VAR_9->encap && VAR_10->encap)
   FUNC_4(VAR_10->encap, VAR_9->encap, sizeof(*VAR_10->encap));
  if (VAR_9->coaddr && VAR_10->coaddr) {
   FUNC_4(VAR_10->coaddr, VAR_9->coaddr, sizeof(*VAR_10->coaddr));
  }
  if (!VAR_13 && FUNC_3(&VAR_10->sel, &VAR_9->sel, sizeof(VAR_10->sel)))
   FUNC_4(&VAR_10->sel, &VAR_9->sel, sizeof(VAR_10->sel));
  FUNC_4(&VAR_10->lft, &VAR_9->lft, sizeof(VAR_10->lft));
  VAR_10->km.dying = 0;

  FUNC_5(&VAR_10->timer, VAR_7 + VAR_3);
  if (VAR_10->curlft.use_time)
   FUNC_9(VAR_10);

  VAR_12 = 0;
 }
 FUNC_7(&VAR_10->lock);

 FUNC_12(VAR_10);

 return VAR_12;
}
