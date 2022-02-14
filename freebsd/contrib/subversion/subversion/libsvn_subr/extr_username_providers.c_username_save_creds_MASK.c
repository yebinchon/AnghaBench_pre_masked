
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
typedef int svn_boolean_t ;
struct TYPE_2__ {int username; int may_save; } ;
typedef TYPE_1__ svn_auth_cred_simple_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 int * VAR_4 ;
 int * FUNC_0 (int *) ;
 int * FUNC_1 (int *,int ,char const*,char const*,int *) ;
 int FUNC_2 (int *) ;
 char* FUNC_3 (int *,int ) ;
 int FUNC_4 (int *,int ,int ) ;
 int FUNC_5 (int ,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_6(svn_boolean_t *VAR_5,
                    void *VAR_6,
                    void *VAR_7,
                    apr_hash_t *VAR_8,
                    const char *VAR_9,
                    apr_pool_t *VAR_10)
{
  svn_auth_cred_simple_t *VAR_11 = VAR_6;
  apr_hash_t *VAR_12 = ((void*)0);
  const char *VAR_13;
  svn_error_t *VAR_14;

  *VAR_5 = VAR_0;

  if (! VAR_11->may_save)
    return VAR_4;

  VAR_13 = FUNC_3(VAR_8, VAR_2);


  VAR_12 = FUNC_0(VAR_10);
  FUNC_4(VAR_12, VAR_3,
                FUNC_5(VAR_11->username, VAR_10));
  VAR_14 = FUNC_1(VAR_12, VAR_1,
                                   VAR_9, VAR_13, VAR_10);
  FUNC_2(VAR_14);
  *VAR_5 = ! VAR_14;

  return VAR_4;
}
