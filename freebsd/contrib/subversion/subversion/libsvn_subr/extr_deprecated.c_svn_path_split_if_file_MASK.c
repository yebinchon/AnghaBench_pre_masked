
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_10__ TYPE_2__ ;
typedef struct TYPE_9__ TYPE_1__ ;


struct TYPE_9__ {int apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int apr_pool_t ;
struct TYPE_10__ {scalar_t__ filetype; } ;
typedef TYPE_2__ apr_finfo_t ;


 scalar_t__ VAR_0 ;
 int VAR_1 ;
 scalar_t__ VAR_2 ;
 int FUNC_0 (int ) ;
 char* VAR_3 ;
 int FUNC_1 (int ) ;
 int VAR_4 ;
 TYPE_1__* VAR_5 ;
 int FUNC_2 (char*) ;
 int FUNC_3 (TYPE_1__*) ;
 TYPE_1__* FUNC_4 (int ,int *,int ,int ) ;
 TYPE_1__* FUNC_5 (TYPE_2__*,char const*,int ,int *) ;
 int FUNC_6 (char const*,int *) ;
 int FUNC_7 (char const*,int *) ;
 int FUNC_8 (char const*,char const**,char const**,int *) ;

svn_error_t *
FUNC_9(const char *VAR_6,
                       const char **VAR_7,
                       const char **VAR_8,
                       apr_pool_t *VAR_9)
{
  apr_finfo_t VAR_10;
  svn_error_t *VAR_11;

  FUNC_1(FUNC_6(VAR_6, VAR_9));

  VAR_11 = FUNC_5(&VAR_10, VAR_6, VAR_1, VAR_9);
  if (VAR_11 && ! FUNC_0(VAR_11->apr_err))
    return VAR_11;

  if (VAR_11 || VAR_10.filetype == VAR_2)
    {
      FUNC_3(VAR_11);
      FUNC_8(VAR_6, VAR_7, VAR_8, VAR_9);
    }
  else if (VAR_10.filetype == VAR_0)
    {
      *VAR_7 = VAR_6;
      *VAR_8 = VAR_3;
    }
  else
    {
      return FUNC_4(VAR_4, ((void*)0),
                               FUNC_2("'%s' is neither a file nor a directory name"),
                               FUNC_7(VAR_6, VAR_9));
    }

  return VAR_5;
}
