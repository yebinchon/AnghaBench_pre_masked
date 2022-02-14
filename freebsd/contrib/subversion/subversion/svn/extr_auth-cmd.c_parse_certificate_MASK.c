
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_5__ TYPE_1__ ;


typedef int svn_x509_certinfo_t ;
struct TYPE_5__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef int apr_pool_t ;


 int VAR_0 ;
 TYPE_1__* FUNC_0 (TYPE_1__ const*,int *) ;
 int FUNC_1 (int *) ;
 int FUNC_2 (int ,int *,char*) ;
 int * FUNC_3 (int **,int ,int ,int *,int *) ;

__attribute__((used)) static svn_x509_certinfo_t *
FUNC_4(const svn_string_t *VAR_1,
                  svn_boolean_t VAR_2,
                  apr_pool_t *VAR_3,
                  apr_pool_t *VAR_4)
{
  svn_x509_certinfo_t *VAR_5;
  const svn_string_t *VAR_6;
  svn_error_t *VAR_7;


  VAR_6 = FUNC_0(VAR_1, VAR_4);

  VAR_7 = FUNC_3(&VAR_5, VAR_6->data, VAR_6->len,
                            VAR_3, VAR_4);
  if (VAR_7)
    {

      if (VAR_2)
        FUNC_2(VAR_0, VAR_7, "svn: ");
      FUNC_1(VAR_7);
      return ((void*)0);
    }

  return VAR_5;
}
