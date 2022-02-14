
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


struct net_device {int addr_len; } ;
struct ifmcaddr6 {int mca_flags; int mca_lock; int mca_refcnt; int mca_timer; TYPE_1__* idev; int mca_addr; } ;
struct TYPE_2__ {int dead; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int FUNC_0 (int *) ;
 scalar_t__ FUNC_1 (int *) ;
 int FUNC_2 (struct net_device*,char*,int ,int ) ;
 int FUNC_3 (struct ifmcaddr6*) ;
 int FUNC_4 (struct ifmcaddr6*) ;
 scalar_t__ FUNC_5 (int *,char*,struct net_device*,int ) ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ifmcaddr6 *VAR_3)
{
 struct net_device *VAR_4 = VAR_3->idev->dev;
 char VAR_5[VAR_2];

 FUNC_6(&VAR_3->mca_lock);
 if (VAR_3->mca_flags&VAR_0) {
  VAR_3->mca_flags &= ~VAR_0;
  if (FUNC_5(&VAR_3->mca_addr, VAR_5, VAR_4, 0) == 0)
   FUNC_2(VAR_4, VAR_5, VAR_4->addr_len, 0);
 }

 if (VAR_3->mca_flags & VAR_1)
  goto done;
 FUNC_7(&VAR_3->mca_lock);

 if (!VAR_3->idev->dead)
  FUNC_3(VAR_3);

 FUNC_6(&VAR_3->mca_lock);
 if (FUNC_1(&VAR_3->mca_timer))
  FUNC_0(&VAR_3->mca_refcnt);
done:
 FUNC_4(VAR_3);
 FUNC_7(&VAR_3->mca_lock);
}
