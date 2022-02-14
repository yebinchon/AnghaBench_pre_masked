
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_4__ TYPE_1__ ;


struct TYPE_4__ {scalar_t__ data; } ;
typedef TYPE_1__ svn_string_t ;
typedef char const* svn_revnum_t ;
typedef int svn_fs_txn_t ;
typedef int svn_fs_t ;
typedef int svn_fs_root_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 char* VAR_0 ;
 int * VAR_1 ;
 int VAR_2 ;
 int VAR_3 ;
 char* FUNC_1 (int *,char*,char const*,char const*,...) ;
 scalar_t__ FUNC_2 (int *) ;
 int FUNC_3 (int **,int *,char const*,int *) ;
 int FUNC_4 (TYPE_1__**,int *,char const*,int ,int ,int *,int *) ;
 char* FUNC_5 (int *) ;
 int * FUNC_6 (int *) ;
 int FUNC_7 (TYPE_1__**,int *,int ,int *) ;
 char* FUNC_8 (int *,int *) ;

__attribute__((used)) static svn_error_t *
FUNC_9(const char **VAR_4,
               svn_fs_root_t *VAR_5,
               const char *VAR_6,
               apr_pool_t *VAR_7)
{
  svn_string_t *VAR_8;
  const char *VAR_9;
  const char *VAR_10 = ((void*)0);
  svn_revnum_t VAR_11 = VAR_0;

  if (VAR_5)
    {
      svn_fs_t *VAR_12 = FUNC_6(VAR_5);
      if (FUNC_2(VAR_5))
        {
          VAR_11 = FUNC_5(VAR_5);
          FUNC_0(FUNC_4(&VAR_8, VAR_12, VAR_11,
                                        VAR_2, VAR_3,
                                        VAR_7, VAR_7));
        }
      else
        {
          svn_fs_txn_t *VAR_13;
          VAR_10 = FUNC_8(VAR_5, VAR_7);
          FUNC_0(FUNC_3(&VAR_13, VAR_12, VAR_10, VAR_7));
          FUNC_0(FUNC_7(&VAR_8, VAR_13, VAR_2, VAR_7));
        }
    }
  else
    {
      VAR_11 = 0;
      VAR_8 = ((void*)0);
    }

  if (VAR_8)
    VAR_9 = FUNC_1(VAR_7, "%.10s %.8s UTC", VAR_8->data, VAR_8->data + 11);
  else
    VAR_9 = "                       ";

  if (VAR_10)
    *VAR_4 = FUNC_1(VAR_7, "%s\t%s (txn %s)",
                          VAR_6, VAR_9, VAR_10);
  else
    *VAR_4 = FUNC_1(VAR_7, "%s\t%s (rev %ld)",
                          VAR_6, VAR_9, VAR_11);
  return VAR_1;
}
