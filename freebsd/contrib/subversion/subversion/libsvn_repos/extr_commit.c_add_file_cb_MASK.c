
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;






typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int svn_checksum_t ;
struct ev2_baton {int inner; } ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,char const*,int const*,int *,int *,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_2(void *VAR_1,
            const char *VAR_2,
            const svn_checksum_t *VAR_3,
            svn_stream_t *VAR_4,
            apr_hash_t *VAR_5,
            svn_revnum_t VAR_6,
            apr_pool_t *VAR_7)
{
  struct ev2_baton *VAR_8 = VAR_1;

  FUNC_0(FUNC_1(VAR_8->inner, VAR_2, VAR_3, VAR_4, VAR_5,
                              VAR_6));
  return VAR_0;
}
