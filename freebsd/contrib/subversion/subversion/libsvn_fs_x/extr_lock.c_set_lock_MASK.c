
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {int path; } ;
typedef TYPE_1__ svn_lock_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int FUNC_1 (char const**,char const*,int ,int *) ;
 int FUNC_2 (int **,int *,char const*,char const*,int *) ;
 int FUNC_3 (int *,TYPE_1__*,char const*,char const*,char const*,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_4(const char *VAR_1,
         svn_lock_t *VAR_2,
         const char *VAR_3,
         apr_pool_t *VAR_4)
{
  const char *VAR_5;
  apr_hash_t *VAR_6;

  FUNC_0(FUNC_1(&VAR_5, VAR_1, VAR_2->path,
                                VAR_4));



  FUNC_0(FUNC_2(&VAR_6, ((void*)0), VAR_1, VAR_5,
                           VAR_4));

  FUNC_0(FUNC_3(VAR_6, VAR_2, VAR_1, VAR_5,
                            VAR_3, VAR_4));

  return VAR_0;
}
