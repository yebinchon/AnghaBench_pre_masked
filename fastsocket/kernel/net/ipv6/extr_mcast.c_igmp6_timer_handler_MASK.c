
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct ifmcaddr6 {int mca_lock; int mca_flags; TYPE_1__* idev; int mca_addr; } ;
struct TYPE_3__ {int dev; } ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 scalar_t__ FUNC_0 (TYPE_1__*) ;
 int FUNC_1 (int *,int ,int ) ;
 int FUNC_2 (struct ifmcaddr6*) ;
 int FUNC_3 (TYPE_1__*,struct ifmcaddr6*) ;
 int FUNC_4 (int *) ;
 int FUNC_5 (int *) ;

__attribute__((used)) static void FUNC_6(unsigned long VAR_3)
{
 struct ifmcaddr6 *VAR_4 = (struct ifmcaddr6 *) VAR_3;

 if (FUNC_0(VAR_4->idev))
  FUNC_1(&VAR_4->mca_addr, VAR_4->idev->dev, VAR_0);
 else
  FUNC_3(VAR_4->idev, VAR_4);

 FUNC_4(&VAR_4->mca_lock);
 VAR_4->mca_flags |= VAR_1;
 VAR_4->mca_flags &= ~VAR_2;
 FUNC_5(&VAR_4->mca_lock);
 FUNC_2(VAR_4);
}
