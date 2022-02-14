
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct net_device {int flags; int addr_len; } ;
struct ifmcaddr6 {int mca_flags; TYPE_1__* idev; int mca_crcount; int mca_lock; int mca_addr; } ;
struct TYPE_3__ {int mc_qrv; struct net_device* dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (struct net_device*,char*,int ,int ) ;
 int FUNC_2 (struct ifmcaddr6*) ;
 int FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *,char*,struct net_device*,int ) ;
 int FUNC_5 (int *) ;
 int FUNC_6 (int *) ;

__attribute__((used)) static void FUNC_7(struct ifmcaddr6 *VAR_4)
{
 struct net_device *VAR_5 = VAR_4->idev->dev;
 char VAR_6[VAR_3];

 FUNC_5(&VAR_4->mca_lock);
 if (!(VAR_4->mca_flags&VAR_1)) {
  VAR_4->mca_flags |= VAR_1;
  if (FUNC_4(&VAR_4->mca_addr, VAR_6, VAR_5, 0) == 0)
   FUNC_1(VAR_5, VAR_6, VAR_5->addr_len, 0);
 }
 FUNC_6(&VAR_4->mca_lock);

 if (!(VAR_5->flags & VAR_0) || (VAR_4->mca_flags & VAR_2))
  return;

 if (FUNC_0(VAR_4->idev)) {
  FUNC_2(VAR_4);
  return;
 }


 VAR_4->mca_crcount = VAR_4->idev->mc_qrv;
 FUNC_3(VAR_4->idev);
}
