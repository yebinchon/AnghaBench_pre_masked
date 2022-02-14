
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_2__ {int * (* get_dir ) (void*,int **,int *,int **,char const*,int ,int ,int *) ;} ;


 int VAR_0 ;
 TYPE_1__ VAR_1 ;
 int * FUNC_0 (void*,int **,int *,int **,char const*,int ,int ,int *) ;

__attribute__((used)) static svn_error_t *FUNC_1(void *VAR_2,
                                   const char *VAR_3,
                                   svn_revnum_t VAR_4,
                                   apr_hash_t **VAR_5,
                                   svn_revnum_t *VAR_6,
                                   apr_hash_t **VAR_7,
                                   apr_pool_t *VAR_8)
{
  return VAR_1.get_dir(VAR_2, VAR_5, VAR_6, VAR_7,
                      VAR_3, VAR_4, VAR_0, VAR_8);
}
