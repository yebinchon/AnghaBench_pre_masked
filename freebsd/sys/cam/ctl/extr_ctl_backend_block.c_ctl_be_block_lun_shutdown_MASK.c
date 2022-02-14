
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






struct ctl_be_block_softc {int lock; } ;
struct ctl_be_block_lun {int flags; struct ctl_be_block_softc* softc; } ;


 int VAR_0 ;
 int VAR_1 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (struct ctl_be_block_lun*) ;

__attribute__((used)) static void
FUNC_3(void *VAR_2)
{
 struct ctl_be_block_lun *VAR_3 = VAR_2;
 struct ctl_be_block_softc *VAR_4 = VAR_3->softc;

 FUNC_0(&VAR_4->lock);
 VAR_3->flags |= VAR_0;
 if (VAR_3->flags & VAR_1)
  FUNC_2(VAR_3);
 FUNC_1(&VAR_4->lock);
}
