
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_2__ ;
typedef struct TYPE_5__ TYPE_1__ ;


struct TYPE_6__ {int node_absent; int file_closed; int file_changed; int file_deleted; int file_added; int file_opened; int dir_closed; int dir_changed; int dir_deleted; int dir_added; int dir_opened; void* baton; } ;
struct TYPE_5__ {TYPE_2__ tp; } ;
typedef TYPE_1__ tree_processor_t ;
typedef TYPE_2__ svn_diff_tree_processor_t ;
typedef int apr_pool_t ;


 TYPE_1__* FUNC_0 (int *,int) ;
 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int VAR_4 ;
 int VAR_5 ;
 int VAR_6 ;
 int VAR_7 ;
 int VAR_8 ;
 int VAR_9 ;
 int VAR_10 ;

svn_diff_tree_processor_t *
FUNC_1(void *VAR_11,
                                apr_pool_t *VAR_12)
{
  tree_processor_t *VAR_13;
  VAR_13 = FUNC_0(VAR_12, sizeof(*VAR_13));

  VAR_13->tp.baton = VAR_11;

  VAR_13->tp.dir_opened = VAR_4;
  VAR_13->tp.dir_added = VAR_0;
  VAR_13->tp.dir_deleted = VAR_3;
  VAR_13->tp.dir_changed = VAR_1;
  VAR_13->tp.dir_closed = VAR_2;

  VAR_13->tp.file_opened = VAR_9;
  VAR_13->tp.file_added = VAR_5;
  VAR_13->tp.file_deleted = VAR_8;
  VAR_13->tp.file_changed = VAR_6;
  VAR_13->tp.file_closed = VAR_7;

  VAR_13->tp.node_absent = VAR_10;


  return &VAR_13->tp;
}
