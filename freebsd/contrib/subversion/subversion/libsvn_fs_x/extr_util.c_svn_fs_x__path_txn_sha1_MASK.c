
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_fs_x__txn_id_t ;
typedef int svn_fs_t ;
struct TYPE_3__ {unsigned char const* digest; int kind; } ;
typedef TYPE_1__ svn_checksum_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (TYPE_1__*,int *) ;
 char const* FUNC_1 (int ,int ,int *) ;
 int FUNC_2 (int *,int ,int *) ;

const char *
FUNC_3(svn_fs_t *VAR_1,
                        svn_fs_x__txn_id_t VAR_2,
                        const unsigned char *VAR_3,
                        apr_pool_t *VAR_4)
{
  svn_checksum_t VAR_5;
  VAR_5.digest = VAR_3;
  VAR_5.kind = VAR_0;

  return FUNC_1(FUNC_2(VAR_1, VAR_2, VAR_4),
                         FUNC_0(&VAR_5, VAR_4),
                         VAR_4);
}
