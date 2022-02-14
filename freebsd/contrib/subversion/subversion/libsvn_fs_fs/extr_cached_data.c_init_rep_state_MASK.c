
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_19__ TYPE_7__ ;
typedef struct TYPE_18__ TYPE_6__ ;
typedef struct TYPE_17__ TYPE_5__ ;
typedef struct TYPE_16__ TYPE_4__ ;
typedef struct TYPE_15__ TYPE_3__ ;
typedef struct TYPE_14__ TYPE_2__ ;
typedef struct TYPE_13__ TYPE_1__ ;


struct TYPE_14__ {TYPE_7__* fsap_data; } ;
typedef TYPE_2__ svn_fs_t ;
typedef int svn_fs_fs__revision_file_t ;
struct TYPE_15__ {scalar_t__ type; scalar_t__ header_size; } ;
typedef TYPE_3__ svn_fs_fs__rep_header_t ;
struct TYPE_13__ {int number; int revision; } ;
struct TYPE_16__ {scalar_t__ type; scalar_t__ size; scalar_t__ offset; TYPE_1__ item; } ;
typedef TYPE_4__ svn_fs_fs__p2l_entry_t ;
typedef int svn_error_t ;
struct TYPE_17__ {int * pool; int revision; TYPE_2__* fs; int * rfile; } ;
typedef TYPE_5__ shared_file_t ;
struct TYPE_18__ {int current; int ver; int combined_cache; int window_cache; int raw_window_cache; scalar_t__ chunk_index; scalar_t__ size; scalar_t__ header_size; scalar_t__ start; int item_index; int revision; TYPE_5__* sfile; } ;
typedef TYPE_6__ rep_state_t ;
struct TYPE_19__ {int combined_window_cache; int txdelta_window_cache; int raw_window_cache; } ;
typedef TYPE_7__ fs_fs_data_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 TYPE_5__* FUNC_1 (int *,int) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_2(rep_state_t *VAR_4,
               svn_fs_fs__rep_header_t *VAR_5,
               svn_fs_t *VAR_6,
               svn_fs_fs__revision_file_t *VAR_7,
               svn_fs_fs__p2l_entry_t* VAR_8,
               apr_pool_t *VAR_9)
{
  fs_fs_data_t *VAR_10 = VAR_6->fsap_data;
  shared_file_t *VAR_11 = FUNC_1(VAR_9, sizeof(*VAR_11));


  FUNC_0(VAR_8->type >= VAR_1
                 && VAR_8->type <= VAR_0);

  VAR_11->rfile = VAR_7;
  VAR_11->fs = VAR_6;
  VAR_11->revision = VAR_8->item.revision;
  VAR_11->pool = VAR_9;

  VAR_4->sfile = VAR_11;
  VAR_4->revision = VAR_8->item.revision;
  VAR_4->item_index = VAR_8->item.number;
  VAR_4->header_size = VAR_5->header_size;
  VAR_4->start = VAR_8->offset + VAR_4->header_size;
  VAR_4->current = VAR_5->type == VAR_3 ? 0 : 4;
  VAR_4->size = VAR_8->size - VAR_5->header_size - 7;
  VAR_4->ver = -1;
  VAR_4->chunk_index = 0;
  VAR_4->raw_window_cache = VAR_10->raw_window_cache;
  VAR_4->window_cache = VAR_10->txdelta_window_cache;
  VAR_4->combined_cache = VAR_10->combined_window_cache;

  return VAR_2;
}
