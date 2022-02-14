
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
 int VAR_1 ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int *,int *,int ,int ,int ,int *,int *) ;
 int FUNC_3 (int *,int ,int *) ;
 scalar_t__ FUNC_4 (TYPE_1__ const*,TYPE_1__ const*) ;

__attribute__((used)) static svn_error_t *
FUNC_5(svn_mergeinfo_t *VAR_2, svn_mergeinfo_t *VAR_3,
                     const svn_string_t *VAR_4,
                     const svn_string_t *VAR_5, apr_pool_t *VAR_6)
{
  if (FUNC_4(VAR_4, VAR_5))
    {

      *VAR_2 = FUNC_1(VAR_6);
      *VAR_3 = FUNC_1(VAR_6);
    }
  else
    {
      svn_mergeinfo_t VAR_7, VAR_8;
      FUNC_0(FUNC_3(&VAR_7, VAR_4->data, VAR_6));
      FUNC_0(FUNC_3(&VAR_8, VAR_5->data, VAR_6));
      FUNC_0(FUNC_2(VAR_2, VAR_3, VAR_7, VAR_8,
                                  VAR_1, VAR_6, VAR_6));
    }
  return VAR_0;
}
