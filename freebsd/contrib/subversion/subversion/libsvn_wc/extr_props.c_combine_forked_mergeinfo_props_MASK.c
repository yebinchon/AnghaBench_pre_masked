
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_mergeinfo_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int FUNC_1 (int *,int *,TYPE_1__ const*,TYPE_1__ const*,int *) ;
 int FUNC_2 (int ,int ,int *,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 int FUNC_4 (int *,int ,int ,int ,int *,int *) ;
 int FUNC_5 (TYPE_1__**,int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(const svn_string_t **VAR_2,
                               const svn_string_t *VAR_3,
                               const svn_string_t *VAR_4,
                               const svn_string_t *VAR_5,
                               apr_pool_t *VAR_6,
                               apr_pool_t *VAR_7)
{
  svn_mergeinfo_t VAR_8, VAR_9, VAR_10, VAR_11, VAR_12;
  svn_string_t *VAR_13;


  FUNC_0(FUNC_1(&VAR_9, &VAR_10, VAR_3,
                               VAR_4, VAR_7));
  FUNC_0(FUNC_1(&VAR_11, &VAR_12, VAR_3,
                               VAR_5, VAR_7));
  FUNC_0(FUNC_2(VAR_9, VAR_11,
                               VAR_7, VAR_7));
  FUNC_0(FUNC_2(VAR_10, VAR_12,
                               VAR_7, VAR_7));


  FUNC_0(FUNC_3(&VAR_8, VAR_3->data,
                              VAR_7));
  FUNC_0(FUNC_2(VAR_8, VAR_10,
                               VAR_7, VAR_7));

  FUNC_0(FUNC_4(&VAR_8, VAR_9, VAR_8,
                                VAR_1, VAR_7, VAR_7));

  FUNC_0(FUNC_5(&VAR_13, VAR_8,
                                  VAR_6));
  *VAR_2 = VAR_13;
  return VAR_0;
}
