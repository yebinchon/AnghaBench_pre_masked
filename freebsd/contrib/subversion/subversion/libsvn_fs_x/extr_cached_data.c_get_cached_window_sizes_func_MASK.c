
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_3__ ;
typedef struct TYPE_8__ TYPE_2__ ;
typedef struct TYPE_7__ TYPE_1__ ;


struct TYPE_7__ {int target_len; scalar_t__ packed_len; } ;
typedef TYPE_1__ window_sizes_t ;
struct TYPE_8__ {int tview_len; } ;
typedef TYPE_2__ svn_txdelta_window_t ;
struct TYPE_9__ {scalar_t__ start_offset; scalar_t__ end_offset; int window; } ;
typedef TYPE_3__ svn_fs_x__txdelta_cached_window_t ;
typedef int svn_error_t ;
typedef int apr_size_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 TYPE_1__* FUNC_0 (int *,int) ;
 TYPE_2__* FUNC_1 (TYPE_3__ const*,void const**) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void **VAR_1,
                             const void *VAR_2,
                             apr_size_t VAR_3,
                             void *VAR_4,
                             apr_pool_t *VAR_5)
{
  const svn_fs_x__txdelta_cached_window_t *VAR_6 = VAR_2;
  const svn_txdelta_window_t *VAR_7
    = FUNC_1(VAR_6, (const void **)&VAR_6->window);

  window_sizes_t *VAR_8 = FUNC_0(VAR_5, sizeof(*VAR_8));
  VAR_8->packed_len = VAR_6->end_offset - VAR_6->start_offset;
  VAR_8->target_len = VAR_7->tview_len;

  *VAR_1 = VAR_8;

  return VAR_0;
}
