
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_8__ TYPE_1__ ;


typedef int svn_stringbuf_t ;
struct TYPE_8__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int serf_bucket_alloc_t ;
typedef int apr_pool_t ;


 int * VAR_0 ;
 int VAR_1 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*,int ,int *) ;
 TYPE_1__* FUNC_1 (int *,int *) ;
 int FUNC_2 (int **,TYPE_1__ const*,int *) ;
 scalar_t__ FUNC_3 (int ,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char **VAR_2,
                       const svn_string_t **VAR_3,
                       serf_bucket_alloc_t *VAR_4,
                       const svn_string_t *VAR_5,
                       apr_pool_t *VAR_6,
                       apr_pool_t *VAR_7)
{
  if (VAR_5 == ((void*)0))
    {
      *VAR_2 = ((void*)0);
      *VAR_3 = ((void*)0);
      return VAR_0;
    }



  if (FUNC_3(VAR_5->data, VAR_5->len))
    {
      svn_stringbuf_t *VAR_8 = ((void*)0);
      FUNC_2(&VAR_8, VAR_5, VAR_7);
      *VAR_2 = ((void*)0);
      *VAR_3 = FUNC_1(VAR_8, VAR_6);
    }
  else
    {
      *VAR_2 = "base64";
      *VAR_3 = FUNC_0(VAR_5, VAR_1, VAR_6);
    }

  return VAR_0;
}
