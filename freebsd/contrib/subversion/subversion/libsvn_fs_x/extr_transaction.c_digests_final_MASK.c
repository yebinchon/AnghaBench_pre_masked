
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_7__ TYPE_2__ ;
typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int has_sha1; int sha1_digest; int md5_digest; } ;
typedef TYPE_1__ svn_fs_x__representation_t ;
typedef int svn_error_t ;
struct TYPE_7__ {int digest; } ;
typedef TYPE_2__ svn_checksum_t ;
typedef int svn_checksum_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int ) ;
 int FUNC_2 (TYPE_2__**,int const*,int *) ;
 int FUNC_3 (TYPE_2__*) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_fs_x__representation_t *VAR_1,
              const svn_checksum_ctx_t *VAR_2,
              const svn_checksum_ctx_t *VAR_3,
              apr_pool_t *VAR_4)
{
  svn_checksum_t *VAR_5;

  FUNC_0(FUNC_2(&VAR_5, VAR_2, VAR_4));
  FUNC_1(VAR_1->md5_digest, VAR_5->digest, FUNC_3(VAR_5));
  VAR_1->has_sha1 = VAR_3 != ((void*)0);
  if (VAR_1->has_sha1)
    {
      FUNC_0(FUNC_2(&VAR_5, VAR_3, VAR_4));
      FUNC_1(VAR_1->sha1_digest, VAR_5->digest, FUNC_3(VAR_5));
    }

  return VAR_0;
}
