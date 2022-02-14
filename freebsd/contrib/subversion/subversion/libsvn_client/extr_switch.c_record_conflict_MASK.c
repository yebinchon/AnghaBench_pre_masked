
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_wc_conflict_result_t ;
struct TYPE_3__ {int local_abspath; } ;
typedef TYPE_1__ svn_wc_conflict_description2_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int * VAR_0 ;
 int FUNC_0 (int *) ;
 int FUNC_1 (int ,int ) ;
 int FUNC_2 (int *,int ,char*) ;
 int VAR_1 ;
 int * FUNC_3 (int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(svn_wc_conflict_result_t **VAR_2,
                const svn_wc_conflict_description2_t *VAR_3,
                void *VAR_4,
                apr_pool_t *VAR_5,
                apr_pool_t *VAR_6)
{
  apr_hash_t *VAR_7 = VAR_4;

  FUNC_2(VAR_7,
                FUNC_1(FUNC_0(VAR_7),
                            VAR_3->local_abspath), "");
  *VAR_2 = FUNC_3(VAR_1,
                                          ((void*)0), VAR_5);
  return VAR_0;
}
