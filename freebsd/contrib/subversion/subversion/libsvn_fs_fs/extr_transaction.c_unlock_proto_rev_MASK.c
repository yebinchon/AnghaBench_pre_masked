
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_fs_t ;
typedef int svn_fs_fs__id_part_t ;
typedef int svn_error_t ;
struct unlock_proto_rev_baton {void* lockcookie; int txn_id; } ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int * FUNC_0 (int *,int ,struct unlock_proto_rev_baton*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_1(svn_fs_t *VAR_1,
                 const svn_fs_fs__id_part_t *VAR_2,
                 void *VAR_3,
                 apr_pool_t *VAR_4)
{
  struct unlock_proto_rev_baton VAR_5;

  VAR_5.txn_id = *VAR_2;
  VAR_5.lockcookie = VAR_3;
  return FUNC_0(VAR_1, VAR_0, &VAR_5, VAR_4);
}
