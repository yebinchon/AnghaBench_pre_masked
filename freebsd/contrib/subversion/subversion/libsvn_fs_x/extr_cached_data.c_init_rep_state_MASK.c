
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


typedef int svn_fs_x__revision_file_t ;
struct TYPE_14__ {scalar_t__ header_size; } ;
typedef TYPE_2__ svn_fs_x__rep_header_t ;
struct TYPE_15__ {scalar_t__ type; int item_count; scalar_t__ size; scalar_t__ offset; TYPE_1__* items; } ;
typedef TYPE_3__ svn_fs_x__p2l_entry_t ;
struct TYPE_16__ {int combined_window_cache; int txdelta_window_cache; } ;
typedef TYPE_4__ svn_fs_x__data_t ;
struct TYPE_17__ {TYPE_4__* fsap_data; } ;
typedef TYPE_5__ svn_fs_t ;
typedef int svn_error_t ;
struct TYPE_18__ {int * pool; int revision; TYPE_5__* fs; int * rfile; } ;
typedef TYPE_6__ shared_file_t ;
struct TYPE_13__ {int change_set; } ;
struct TYPE_19__ {int current; int ver; int combined_cache; int window_cache; scalar_t__ chunk_index; scalar_t__ size; scalar_t__ header_size; scalar_t__ start; TYPE_1__ rep_id; TYPE_6__* sfile; } ;
typedef TYPE_7__ rep_state_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int * VAR_2 ;
 TYPE_6__* FUNC_1 (int *,int) ;
 int FUNC_2 (int ) ;

__attribute__((used)) static svn_error_t *
FUNC_3(rep_state_t *VAR_3,
               svn_fs_x__rep_header_t *VAR_4,
               svn_fs_t *VAR_5,
               svn_fs_x__revision_file_t *VAR_6,
               svn_fs_x__p2l_entry_t* VAR_7,
               apr_pool_t *VAR_8)
{
  svn_fs_x__data_t *VAR_9 = VAR_5->fsap_data;
  shared_file_t *VAR_10 = FUNC_1(VAR_8, sizeof(*VAR_10));


  FUNC_0(VAR_7->type >= VAR_1
                 && VAR_7->type <= VAR_0);
  FUNC_0(VAR_7->item_count == 1);

  VAR_10->rfile = VAR_6;
  VAR_10->fs = VAR_5;
  VAR_10->revision = FUNC_2(VAR_7->items[0].change_set);
  VAR_10->pool = VAR_8;

  VAR_3->sfile = VAR_10;
  VAR_3->rep_id = VAR_7->items[0];
  VAR_3->header_size = VAR_4->header_size;
  VAR_3->start = VAR_7->offset + VAR_3->header_size;
  VAR_3->current = 4;
  VAR_3->size = VAR_7->size - VAR_4->header_size - 7;
  VAR_3->ver = 1;
  VAR_3->chunk_index = 0;
  VAR_3->window_cache = VAR_9->txdelta_window_cache;
  VAR_3->combined_cache = VAR_9->combined_window_cache;

  return VAR_2;
}
