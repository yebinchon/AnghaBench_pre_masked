
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


struct TYPE_3__ {scalar_t__ schedule; scalar_t__ depth; scalar_t__ deleted; scalar_t__ absent; } ;
typedef TYPE_1__ svn_wc_entry_t ;
typedef int svn_error_t ;
typedef int apr_pool_t ;
typedef int apr_hash_t ;


 int VAR_0 ;
 int * VAR_1 ;
 int FUNC_0 (char*) ;
 int FUNC_1 (char const*) ;
 scalar_t__ VAR_2 ;
 scalar_t__ FUNC_2 (char const*,int ) ;
 char* FUNC_3 (char const*,char const*,int *) ;
 int FUNC_4 (char const*,int *) ;
 int FUNC_5 (char const**,char const**,char const*,int *) ;
 int FUNC_6 (int *) ;
 int * FUNC_7 (int ,int *,int ,int ,...) ;
 TYPE_1__* FUNC_8 (int *,char const*) ;
 int * FUNC_9 (int **,char const*,int *,int *) ;
 scalar_t__ VAR_3 ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char *VAR_4,
              apr_pool_t *VAR_5)
{
  apr_hash_t *VAR_6;
  const char *VAR_7, *VAR_8;
  svn_wc_entry_t *VAR_9;
  svn_error_t *VAR_10 = FUNC_9(&VAR_6, VAR_4,
                                              VAR_5, VAR_5);
  if (VAR_10)
    {
      return FUNC_7(
        VAR_0, VAR_10,
        FUNC_0("Can't upgrade '%s' as it is not a working copy"),
        FUNC_4(VAR_4, VAR_5));
    }
  else if (FUNC_2(VAR_4, FUNC_1(VAR_4)))
    return VAR_1;

  FUNC_5(&VAR_7, &VAR_8, VAR_4, VAR_5);

  VAR_10 = FUNC_9(&VAR_6, VAR_7,
                                 VAR_5, VAR_5);
  if (VAR_10)
    {
      FUNC_6(VAR_10);
      return VAR_1;
    }

  VAR_9 = FUNC_8(VAR_6, VAR_8);
  if (!VAR_9
      || VAR_9->absent
      || (VAR_9->deleted && VAR_9->schedule != VAR_3)
      || VAR_9->depth == VAR_2)
    {
      return VAR_1;
    }

  while (!FUNC_2(VAR_7, FUNC_1(VAR_7)))
    {
      FUNC_5(&VAR_7, &VAR_8, VAR_7, VAR_5);
      VAR_10 = FUNC_9(&VAR_6, VAR_7,
                                     VAR_5, VAR_5);
      if (VAR_10)
        {
          FUNC_6(VAR_10);
          VAR_7 = FUNC_3(VAR_7, VAR_8, VAR_5);
          break;
        }
      VAR_9 = FUNC_8(VAR_6, VAR_8);
      if (!VAR_9
          || VAR_9->absent
          || (VAR_9->deleted && VAR_9->schedule != VAR_3)
          || VAR_9->depth == VAR_2)
        {
          VAR_7 = FUNC_3(VAR_7, VAR_8, VAR_5);
          break;
        }
    }

  return FUNC_7(
    VAR_0, ((void*)0),
    FUNC_0("Can't upgrade '%s' as it is not a working copy root,"
      " the root is '%s'"),
    FUNC_4(VAR_4, VAR_5),
    FUNC_4(VAR_7, VAR_5));
}
