
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_14__ TYPE_4__ ;
typedef struct TYPE_13__ TYPE_3__ ;
typedef struct TYPE_12__ TYPE_2__ ;
typedef struct TYPE_11__ TYPE_1__ ;


struct TYPE_12__ {TYPE_1__* io_logical; } ;
typedef TYPE_2__ zio_t ;
typedef void* zbookmark_phys_t ;
struct TYPE_13__ {int spa_errlist_lock; int spa_errlist_last; int spa_errlist_scrub; scalar_t__ spa_scrub_finished; scalar_t__ spa_scrub_active; } ;
typedef TYPE_3__ spa_t ;
struct TYPE_14__ {void* se_bookmark; } ;
typedef TYPE_4__ spa_error_entry_t ;
typedef int avl_tree_t ;
typedef int avl_index_t ;
struct TYPE_11__ {void* io_bookmark; } ;


 int VAR_0 ;
 scalar_t__ VAR_1 ;
 int * FUNC_0 (int *,TYPE_4__*,int *) ;
 int FUNC_1 (int *,TYPE_4__*,int ) ;
 TYPE_4__* FUNC_2 (int,int ) ;
 int FUNC_3 (int *) ;
 int FUNC_4 (int *) ;
 scalar_t__ FUNC_5 (TYPE_3__*) ;

void
FUNC_6(spa_t *VAR_2, zio_t *VAR_3)
{
 zbookmark_phys_t *VAR_4 = &VAR_3->io_logical->io_bookmark;
 spa_error_entry_t VAR_5;
 spa_error_entry_t *VAR_6;
 avl_tree_t *VAR_7;
 avl_index_t VAR_8;





 if (FUNC_5(VAR_2) == VAR_1)
  return;

 FUNC_3(&VAR_2->spa_errlist_lock);





 if (VAR_2->spa_scrub_active || VAR_2->spa_scrub_finished)
  VAR_7 = &VAR_2->spa_errlist_scrub;
 else
  VAR_7 = &VAR_2->spa_errlist_last;

 VAR_5.se_bookmark = *VAR_4;
 if (FUNC_0(VAR_7, &VAR_5, &VAR_8) != ((void*)0)) {
  FUNC_4(&VAR_2->spa_errlist_lock);
  return;
 }

 VAR_6 = FUNC_2(sizeof (spa_error_entry_t), VAR_0);
 VAR_6->se_bookmark = *VAR_4;
 FUNC_1(VAR_7, VAR_6, VAR_8);

 FUNC_4(&VAR_2->spa_errlist_lock);
}
