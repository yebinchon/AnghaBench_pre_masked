
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int trail_t ;
typedef int svn_fs_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct TYPE_3__ {int sha1_checksum; int md5_checksum; } ;
typedef TYPE_1__ representation_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int ,int *) ;
 int FUNC_2 (TYPE_1__**,int *,char const*,int *,int *) ;

svn_error_t *
FUNC_3(svn_checksum_t **VAR_1,
                                    svn_checksum_t **VAR_2,
                                    svn_fs_t *VAR_3,
                                    const char *VAR_4,
                                    trail_t *VAR_5,
                                    apr_pool_t *VAR_6)
{
  representation_t *VAR_7;

  FUNC_0(FUNC_2(&VAR_7, VAR_3, VAR_4, VAR_5, VAR_6));
  if (VAR_1)
    *VAR_1 = FUNC_1(VAR_7->md5_checksum, VAR_6);
  if (VAR_2)
    *VAR_2 = FUNC_1(VAR_7->sha1_checksum, VAR_6);

  return VAR_0;
}
