
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_3__ ;
typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_6__ {unsigned long add_time; scalar_t__ use_time; } ;
struct TYPE_5__ {long hard_add_expires_seconds; long hard_use_expires_seconds; long soft_add_expires_seconds; long soft_use_expires_seconds; } ;
struct TYPE_4__ {int dead; } ;
struct xfrm_policy {int lock; int timer; TYPE_3__ curlft; TYPE_2__ lft; int index; TYPE_1__ walk; } ;


 long VAR_0 ;
 long VAR_1 ;
 unsigned long FUNC_0 () ;
 scalar_t__ VAR_2 ;
 int FUNC_1 (struct xfrm_policy*,int,int,int ) ;
 scalar_t__ FUNC_2 (long) ;
 int FUNC_3 (int *,scalar_t__) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;
 scalar_t__ FUNC_6 (int ) ;
 int FUNC_7 (struct xfrm_policy*) ;
 int FUNC_8 (struct xfrm_policy*) ;
 int FUNC_9 (struct xfrm_policy*,int) ;
 int FUNC_10 (int ) ;

__attribute__((used)) static void FUNC_11(unsigned long VAR_3)
{
 struct xfrm_policy *VAR_4 = (struct xfrm_policy*)VAR_3;
 unsigned long VAR_5 = FUNC_0();
 long VAR_6 = VAR_0;
 int VAR_7 = 0;
 int VAR_8;

 FUNC_4(&VAR_4->lock);

 if (FUNC_6(VAR_4->walk.dead))
  goto out;

 VAR_8 = FUNC_10(VAR_4->index);

 if (VAR_4->lft.hard_add_expires_seconds) {
  long VAR_9 = VAR_4->lft.hard_add_expires_seconds +
   VAR_4->curlft.add_time - VAR_5;
  if (VAR_9 <= 0)
   goto expired;
  if (VAR_9 < VAR_6)
   VAR_6 = VAR_9;
 }
 if (VAR_4->lft.hard_use_expires_seconds) {
  long VAR_10 = VAR_4->lft.hard_use_expires_seconds +
   (VAR_4->curlft.use_time ? : VAR_4->curlft.add_time) - VAR_5;
  if (VAR_10 <= 0)
   goto expired;
  if (VAR_10 < VAR_6)
   VAR_6 = VAR_10;
 }
 if (VAR_4->lft.soft_add_expires_seconds) {
  long VAR_11 = VAR_4->lft.soft_add_expires_seconds +
   VAR_4->curlft.add_time - VAR_5;
  if (VAR_11 <= 0) {
   VAR_7 = 1;
   VAR_11 = VAR_1;
  }
  if (VAR_11 < VAR_6)
   VAR_6 = VAR_11;
 }
 if (VAR_4->lft.soft_use_expires_seconds) {
  long VAR_12 = VAR_4->lft.soft_use_expires_seconds +
   (VAR_4->curlft.use_time ? : VAR_4->curlft.add_time) - VAR_5;
  if (VAR_12 <= 0) {
   VAR_7 = 1;
   VAR_12 = VAR_1;
  }
  if (VAR_12 < VAR_6)
   VAR_6 = VAR_12;
 }

 if (VAR_7)
  FUNC_1(VAR_4, VAR_8, 0, 0);
 if (VAR_6 != VAR_0 &&
     !FUNC_3(&VAR_4->timer, VAR_2 + FUNC_2(VAR_6)))
  FUNC_7(VAR_4);

out:
 FUNC_5(&VAR_4->lock);
 FUNC_8(VAR_4);
 return;

expired:
 FUNC_5(&VAR_4->lock);
 if (!FUNC_9(VAR_4, VAR_8))
  FUNC_1(VAR_4, VAR_8, 1, 0);
 FUNC_8(VAR_4);
}
