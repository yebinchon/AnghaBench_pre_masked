
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {void* expires; } ;
struct ifmcaddr6 {int mca_flags; int mca_refcnt; TYPE_1__ mca_timer; int mca_addr; } ;


 scalar_t__ FUNC_0 (int *) ;
 scalar_t__ VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *) ;
 scalar_t__ FUNC_3 (TYPE_1__*) ;
 scalar_t__ FUNC_4 (int *) ;
 void* VAR_2 ;
 int FUNC_5 (TYPE_1__*,void*) ;
 unsigned long FUNC_6 () ;

__attribute__((used)) static void FUNC_7(struct ifmcaddr6 *VAR_3, unsigned long VAR_4)
{
 unsigned long VAR_5 = VAR_4;


 if (FUNC_4(&VAR_3->mca_addr) ||
     FUNC_0(&VAR_3->mca_addr) < VAR_0)
  return;

 if (FUNC_3(&VAR_3->mca_timer)) {
  FUNC_1(&VAR_3->mca_refcnt);
  VAR_5 = VAR_3->mca_timer.expires - VAR_2;
 }

 if (VAR_5 >= VAR_4) {
  if (VAR_4)
   VAR_5 = FUNC_6() % VAR_4;
  else
   VAR_5 = 1;
 }
 VAR_3->mca_timer.expires = VAR_2 + VAR_5;
 if (!FUNC_5(&VAR_3->mca_timer, VAR_2 + VAR_5))
  FUNC_2(&VAR_3->mca_refcnt);
 VAR_3->mca_flags |= VAR_1;
}
