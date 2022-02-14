
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_6__ TYPE_1__ ;


struct TYPE_6__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (int ,int ,int *,int *) ;
 int FUNC_2 (int *,int ,int *) ;
 int FUNC_3 (TYPE_1__**,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const svn_string_t **VAR_1,
                        const svn_string_t *VAR_2,
                        const svn_string_t *VAR_3,
                        apr_pool_t *VAR_4,
                        apr_pool_t *VAR_5)
{
  svn_mergeinfo_t VAR_6, VAR_7;
  svn_string_t *VAR_8;

  FUNC_0(FUNC_2(&VAR_6, VAR_2->data, VAR_5));
  FUNC_0(FUNC_2(&VAR_7, VAR_3->data, VAR_5));
  FUNC_0(FUNC_1(VAR_6, VAR_7, VAR_5,
                               VAR_5));
  FUNC_0(FUNC_3(&VAR_8, VAR_6, VAR_4));
  *VAR_1 = VAR_8;
  return VAR_0;
}
