
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_2__ ;
typedef struct TYPE_8__ TYPE_1__ ;


struct TYPE_8__ {int sdb; } ;
typedef TYPE_1__ svn_wc__db_wcroot_t ;
typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int svn_boolean_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
struct TYPE_9__ {scalar_t__ nelts; } ;
typedef TYPE_2__ apr_array_header_t ;


 int VAR_0 ;
 int FUNC_0 (int ) ;
 int * VAR_1 ;
 int FUNC_1 (int ,int const*,int *) ;
 int FUNC_2 (int **,TYPE_1__*,char const*,int ,int *,int *) ;
 int FUNC_3 (TYPE_2__**,int *,int *,int *) ;
 int FUNC_4 (TYPE_1__*,char const*,int const*,int *) ;
 int FUNC_5 (TYPE_1__*,char const*,int *,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_wc__db_wcroot_t *VAR_2,
              const char *VAR_3,
              apr_hash_t *VAR_4,
              svn_boolean_t VAR_5,
              const svn_skel_t *VAR_6,
              const svn_skel_t *VAR_7,
              apr_pool_t *VAR_8)
{
  apr_hash_t *VAR_9;




  FUNC_0(FUNC_2(&VAR_9, VAR_2, VAR_3, VAR_0,
                                 VAR_8, VAR_8));
  if (VAR_4 && VAR_9)
    {
      apr_array_header_t *VAR_10;

      FUNC_0(FUNC_3(&VAR_10, VAR_4, VAR_9,
                             VAR_8));
      if (VAR_10->nelts == 0)
        VAR_4 = ((void*)0);
    }

  FUNC_0(FUNC_5(VAR_2, VAR_3, VAR_4,
                                           VAR_5, VAR_8));


  FUNC_0(FUNC_1(VAR_2->sdb, VAR_7, VAR_8));
  if (VAR_6)
    FUNC_0(FUNC_4(VAR_2, VAR_3,
                                              VAR_6, VAR_8));

  return VAR_1;
}
