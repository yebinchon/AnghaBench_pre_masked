
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int u8 ;
typedef void* u32 ;
struct inet6_ifaddr {int flags; TYPE_1__* idev; int prefix_len; int addr; int lock; void* prefered_lft; void* valid_lft; int tstamp; } ;
typedef scalar_t__ clock_t ;
struct TYPE_2__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 void* VAR_7 ;
 scalar_t__ FUNC_0 (unsigned long) ;
 int FUNC_1 (int *,int ,int ,scalar_t__,void*) ;
 unsigned long FUNC_2 (void*,unsigned long) ;
 int FUNC_3 (int ) ;
 int FUNC_4 (int ,struct inet6_ifaddr*) ;
 int VAR_8 ;
 scalar_t__ FUNC_5 (unsigned long) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static int FUNC_8(struct inet6_ifaddr *VAR_9, u8 VAR_10,
        u32 VAR_11, u32 VAR_12)
{
 u32 VAR_13;
 clock_t VAR_14;
 unsigned long VAR_15;

 if (!VAR_12 || (VAR_11 > VAR_12))
  return -VAR_0;

 VAR_15 = FUNC_2(VAR_12, VAR_1);
 if (FUNC_0(VAR_15)) {
  VAR_14 = FUNC_5(VAR_15 * VAR_1);
  VAR_12 = VAR_15;
  VAR_13 = VAR_7;
 } else {
  VAR_14 = 0;
  VAR_13 = 0;
  VAR_10 |= VAR_5;
 }

 VAR_15 = FUNC_2(VAR_11, VAR_1);
 if (FUNC_0(VAR_15)) {
  if (VAR_15 == 0)
   VAR_10 |= VAR_2;
  VAR_11 = VAR_15;
 }

 FUNC_6(&VAR_9->lock);
 VAR_9->flags = (VAR_9->flags & ~(VAR_2 | VAR_5 | VAR_4 | VAR_3)) | VAR_10;
 VAR_9->tstamp = VAR_8;
 VAR_9->valid_lft = VAR_12;
 VAR_9->prefered_lft = VAR_11;

 FUNC_7(&VAR_9->lock);
 if (!(VAR_9->flags&VAR_6))
  FUNC_4(0, VAR_9);

 FUNC_1(&VAR_9->addr, VAR_9->prefix_len, VAR_9->idev->dev,
         VAR_14, VAR_13);
 FUNC_3(0);

 return 0;
}
