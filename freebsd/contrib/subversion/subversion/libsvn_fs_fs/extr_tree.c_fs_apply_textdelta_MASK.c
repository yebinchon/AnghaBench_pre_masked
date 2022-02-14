
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {void* result_checksum; void* base_checksum; int * pool; int path; int * root; } ;
typedef TYPE_1__ txdelta_baton_t ;
typedef int svn_txdelta_window_handler_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (TYPE_1__*,int *) ;
 TYPE_1__* FUNC_2 (int *,int) ;
 void* FUNC_3 (int *,int *) ;
 int FUNC_4 (char const*,int *) ;
 int VAR_1 ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_txdelta_window_handler_t *VAR_2,
                   void **VAR_3,
                   svn_fs_root_t *VAR_4,
                   const char *VAR_5,
                   svn_checksum_t *VAR_6,
                   svn_checksum_t *VAR_7,
                   apr_pool_t *VAR_8)
{
  txdelta_baton_t *VAR_9 = FUNC_2(VAR_8, sizeof(*VAR_9));

  VAR_9->root = VAR_4;
  VAR_9->path = FUNC_4(VAR_5, VAR_8);
  VAR_9->pool = VAR_8;
  VAR_9->base_checksum = FUNC_3(VAR_6, VAR_8);
  VAR_9->result_checksum = FUNC_3(VAR_7, VAR_8);

  FUNC_0(FUNC_1(VAR_9, VAR_8));

  *VAR_2 = VAR_1;
  *VAR_3 = VAR_9;
  return VAR_0;
}
