
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {int len; int data; } ;
typedef TYPE_1__ svn_string_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int * FUNC_1 (int *) ;
 int FUNC_2 (int *,int ,int ) ;
 int FUNC_3 (char const**,char const*,int *) ;
 int FUNC_4 (int *,char const*,int ) ;

__attribute__((used)) static svn_error_t *
FUNC_5(apr_hash_t *VAR_1,
              const char *VAR_2,
              const svn_string_t *VAR_3)
{
  apr_pool_t *VAR_4 = FUNC_1(VAR_1);
  const char *VAR_5;

  if (! VAR_3)
    return VAR_0;

  FUNC_0(FUNC_3(&VAR_5, VAR_2, VAR_4));

  FUNC_4(VAR_1, VAR_5,
                FUNC_2(VAR_4, VAR_3->data,
                               VAR_3->len));

  return VAR_0;
}
