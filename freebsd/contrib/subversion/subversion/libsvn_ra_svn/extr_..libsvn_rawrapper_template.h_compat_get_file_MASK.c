
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_stream_t ;
typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {int * (* get_file ) (void*,char const*,int ,int *,int *,int **,int *) ;} ;


 TYPE_1__ VAR_0 ;
 int * FUNC_0 (void*,char const*,int ,int *,int *,int **,int *) ;

__attribute__((used)) static svn_error_t *FUNC_1(void *VAR_1,
                                    const char *VAR_2,
                                    svn_revnum_t VAR_3,
                                    svn_stream_t *VAR_4,
                                    svn_revnum_t *VAR_5,
                                    apr_hash_t **VAR_6,
                                    apr_pool_t *VAR_7)
{
  return VAR_0.get_file(VAR_1, VAR_2, VAR_3, VAR_4, VAR_5,
                       VAR_6, VAR_7);
}
