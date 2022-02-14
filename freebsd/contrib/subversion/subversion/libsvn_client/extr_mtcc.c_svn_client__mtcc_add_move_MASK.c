
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


typedef int svn_revnum_t ;
typedef int svn_error_t ;
struct TYPE_6__ {int base_revision; } ;
typedef TYPE_1__ svn_client__mtcc_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int VAR_2 ;
 int FUNC_1 (char const*,int ,TYPE_1__*,int *) ;
 int FUNC_2 (char const**,int *,char const*,int ,TYPE_1__*,int *,int *) ;
 int FUNC_3 (char const*,int ,char const*,TYPE_1__*,int *) ;

svn_error_t *
FUNC_4(const char *VAR_3,
                          const char *VAR_4,
                          svn_client__mtcc_t *VAR_5,
                          apr_pool_t *VAR_6)
{
  const char *VAR_7;
  svn_revnum_t VAR_8;

  FUNC_0(FUNC_2(&VAR_7, &VAR_8,
                          VAR_3, VAR_0, VAR_5,
                          VAR_6, VAR_6));

  FUNC_0(FUNC_3(VAR_3, VAR_5->base_revision,
                                    VAR_4, VAR_5, VAR_6));
  FUNC_0(FUNC_1(VAR_3, VAR_2, VAR_5, VAR_6));

  return VAR_1;
}
