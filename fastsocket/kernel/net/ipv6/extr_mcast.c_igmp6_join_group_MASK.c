
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_2__ ;
typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_5__ {unsigned long expires; } ;
struct ifmcaddr6 {int mca_flags; int mca_lock; int mca_refcnt; TYPE_2__ mca_timer; TYPE_1__* idev; int mca_addr; } ;
struct TYPE_4__ {int dev; } ;


 int VAR_0 ;
 unsigned long VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 scalar_t__ FUNC_2 (TYPE_2__*) ;
 int FUNC_3 (int *,int ,int ) ;
 unsigned long VAR_5 ;
 int FUNC_4 (TYPE_2__*,unsigned long) ;
 unsigned long FUNC_5 () ;
 int FUNC_6 (int *) ;
 int FUNC_7 (int *) ;

__attribute__((used)) static void FUNC_8(struct ifmcaddr6 *VAR_6)
{
 unsigned long VAR_7;

 if (VAR_6->mca_flags & VAR_3)
  return;

 FUNC_3(&VAR_6->mca_addr, VAR_6->idev->dev, VAR_0);

 VAR_7 = FUNC_5() % VAR_1;

 FUNC_6(&VAR_6->mca_lock);
 if (FUNC_2(&VAR_6->mca_timer)) {
  FUNC_0(&VAR_6->mca_refcnt);
  VAR_7 = VAR_6->mca_timer.expires - VAR_5;
 }

 if (!FUNC_4(&VAR_6->mca_timer, VAR_5 + VAR_7))
  FUNC_1(&VAR_6->mca_refcnt);
 VAR_6->mca_flags |= VAR_4 | VAR_2;
 FUNC_7(&VAR_6->mca_lock);
}
