
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_2__ TYPE_1__ ;


typedef int svn_error_t ;
struct TYPE_2__ {scalar_t__ kind; } ;
typedef TYPE_1__ svn_dirent_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;
typedef int apr_hash_index_t ;


 int FUNC_0 (int ) ;
 int * VAR_0 ;
 int VAR_1 ;
 int * FUNC_1 (int *,int *) ;
 int * FUNC_2 (int *) ;
 int FUNC_3 (int *,void const**,int *,void**) ;
 char* FUNC_4 (char const*,char const*,int *) ;
 int FUNC_5 (int **,char const*,int ,int *,int *) ;
 int FUNC_6 (char const*,int ,int *,int *,int *) ;
 int FUNC_7 (char const*,int ,int *) ;
 scalar_t__ VAR_2 ;
 int FUNC_8 (int *) ;
 int * FUNC_9 (int *) ;
 int FUNC_10 (int *) ;

__attribute__((used)) static svn_error_t *
FUNC_11(const char *VAR_3,
                apr_pool_t *VAR_4)
{
  apr_hash_t *VAR_5;
  apr_hash_index_t *VAR_6;
  apr_pool_t *VAR_7 = FUNC_9(VAR_4);

  FUNC_0(FUNC_5(&VAR_5, VAR_3, VAR_1, VAR_4,
                              VAR_4));

  for (VAR_6 = FUNC_1(VAR_4, VAR_5);
       VAR_6;
       VAR_6 = FUNC_2(VAR_6))
    {
      const char *VAR_8;
      const char *VAR_9;
      svn_dirent_t *VAR_10;

      FUNC_8(VAR_7);
      FUNC_3(VAR_6, (const void **)&VAR_9, ((void*)0), (void **)&VAR_10);

      VAR_8 = FUNC_4(VAR_3, VAR_9, VAR_7);
      if (VAR_10->kind == VAR_2)
        FUNC_0(FUNC_6(VAR_8, VAR_1, ((void*)0), ((void*)0), VAR_7));
      else
        FUNC_0(FUNC_7(VAR_8, VAR_1, VAR_7));
    }

  FUNC_10(VAR_7);

  return VAR_0;
}
