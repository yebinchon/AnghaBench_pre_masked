
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_skel_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;
struct TYPE_2__ {char* data; } ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *) ;
 int * FUNC_4 (int *) ;
 int FUNC_5 (int *,int *) ;
 TYPE_1__* FUNC_6 (int *,int *) ;
 int FUNC_7 (int **,int ,int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_8(const char **VAR_1,
                     apr_hash_t *VAR_2,
                     apr_pool_t *VAR_3)
{
  svn_skel_t *VAR_4 = FUNC_4(VAR_3);
  apr_hash_index_t *VAR_5;

  for (VAR_5 = FUNC_1(VAR_3, VAR_2); VAR_5; VAR_5 = FUNC_2(VAR_5))
    {
      svn_skel_t *VAR_6;

      FUNC_0(FUNC_7(&VAR_6, FUNC_3(VAR_5),
                                         VAR_3, VAR_3));
      FUNC_5(VAR_6, VAR_4);
    }

  *VAR_1 = FUNC_6(VAR_4, VAR_3)->data;

  return VAR_0;
}
