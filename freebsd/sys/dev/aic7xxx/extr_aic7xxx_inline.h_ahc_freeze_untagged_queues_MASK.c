
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ahc_softc {int flags; int untagged_queue_lock; } ;


 int VAR_0 ;

__attribute__((used)) static __inline void
FUNC_0(struct ahc_softc *VAR_1)
{
 if ((VAR_1->flags & VAR_0) == 0)
  VAR_1->untagged_queue_lock++;
}
