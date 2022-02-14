
typedef unsigned long size_t;
typedef long intptr_t; typedef unsigned long uintptr_t;
typedef long scalar_t__;

typedef int bool;




typedef struct TYPE_9__ TYPE_1__ ;


typedef int svn_opt_revision_t ;
struct TYPE_9__ {scalar_t__ apr_err; } ;
typedef TYPE_1__ svn_error_t ;
typedef int svn_client_ctx_t ;
typedef int apr_pool_t ;


 int FUNC_0 (int ) ;
 scalar_t__ VAR_0 ;
 scalar_t__ VAR_1 ;
 int VAR_2 ;
 scalar_t__ VAR_3 ;
 scalar_t__ VAR_4 ;
 scalar_t__ VAR_5 ;
 TYPE_1__* VAR_6 ;
 int FUNC_1 (char*) ;
 scalar_t__ FUNC_2 (char const*,char const*) ;
 TYPE_1__* FUNC_3 (char const**,int *,char const*,int *,int *,int *) ;
 int FUNC_4 (char const**,char const*,int *) ;
 int FUNC_5 (TYPE_1__*) ;
 TYPE_1__* FUNC_6 (int ,int *,int ) ;
 TYPE_1__* FUNC_7 (TYPE_1__*) ;
 int FUNC_8 (int *,char const**,char const*,int *) ;
 int FUNC_9 (char const*) ;

__attribute__((used)) static svn_error_t *
FUNC_10(const char **VAR_7,
                         const char *VAR_8,
                         svn_client_ctx_t *VAR_9,
                         apr_pool_t *VAR_10)
{
  svn_error_t *VAR_11;
  const char *VAR_12;
  const char *VAR_13;
  svn_opt_revision_t VAR_14;

  FUNC_0(FUNC_8(&VAR_14, &VAR_13, VAR_8, VAR_10));
  if (!FUNC_9(VAR_13))
    FUNC_0(FUNC_4(&VAR_13, VAR_13, VAR_10));

  VAR_11 = FUNC_3(&VAR_12, ((void*)0), VAR_13,
                                  VAR_9, VAR_10, VAR_10);

  if (VAR_11)
    {
      if ((VAR_11->apr_err == VAR_1)
          || (VAR_11->apr_err == VAR_5)
          || (VAR_11->apr_err == VAR_4)
          || (VAR_11->apr_err == VAR_3)
          || (VAR_11->apr_err == VAR_0))
        {
          FUNC_5(VAR_11);
          return VAR_6;
        }
      else
        return FUNC_7(VAR_11);
     }

   if (*VAR_7 && VAR_12)
     {
       if (FUNC_2(*VAR_7, VAR_12) != 0)
         return FUNC_6(VAR_2, ((void*)0),
                                  FUNC_1("All non-relative targets must have "
                                    "the same root URL"));
     }
   else
     *VAR_7 = VAR_12;

   return VAR_6;
}
