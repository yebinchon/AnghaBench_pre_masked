
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_5__ ;
typedef struct TYPE_9__ TYPE_4__ ;
typedef struct TYPE_8__ TYPE_3__ ;
typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_10__ {scalar_t__ spi; } ;
struct TYPE_8__ {scalar_t__ state; int dying; } ;
struct TYPE_7__ {unsigned long add_time; scalar_t__ use_time; } ;
struct TYPE_6__ {long hard_add_expires_seconds; long hard_use_expires_seconds; long soft_add_expires_seconds; long soft_use_expires_seconds; } ;
struct xfrm_state {int lock; TYPE_5__ id; TYPE_3__ km; int timer; TYPE_2__ curlft; TYPE_1__ lft; } ;
struct TYPE_9__ {int km_waitq; } ;
struct net {TYPE_4__ xfrm; } ;


 long VAR_0 ;
 scalar_t__ VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int FUNC_0 (struct xfrm_state*) ;
 int FUNC_1 (int ) ;
 int FUNC_2 (int ) ;
 int VAR_4 ;
 unsigned long FUNC_3 () ;
 scalar_t__ VAR_5 ;
 int FUNC_4 (struct xfrm_state*,int,int ) ;
 scalar_t__ FUNC_5 (long) ;
 int FUNC_6 (int *,scalar_t__) ;
 int FUNC_7 (int *) ;
 int FUNC_8 (int *) ;
 int FUNC_9 (int *) ;
 int FUNC_10 (struct xfrm_state*,int,int ,int ,int ) ;
 struct net* FUNC_11 (struct xfrm_state*) ;

__attribute__((used)) static void FUNC_12(unsigned long VAR_6)
{
 struct xfrm_state *VAR_7 = (struct xfrm_state*)VAR_6;
 struct net *VAR_8 = FUNC_11(VAR_7);
 unsigned long VAR_9 = FUNC_3();
 long VAR_10 = VAR_0;
 int VAR_11 = 0;
 int VAR_12 = 0;

 FUNC_7(&VAR_7->lock);
 if (VAR_7->km.state == VAR_2)
  goto out;
 if (VAR_7->km.state == VAR_3)
  goto expired;
 if (VAR_7->lft.hard_add_expires_seconds) {
  long VAR_13 = VAR_7->lft.hard_add_expires_seconds +
   VAR_7->curlft.add_time - VAR_9;
  if (VAR_13 <= 0)
   goto expired;
  if (VAR_13 < VAR_10)
   VAR_10 = VAR_13;
 }
 if (VAR_7->lft.hard_use_expires_seconds) {
  long VAR_14 = VAR_7->lft.hard_use_expires_seconds +
   (VAR_7->curlft.use_time ? : VAR_9) - VAR_9;
  if (VAR_14 <= 0)
   goto expired;
  if (VAR_14 < VAR_10)
   VAR_10 = VAR_14;
 }
 if (VAR_7->km.dying)
  goto resched;
 if (VAR_7->lft.soft_add_expires_seconds) {
  long VAR_15 = VAR_7->lft.soft_add_expires_seconds +
   VAR_7->curlft.add_time - VAR_9;
  if (VAR_15 <= 0)
   VAR_11 = 1;
  else if (VAR_15 < VAR_10)
   VAR_10 = VAR_15;
 }
 if (VAR_7->lft.soft_use_expires_seconds) {
  long VAR_16 = VAR_7->lft.soft_use_expires_seconds +
   (VAR_7->curlft.use_time ? : VAR_9) - VAR_9;
  if (VAR_16 <= 0)
   VAR_11 = 1;
  else if (VAR_16 < VAR_10)
   VAR_10 = VAR_16;
 }

 VAR_7->km.dying = VAR_11;
 if (VAR_11)
  FUNC_4(VAR_7, 0, 0);
resched:
 if (VAR_10 != VAR_0)
  FUNC_6(&VAR_7->timer, VAR_5 + FUNC_5(VAR_10));

 goto out;

expired:
 if (VAR_7->km.state == VAR_1 && VAR_7->id.spi == 0) {
  VAR_7->km.state = VAR_3;
  FUNC_9(&VAR_8->xfrm.km_waitq);
  VAR_10 = 2;
  goto resched;
 }

 VAR_12 = FUNC_0(VAR_7);
 if (!VAR_12 && VAR_7->id.spi)
  FUNC_4(VAR_7, 1, 0);

 FUNC_10(VAR_7, VAR_12 ? 0 : 1,
    FUNC_1(VAR_4),
    FUNC_2(VAR_4), 0);

out:
 FUNC_8(&VAR_7->lock);
}
