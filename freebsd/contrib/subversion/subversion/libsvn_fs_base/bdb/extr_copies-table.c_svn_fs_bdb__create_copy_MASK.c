
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_fs_id_t ;
typedef int svn_error_t ;
struct TYPE_3__ {char const* src_path; char const* src_txn_id; int const* dst_noderev_id; int kind; } ;
typedef TYPE_1__ copy_t ;
typedef int copy_kind_t ;
typedef int apr_pool_t ;


 int * FUNC_0 (int *,TYPE_1__*,char const*,int *,int *) ;

svn_error_t *
FUNC_1(svn_fs_t *VAR_0,
                        const char *VAR_1,
                        const char *VAR_2,
                        const char *VAR_3,
                        const svn_fs_id_t *VAR_4,
                        copy_kind_t VAR_5,
                        trail_t *VAR_6,
                        apr_pool_t *VAR_7)
{
  copy_t VAR_8;
  VAR_8.kind = VAR_5;
  VAR_8.src_path = VAR_2;
  VAR_8.src_txn_id = VAR_3;
  VAR_8.dst_noderev_id = VAR_4;
  return FUNC_0(VAR_0, &VAR_8, VAR_1, VAR_6, VAR_7);
}
