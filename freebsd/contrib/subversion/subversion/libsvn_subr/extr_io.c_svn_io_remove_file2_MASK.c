
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_3__ TYPE_1__ ;


typedef int svn_error_t ;
typedef scalar_t__ svn_boolean_t ;
typedef scalar_t__ apr_status_t ;
typedef int apr_pool_t ;
struct TYPE_3__ {scalar_t__ filetype; } ;
typedef TYPE_1__ apr_finfo_t ;


 int VAR_0 ;
 scalar_t__ FUNC_0 (int ) ;
 scalar_t__ VAR_1 ;
 scalar_t__ FUNC_1 (scalar_t__) ;
 scalar_t__ FUNC_2 (scalar_t__) ;
 scalar_t__ FUNC_3 (scalar_t__) ;
 int VAR_2 ;
 int VAR_3 ;
 int FUNC_4 (int ) ;
 int * VAR_4 ;
 scalar_t__ FUNC_5 (scalar_t__) ;
 int FUNC_6 (scalar_t__,scalar_t__) ;
 int FUNC_7 (char*) ;
 scalar_t__ FUNC_8 (char const*,int *) ;
 int FUNC_9 (TYPE_1__*,char const*,int ,int *) ;
 int FUNC_10 (char const**,char const*,int *) ;
 int FUNC_11 (char const*,int *) ;
 int * FUNC_12 (scalar_t__,int ,int ) ;
 int FUNC_13 (char const*,scalar_t__,int *) ;

svn_error_t *
FUNC_14(const char *VAR_5,
                    svn_boolean_t VAR_6,
                    apr_pool_t *VAR_7)
{
  apr_status_t VAR_8;
  const char *VAR_9;

  FUNC_4(FUNC_10(&VAR_9, VAR_5, VAR_7));

  VAR_8 = FUNC_8(VAR_9, VAR_7);
  if (!VAR_8)
    {
      return VAR_4;
    }
  else if (VAR_6 && (FUNC_3(VAR_8)
                             || FUNC_5(VAR_8)))
    {
      return VAR_4;
    }
  else
    {
      return FUNC_12(VAR_8, FUNC_7("Can't remove file '%s'"),
                                FUNC_11(VAR_5, VAR_7));
    }
}
