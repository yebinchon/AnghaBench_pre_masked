
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {char const* path; void* result_checksum; void* base_checksum; int * pool; TYPE_2__* root; } ;
typedef TYPE_1__ txdelta_baton_t ;
typedef int svn_txdelta_window_handler_t ;
struct TYPE_7__ {int fs; } ;
typedef TYPE_2__ svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 TYPE_1__* FUNC_1 (int *,int) ;
 void* FUNC_2 (int *,int *) ;
 int FUNC_3 (int ,int ,TYPE_1__*,int ,int *) ;
 int VAR_2 ;
 int VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_txdelta_window_handler_t *VAR_4,
                     void **VAR_5,
                     svn_fs_root_t *VAR_6,
                     const char *VAR_7,
                     svn_checksum_t *VAR_8,
                     svn_checksum_t *VAR_9,
                     apr_pool_t *VAR_10)
{
  txdelta_baton_t *VAR_11 = FUNC_1(VAR_10, sizeof(*VAR_11));

  VAR_11->root = VAR_6;
  VAR_11->path = VAR_7;
  VAR_11->pool = VAR_10;
  VAR_11->base_checksum = FUNC_2(VAR_8, VAR_10);
  VAR_11->result_checksum = FUNC_2(VAR_9, VAR_10);

  FUNC_0(FUNC_3(VAR_6->fs, VAR_2, VAR_11,
                                 VAR_0, VAR_10));

  *VAR_4 = VAR_3;
  *VAR_5 = VAR_11;
  return VAR_1;
}
