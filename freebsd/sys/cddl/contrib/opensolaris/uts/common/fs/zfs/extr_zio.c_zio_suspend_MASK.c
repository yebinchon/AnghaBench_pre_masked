
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_13__ {int io_flags; scalar_t__ io_child_type; scalar_t__ io_stage; } ;
typedef TYPE_1__ zio_t ;
struct TYPE_14__ {int spa_suspend_lock; TYPE_1__* spa_suspend_zio_root; int spa_suspended; } ;
typedef TYPE_2__ spa_t ;


 int FUNC_0 (int) ;
 int VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 scalar_t__ VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 scalar_t__ VAR_7 ;
 int FUNC_1 (char*,int ) ;
 int FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 scalar_t__ FUNC_4 (TYPE_2__*) ;
 int FUNC_5 (TYPE_2__*) ;
 int FUNC_6 (int ,TYPE_2__*,int *,int *,int ,int ) ;
 int FUNC_7 (TYPE_1__*,TYPE_1__*) ;
 TYPE_1__* FUNC_8 (TYPE_2__*,int *,int *,int) ;
 int * FUNC_9 (TYPE_1__*) ;

void
FUNC_10(spa_t *VAR_8, zio_t *VAR_9)
{
 if (FUNC_4(VAR_8) == VAR_3)
  FUNC_1("Pool '%s' has encountered an uncorrectable I/O "
      "failure and the failure mode property for this pool "
      "is set to panic.", FUNC_5(VAR_8));

 FUNC_6(VAR_1, VAR_8, ((void*)0), ((void*)0), 0, 0);

 FUNC_2(&VAR_8->spa_suspend_lock);

 if (VAR_8->spa_suspend_zio_root == ((void*)0))
  VAR_8->spa_suspend_zio_root = FUNC_8(VAR_8, ((void*)0), ((void*)0),
      VAR_4 | VAR_6 |
      VAR_5);

 VAR_8->spa_suspended = VAR_0;

 if (VAR_9 != ((void*)0)) {
  FUNC_0(!(VAR_9->io_flags & VAR_5));
  FUNC_0(VAR_9 != VAR_8->spa_suspend_zio_root);
  FUNC_0(VAR_9->io_child_type == VAR_2);
  FUNC_0(FUNC_9(VAR_9) == ((void*)0));
  FUNC_0(VAR_9->io_stage == VAR_7);
  FUNC_7(VAR_8->spa_suspend_zio_root, VAR_9);
 }

 FUNC_3(&VAR_8->spa_suspend_lock);
}
